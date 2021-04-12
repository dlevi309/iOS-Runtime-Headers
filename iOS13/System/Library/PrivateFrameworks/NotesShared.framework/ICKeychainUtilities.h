/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICKeychainUtilities : NSObject
+(BOOL)biometricIDIsEnrolled;
+(BOOL)removeItemForIdentifier:(id)arg1 error:(id*)arg2 ;
+(BOOL)addItemWithoutGuardian:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3 ;
+(BOOL)addDevicePasscodeGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)getItemForIdentifier:(id)arg1 alertTextForAuthentication:(id)arg2 error:(id*)arg3 ;
+(id)secAccessControlObjectWithCreationFlag:(unsigned long long)arg1 error:(id*)arg2 ;
+(BOOL)addItem:(id)arg1 forIdentifier:(id)arg2 secAccessControlObject:(id)arg3 error:(id*)arg4 ;
+(void)beginEvaluatePolicyReplyBlock;
+(void)endEvaluatePolicyReplyBlock;
+(BOOL)looselyAuthenticateWithDevicePasscodeWithAlertText:(id)arg1 ;
@end

