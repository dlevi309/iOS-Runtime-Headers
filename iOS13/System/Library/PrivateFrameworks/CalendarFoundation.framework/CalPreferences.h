/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@class NSString, NSMutableSet;

@interface CalPreferences : NSObject {

	NSString* _domain;
	NSMutableSet* _registeredNotificationsToReflect;

}
-(id)init;
-(void)dealloc;
-(id)initWithDomain:(id)arg1 ;
-(void)registerReflectionForPreferenceWithNotificationName:(id)arg1 ;
-(BOOL)getBooleanPreference:(id)arg1 defaultValue:(BOOL)arg2 ;
-(void)setBooleanPreference:(id)arg1 value:(BOOL)arg2 notificationName:(id)arg3 ;
-(id)getValueForPreference:(id)arg1 expectedClass:(Class)arg2 ;
-(void)setValueForPreference:(id)arg1 value:(id)arg2 notificationName:(id)arg3 ;
-(long long)getIntegerPreference:(id)arg1 defaultValue:(long long)arg2 ;
-(void)setIntegerPreference:(id)arg1 value:(long long)arg2 notificationName:(id)arg3 ;
-(void)unregisterReflectionForPreferenceWithNotificationName:(id)arg1 ;
-(void)_preferenceChangedInternally:(id)arg1 ;
-(void)_synchronizePreferences;
-(void)_preferenceChangedExternally:(id)arg1 ;
@end

