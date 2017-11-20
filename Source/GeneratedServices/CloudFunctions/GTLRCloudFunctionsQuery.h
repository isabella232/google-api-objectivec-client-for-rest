// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Functions API (cloudfunctions/v1)
// Description:
//   API for managing lightweight user-provided functions executed in response
//   to events.
// Documentation:
//   https://cloud.google.com/functions

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudFunctions_CallFunctionRequest;
@class GTLRCloudFunctions_CloudFunction;
@class GTLRCloudFunctions_GenerateDownloadUrlRequest;
@class GTLRCloudFunctions_GenerateUploadUrlRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud Functions query classes.
 */
@interface GTLRCloudFunctionsQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: cloudfunctions.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudFunctionsCloudPlatform
 */
@interface GTLRCloudFunctionsQuery_OperationsGet : GTLRCloudFunctionsQuery
// Previous library name was
//   +[GTLQueryCloudFunctions queryForOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudFunctions_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @returns GTLRCloudFunctionsQuery_OperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`. To
 *  override the binding, API services can add a binding such as
 *  `"/v1/{name=users/ *}/operations"` to their service configuration.
 *  For backwards compatibility, the default name includes the operations
 *  collection id, however overriding users must ensure the name binding
 *  is the parent resource, without the operations collection id.
 *
 *  Method: cloudfunctions.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudFunctionsCloudPlatform
 */
@interface GTLRCloudFunctionsQuery_OperationsList : GTLRCloudFunctionsQuery
// Previous library name was
//   +[GTLQueryCloudFunctions queryForOperationsList]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudFunctions_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`. To
 *  override the binding, API services can add a binding such as
 *  `"/v1/{name=users/ *}/operations"` to their service configuration.
 *  For backwards compatibility, the default name includes the operations
 *  collection id, however overriding users must ensure the name binding
 *  is the parent resource, without the operations collection id.
 *
 *  @returns GTLRCloudFunctionsQuery_OperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Invokes synchronously deployed function. To be used for testing, very
 *  limited traffic allowed.
 *
 *  Method: cloudfunctions.projects.locations.functions.call
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudFunctionsCloudPlatform
 */
@interface GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsCall : GTLRCloudFunctionsQuery
// Previous library name was
//   +[GTLQueryCloudFunctions queryForProjectsLocationsFunctionsCallWithObject:name:]

/** The name of the function to be called. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudFunctions_CallFunctionResponse.
 *
 *  Invokes synchronously deployed function. To be used for testing, very
 *  limited traffic allowed.
 *
 *  @param object The @c GTLRCloudFunctions_CallFunctionRequest to include in
 *    the query.
 *  @param name The name of the function to be called.
 *
 *  @returns GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsCall
 */
