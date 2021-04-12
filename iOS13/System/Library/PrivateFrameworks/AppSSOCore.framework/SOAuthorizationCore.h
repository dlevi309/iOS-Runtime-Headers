/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/


@protocol SOAuthorizationCoreDelegate, OS_dispatch_queue;
#import <AppSSOCore/AppSSOCore-Structs.h>
@class SOClient, SOAuthorizationRequestParametersCore, NSObject, NSDictionary;

@interface SOAuthorizationCore : NSObject {

	SOClient* _client;
	SOAuthorizationRequestParametersCore* _requestParametersCore;
	id<SOAuthorizationCoreDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateDispatchQueue;
	NSDictionary* _authorizationOptions;

}

@property (retain) SOAuthorizationRequestParametersCore * requestParametersCore; 
@property (__weak) id<SOAuthorizationCoreDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> delegateDispatchQueue;                        //@synthesize delegateDispatchQueue=_delegateDispatchQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * authorizationOptions;                             //@synthesize authorizationOptions=_authorizationOptions - In the implementation block
+(BOOL)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 ;
+(BOOL)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 useInternalExtensions:(BOOL)arg3 ;
+(void)isExtensionProcessWithAuditToken:(SCD_Struct_SO0)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)_canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 useInternalExtensions:(BOOL)arg4 ;
+(BOOL)_doAKshouldProcessURL:(id)arg1 ;
-(id)init;
-(id)debugDescription;
-(id<SOAuthorizationCoreDelegate>)delegate;
-(void)setDelegate:(id<SOAuthorizationCoreDelegate>)arg1 ;
-(void)cancelAuthorization;
-(void)setAuthorizationOptions:(NSDictionary *)arg1 ;
-(void)beginAuthorizationWithURL:(id)arg1 httpHeaders:(id)arg2 httpBody:(id)arg3 ;
-(NSDictionary *)authorizationOptions;
-(void)beginAuthorizationWithParameters:(id)arg1 ;
-(void)setDelegateDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)beginAuthorizationWithOperation:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 ;
-(void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)realms;
-(void)debugHintsWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateDispatchQueue;
-(void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(SOAuthorizationRequestParametersCore *)requestParametersCore;
-(void)_finishAuthorizationWithCredential:(id)arg1 error:(id)arg2 ;
-(void)beginAuthorizationWithParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cancelAuthorization;
-(void)setRequestParametersCore:(SOAuthorizationRequestParametersCore *)arg1 ;
-(void)performBlockOnDelegateQueue:(/*^block*/id)arg1 ;
@end

