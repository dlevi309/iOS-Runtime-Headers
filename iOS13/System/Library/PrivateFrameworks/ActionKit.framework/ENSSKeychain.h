/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@interface ENSSKeychain : NSObject
+(id)accountsForService:(id)arg1 ;
+(id)allAccounts;
+(id)passwordForService:(id)arg1 account:(id)arg2 ;
+(id)passwordForService:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
+(BOOL)deletePasswordForService:(id)arg1 account:(id)arg2 ;
+(BOOL)deletePasswordForService:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
+(BOOL)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3 ;
+(BOOL)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3 error:(id*)arg4 ;
+(void*)accessibilityType;
+(void)setAccessibilityType:(void*)arg1 ;
@end