+ (instancetype)queryWithObject:(GTLRCloudFunctions_CallFunctionRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Creates a new function. If a function with the given name already exists in
 *  the specified project, the long running operation will return
 *  `ALREADY_EXISTS` error.
 *
 *  Method: cloudfunctions.projects.locations.functions.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudFunctionsCloudPlatform
 */
@interface GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsCreate : GTLRCloudFunctionsQuery
// Previous library name was
//   +[GTLQueryCloudFunctions queryForProjectsLocationsFunctionsCreateWithObject:location:]

/**
 *  The project and location in which the function should be created, specified
 *  in the format `projects/ * /locations/ *`
 */
@property(nonatomic, copy, nullable) NSString *location;

/**
 *  Fetches a @c GTLRCloudFunctions_Operation.
 *
 *  Creates a new function. If a function with the given name already exists in
 *  the specified project, the long running operation will return
 *  `ALREADY_EXISTS` error.
 *
 *  @param object The @c GTLRCloudFunctions_CloudFunction to include in the
 *    query.
 *  @param location The project and location in which the function should be
 *    created, specified
 *    in the format `projects/ * /locations/ *`
 *
 *  @returns GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudFunctions_CloudFunction *)object
                       location:(NSString *)location;

@end

/**
 *  Deletes a function with the given name from the specified project. If the
 *  given function is used by some trigger, the trigger will be updated to
 *  remove this function.
 *
 *  Method: cloudfunctions.projects.locations.functions.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudFunctionsCloudPlatform
 */
@interface GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsDelete : GTLRCloudFunctionsQuery
// Previous library name was
//   +[GTLQueryCloudFunctions queryForProjectsLocationsFunctionsDeleteWithname:]

/** The name of the function which should be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudFunctions_Operation.
 *
 *  Deletes a function with the given name from the specified project. If the
 *  given function is used by some trigger, the trigger will be updated to
 *  remove this function.
 *
 *  @param name The name of the function which should be deleted.
 *
 *  @returns GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Returns a signed URL for downloading deployed function source code.
 *  The URL is only valid for a limited period and should be used within
 *  minutes after generation.
 *  For more information about the signed URL usage see:
 *  https://cloud.google.com/storage/docs/access-control/signed-urls
 *
 *  Method: cloudfunctions.projects.locations.functions.generateDownloadUrl
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudFunctionsCloudPlatform
 */
@interface GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsGenerateDownloadUrl : GTLRCloudFunctionsQuery
// Previous library name was
//   +[GTLQueryCloudFunctions queryForProjectsLocationsFunctionsGenerateDownloadUrlWithObject:name:]

/**
 *  The name of function for which source code Google Cloud Storage signed
 *  URL should be generated.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudFunctions_GenerateDownloadUrlResponse.
 *
 *  Returns a signed URL for downloading deployed function source code.
 *  The URL is only valid for a limited period and should be used within
 *  minutes after generation.
 *  For more information about the signed URL usage see:
 *  https://cloud.google.com/storage/docs/access-control/signed-urls
 *
 *  @param object The @c GTLRCloudFunctions_GenerateDownloadUrlRequest to
 *    include in the query.
 *  @param name The name of function for which source code Google Cloud Storage
 *    signed
 *    URL should be generated.
 *
 *  @returns GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsGenerateDownloadUrl
 */
+ (instancetype)queryWithObject:(GTLRCloudFunctions_GenerateDownloadUrlRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Returns a signed URL for uploading a function source code.
 *  For more information about the signed URL usage see:
 *  https://cloud.google.com/storage/docs/access-control/signed-urls
 *  Once the function source code upload is complete, the used signed
 *  URL should be provided in CreateFunction or UpdateFunction request
 *  as a reference to the function source code.
 *
 *  Method: cloudfunctions.projects.locations.functions.generateUploadUrl
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudFunctionsCloudPlatform
 */
@interface GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsGenerateUploadUrl : GTLRCloudFunctionsQuery
// Previous library name was
//   +[GTLQueryCloudFunctions queryForProjectsLocationsFunctionsGenerateUploadUrlWithObject:parent:]

/**
 *  The project and location in which the Google Cloud Storage signed URL
 *  should be generated, specified in the format `projects/ * /locations/ *
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudFunctions_GenerateUploadUrlResponse.
 *
 *  Returns a signed URL for uploading a function source code.
 *  For more information about the signed URL usage see:
 *  https://cloud.google.com/storage/docs/access-control/signed-urls
 *  Once the function source code upload is complete, the used signed
 *  URL should be provided in CreateFunction or UpdateFunction request
 *  as a reference to the function source code.
 *
 *  @param object The @c GTLRCloudFunctions_GenerateUploadUrlRequest to include
 *    in the query.
 *  @param parent The project and location in which the Google Cloud Storage
 *    signed URL
 *    should be generated, specified in the format `projects/ * /locations/ *
 *
 *  @returns GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsGenerateUploadUrl
 */
+ (instancetype)queryWithObject:(GTLRCloudFunctions_GenerateUploadUrlRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Returns a function with the given name from the requested project.
 *
 *  Method: cloudfunctions.projects.locations.functions.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudFunctionsCloudPlatform
 */
@interface GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsGet : GTLRCloudFunctionsQuery
// Previous library name was
//   +[GTLQueryCloudFunctions queryForProjectsLocationsFunctionsGetWithname:]

/** The name of the function which details should be obtained. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudFunctions_CloudFunction.
 *
 *  Returns a function with the given name from the requested project.
 *
 *  @param name The name of the function which details should be obtained.
 *
 *  @returns GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Returns a list of functions that belong to the requested project.
 *
 *  Method: cloudfunctions.projects.locations.functions.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudFunctionsCloudPlatform
 */
@interface GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsList : GTLRCloudFunctionsQuery
// Previous library name was
//   +[GTLQueryCloudFunctions queryForProjectsLocationsFunctionsListWithparent:]

/** Maximum number of functions to return per call. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The value returned by the last
 *  `ListFunctionsResponse`; indicates that
 *  this is a continuation of a prior `ListFunctions` call, and that the
 *  system should return the next page of data.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The project and location from which the function should be listed,
 *  specified in the format `projects/ * /locations/ *`
 *  If you want to list functions in all locations, use "-" in place of a
 *  location.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudFunctions_ListFunctionsResponse.
 *
 *  Returns a list of functions that belong to the requested project.
 *
 *  @param parent The project and location from which the function should be
 *    listed,
 *    specified in the format `projects/ * /locations/ *`
 *    If you want to list functions in all locations, use "-" in place of a
 *    location.
 *
 *  @returns GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates existing function.
 *
 *  Method: cloudfunctions.projects.locations.functions.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudFunctionsCloudPlatform
 */
@interface GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsPatch : GTLRCloudFunctionsQuery
// Previous library name was
//   +[GTLQueryCloudFunctions queryForProjectsLocationsFunctionsPatchWithObject:name:]

/**
 *  A user-defined name of the function. Function names must be unique
 *  globally and match pattern `projects/ * /locations/ * /functions/ *`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Required list of fields to be updated in this request.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRCloudFunctions_Operation.
 *
 *  Updates existing function.
 *
 *  @param object The @c GTLRCloudFunctions_CloudFunction to include in the
 *    query.
 *  @param name A user-defined name of the function. Function names must be
 *    unique
 *    globally and match pattern `projects/ * /locations/ * /functions/ *`
 *
 *  @returns GTLRCloudFunctionsQuery_ProjectsLocationsFunctionsPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudFunctions_CloudFunction *)object
                           name:(NSString *)name;

@end

/**
 *  Lists information about the supported locations for this service.
 *
 *  Method: cloudfunctions.projects.locations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudFunctionsCloudPlatform
 */
@interface GTLRCloudFunctionsQuery_ProjectsLocationsList : GTLRCloudFunctionsQuery
// Previous library name was
//   +[GTLQueryCloudFunctions queryForProjectsLocationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The resource that owns the locations collection, if applicable. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudFunctions_ListLocationsResponse.
 *
 *  Lists information about the supported locations for this service.
 *
 *  @param name The resource that owns the locations collection, if applicable.
 *
 *  @returns GTLRCloudFunctionsQuery_ProjectsLocationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
