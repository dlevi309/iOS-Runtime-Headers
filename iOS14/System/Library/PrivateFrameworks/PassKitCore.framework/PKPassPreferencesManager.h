/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKPassPreferencesManager : NSObject
+(id)sharedInstance;
-(void)_synchronize;
-(void)removeAllPreferences;
-(void)_removeValueForKey:(id)arg1 passUniqueID:(id)arg2 ;
-(CFStringRef)_cfPreferencesKeyForConstant:(id)arg1 passUniqueID:(id)arg2 ;
-(void)removeAllPreferencesForPassWithUniqueID:(id)arg1 ;
-(void)setHasDoneExpressUpgrade:(BOOL)arg1 ;
-(BOOL)hasDoneExpressUpgrade;
-(double)_doubleForKey:(id)arg1 passUniqueID:(id)arg2 ;
-(void)_setDouble:(double)arg1 forKey:(id)arg2 passUniqueID:(id)arg3 ;
-(void)_setDecimalNumber:(id)arg1 forKey:(id)arg2 passUniqueID:(id)arg3 ;
-(id)_decimalNumberForKey:(id)arg1 passUniqueID:(id)arg2 ;
-(void)_setString:(id)arg1 forKey:(id)arg2 passUniqueID:(id)arg3 ;
-(id)_stringForKey:(id)arg1 passUniqueID:(id)arg2 ;
-(id)lowBalanceReminderAmountForPassWithUniqueID:(id)arg1 ;
-(double)commutePlanRenewalReminderTimeIntervalForPassWithUniqueID:(id)arg1 ;
@end

