/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
*/

#import <SAObjects/SAIntentGroupAppAuthorizationStatusRequest.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface CFAppAuthorizationRequestHandler : SAIntentGroupAppAuthorizationStatusRequest <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(void)handleAppAuthorizationStatusRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)authorizationStatusResponseWithAuthorizationStatusMap:(id)arg1 ;
-(id)authorizationStatusForAppWithBundleId:(id)arg1 ;
@end

