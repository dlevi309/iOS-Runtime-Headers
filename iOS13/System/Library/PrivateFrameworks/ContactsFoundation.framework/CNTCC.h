/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNTCC
@required
-(long long)accessPreflightForService:(long long)arg1;
-(BOOL)isAccessRestrictedForService:(long long)arg1;
-(void)requestAccessForService:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)accessCheckAuditToken:(SCD_Struct_CN1)arg1 forService:(long long)arg2;

@end

