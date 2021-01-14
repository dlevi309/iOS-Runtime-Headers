/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@class NSString, NSMutableSet;

@interface CalPreferences : NSObject {

	NSString* _domain;
	NSMutableSet* _registeredNotificationsToReflect;

}
-(void)_synchronizePreferences;
-(id)init;
-(id)initWithDomain:(id)arg1 ;
-(void)_preferenceChangedInternally:(id)arg1 ;
-(void)unregisterReflectionForPreferenceWithNotificationName:(id)arg1 ;
-(BOOL)getBooleanPreference:(id)arg1 defaultValue:(BOOL)arg2 ;
-(void)setValueForPreference:(id)arg1 value:(id)arg2 notificationName:(id)arg3 ;
-(void)setIntegerPreference:(id)arg1 value:(long long)arg2 notificationName:(id)arg3 ;
-(long long)getIntegerPreference:(id)arg1 defaultValue:(long long)arg2 ;
-(void)_preferenceChangedExternally:(id)arg1 ;
-(id)getValueForPreference:(id)arg1 expectedClass:(Class)arg2 ;
-(void)registerReflectionForPreferenceWithNotificationName:(id)arg1 ;
-(void)setBooleanPreference:(id)arg1 value:(BOOL)arg2 notificationName:(id)arg3 ;
-(void)dealloc;
@end

