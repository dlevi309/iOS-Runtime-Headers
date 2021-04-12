/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
@class NPSManager, NSObject;

@interface NTKClockStatusBarSettings : NSObject {

	NPSManager* _npsManager;
	BOOL _notificationsIndicatorEnabled;
	NSObject*<OS_dispatch_queue> _prefsQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_handlePrefsChanged;
-(void)_notifyClientsOfChange;
-(BOOL)_isNotificationsIndicatorEnabledInPreferences;
-(BOOL)isNotificationsIndicatorEnabled;
-(void)setNotificationsIndicatorEnabled:(BOOL)arg1 ;
@end

