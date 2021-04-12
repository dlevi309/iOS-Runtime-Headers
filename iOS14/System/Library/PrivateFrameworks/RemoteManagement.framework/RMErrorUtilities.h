/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@interface RMErrorUtilities : NSObject
+(id)createLicenseNotFound;
+(id)createCouldNotInstallAppWithUnderlyingError:(id)arg1 ;
+(id)createInternalError;
+(id)createInternalErrorWithUnderlyingError:(id)arg1 ;
+(id)createUnverifiedDownloadSizeErrorWithURL:(id)arg1 ;
+(id)createUnhandledContentTypeErrorWithContentType:(id)arg1 ;
+(id)createUnverifiedDownloadHashErrorWithURL:(id)arg1 ;
+(id)createHTTPErrorWithStatusCode:(long long)arg1 reason:(id)arg2 ;
+(id)createServiceDiscoveryInvalidUserIdentifierWithReason:(id)arg1 ;
+(id)createServiceDiscoveryWellKnownFailedWithReason:(id)arg1 ;
+(id)createServiceDiscoveryWellKnownInvalidWithReason:(id)arg1 ;
+(id)_populateDescriptionInUserInfo:(id)arg1 descriptionKey:(id)arg2 arguments:(char*)arg3 ;
+(id)_localizedDescriptionFormatWithKey:(id)arg1 ;
+(id)_englishDescriptionFormatWithKey:(id)arg1 ;
+(id)_loadEnglishStringsByKey;
+(id)createErrorWithCode:(long long)arg1 userInfo:(id)arg2 descriptionKey:(id)arg3 ;
+(id)_populateDescriptionInUserInfo:(id)arg1 descriptionKey:(id)arg2 ;
+(id)createAccountAlreadyExistsErrorWithIdentifier:(id)arg1 ;
+(id)createAlreadyEnrolledInMDMv1Error;
+(id)createBootstrapURINotFound;
+(id)createCannotChangeValueErrorForPropertyNamed:(id)arg1 onObject:(id)arg2 ;
+(id)createCMSDecodeErrorWithStatusCode:(int)arg1 reason:(id)arg2 ;
+(id)createConnectionNotEntitledWithName:(id)arg1 ;
+(id)createCouldNotInstallApp;
+(id)createCouldNotParseURLErrorWithString:(id)arg1 ;
+(id)createDeviceIdentityNotFoundError;
+(id)createDisallowedStatusValueErrorWithKeyPath:(id)arg1 ;
+(id)createFeatureDisabledError:(id)arg1 ;
+(id)createIncorrectPayloadTypeErrorWithExpectedType:(id)arg1 actualType:(id)arg2 ;
+(id)createInvalidPasscodeError;
+(id)createManagementSourceNotFoundErrorWithAccountIdentifier:(id)arg1 ;
+(id)createManagementSourceNotFoundErrorWithIdentifier:(id)arg1 ;
+(id)createManagementSourceAlreadyExistsErrorWithURI:(id)arg1 ;
+(id)createMismatchedValuesErrorForPropertyNamed:(id)arg1 onObject:(id)arg2 expected:(id)arg3 actual:(id)arg4 ;
+(id)createMissingMandatoryPropertyErrorWithPropertyNamed:(id)arg1 onObject:(id)arg2 ;
+(id)createMissingReferralURLError;
+(id)createMissingServerResponseItemErrorWithName:(id)arg1 ;
+(id)createMobileKeyBagErrorWithCode:(long long)arg1 ;
+(id)createMultipleErrorOrReturnTheSingleErrorWithErrors:(id)arg1 ;
+(id)createMultipleValidationErrorOrReturnTheSingleErrorWithErrors:(id)arg1 ;
+(id)createNotImplementedErrorForFeature:(id)arg1 ;
+(id)createOrganizationProofInvalidError;
+(id)createStatePreventsSyncingError;
+(id)createTooManyFailedAuthenticationsError;
+(id)createTooManyReferralsError;
+(id)createTooManyDeviceManagementSourcesError;
+(id)createUnableToEvaluatePredicateErrorWithFormat:(id)arg1 reason:(id)arg2 ;
+(id)createUnableToParsePredicateErrorWithFormat:(id)arg1 reason:(id)arg2 ;
+(id)createUnableToParsePredicateErrorWithCustomOperator:(id)arg1 predicateFormat:(id)arg2 ;
+(id)createUnsupportedAuthenticationSchemeErrorWithScheme:(id)arg1 ;
+(id)createUnsupportedStatusValueErrorWithKeyPath:(id)arg1 ;
@end

