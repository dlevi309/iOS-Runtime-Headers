/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@interface ENSSKeychain : NSObject
+(id)allAccounts;
+(id)accountsForService:(id)arg1 ;
+(id)passwordForService:(id)arg1 account:(id)arg2 ;
+(id)passwordForService:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
+(BOOL)deletePasswordForService:(id)arg1 account:(id)arg2 ;
+(BOOL)deletePasswordForService:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
+(BOOL)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3 ;
+(BOOL)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3 error:(id*)arg4 ;
+(void*)accessibilityType;
+(void)setAccessibilityType:(void*)arg1 ;
@end

