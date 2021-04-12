/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/


@protocol SOServiceProtocol <NSObject>
@required
-(void)configurationWithCompletion:(/*^block*/id)arg1;
-(void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelAuthorizationWithCompletion:(/*^block*/id)arg1;
-(void)debugHintsWithCompletion:(/*^block*/id)arg1;
-(void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)performAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2;
-(void)realmsWithCompletion:(/*^block*/id)arg1;
-(void)isExtensionProcessWithAuditToken:(SCD_Struct_SO0)arg1 completion:(/*^block*/id)arg2;

@end

