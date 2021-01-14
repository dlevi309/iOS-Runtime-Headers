/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSURLProtocolHandler.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/AMSURLProtocolDelegate.h>

@class NSString;

@interface AMSPurchaseProtocolHandler : AMSURLProtocolHandler <NSURLSessionDelegate, AMSURLProtocolDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)reversePushSamplingPercentageForTask:(id)arg1 ;
-(id)_locateBuyParamsFromResponse:(id)arg1 selectedAction:(id)arg2 purchaseInfo:(id)arg3 ;
-(void)_updatePasswordSettingWithBuyParams:(id)arg1 account:(id)arg2 ;
-(void)_syncKeybagFromResponse:(id)arg1 purchaseInfo:(id)arg2 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setSession:(id)arg1 ;
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(BOOL)arg3 error:(id*)arg4 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_shouldRetryForFailureAction:(id)arg1 response:(id)arg2 task:(id)arg3 decodedObject:(id)arg4 responseDictionary:(id)arg5 ;
-(void)_updateSubscriptionStatusFromBody:(id)arg1 account:(id)arg2 ;
@end

