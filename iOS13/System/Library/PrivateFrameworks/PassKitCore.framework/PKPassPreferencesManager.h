/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKPassPreferencesManager : NSObject
+(id)sharedInstance;
-(void)_synchronize;
-(void)_removeValueForKey:(id)arg1 passUniqueID:(id)arg2 ;
-(CFStringRef)_cfPreferencesKeyForConstant:(id)arg1 passUniqueID:(id)arg2 ;
-(void)removeAllPreferencesForPassWithUniqueID:(id)arg1 ;
-(void)removeAllPreferences;
-(void)setHasDoneExpressUpgrade:(BOOL)arg1 ;
-(BOOL)hasDoneExpressUpgrade;
-(void)_setDouble:(double)arg1 forKey:(id)arg2 passUniqueID:(id)arg3 ;
-(double)_doubleForKey:(id)arg1 passUniqueID:(id)arg2 ;
-(void)_setDecimalNumber:(id)arg1 forKey:(id)arg2 passUniqueID:(id)arg3 ;
-(id)_decimalNumberForKey:(id)arg1 passUniqueID:(id)arg2 ;
-(void)_setString:(id)arg1 forKey:(id)arg2 passUniqueID:(id)arg3 ;
-(id)_stringForKey:(id)arg1 passUniqueID:(id)arg2 ;
-(id)lowBalanceReminderAmountForPassWithUniqueID:(id)arg1 ;
-(double)commutePlanRenewalReminderTimeIntervalForPassWithUniqueID:(id)arg1 ;
@end

