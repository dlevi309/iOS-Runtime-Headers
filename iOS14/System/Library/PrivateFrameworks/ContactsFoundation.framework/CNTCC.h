/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNTCC
@required
-(long long)checkAuthorizationStatusOfAuditToken:(SCD_Struct_CN1)arg1;
-(long long)checkAuthorizationStatusOfCurrentProcess;
-(void)requestAuthorization:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)isAuthorizationRestricted;

@end

