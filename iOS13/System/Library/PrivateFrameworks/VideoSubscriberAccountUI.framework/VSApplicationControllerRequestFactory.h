/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@interface VSApplicationControllerRequestFactory : NSObject
+(id)_authNRequestSAMLStringWithAuthenticationToken:(id)arg1 forced:(BOOL)arg2 error:(id*)arg3 ;
+(id)_attributeQuerySAMLRequestStringWithAttributeNames:(id)arg1 channelID:(id)arg2 authenticationToken:(id)arg3 error:(id*)arg4 ;
+(id)_logoutSAMLRequestStringWithError:(id*)arg1 ;
-(id)authenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(BOOL)arg2 ;
-(id)silentAuthenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(BOOL)arg2 ;
-(id)silentAuthenticationApplicationControllerRequest;
-(id)accountMetadataApplicationControllerRequestWithAccountMetadataRequest:(id)arg1 authenticationToken:(id)arg2 ;
-(id)logoutApplicationControllerRequestWithAuthenticationToken:(id)arg1 ;
-(id)STBOptOutApplicationControllerRequest;
@end

