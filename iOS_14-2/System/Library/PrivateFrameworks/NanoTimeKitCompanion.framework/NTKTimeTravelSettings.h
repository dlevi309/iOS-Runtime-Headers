/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
@class NPSManager, NSObject;

@interface NTKTimeTravelSettings : NSObject {

	NPSManager* _npsManager;
	BOOL _timeTravelEnabled;
	NSObject*<OS_dispatch_queue> _prefsQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)_handlePrefsChanged;
-(void)dealloc;
-(BOOL)_isTimeTravelEnabledInPreferences;
-(BOOL)isTimeTravelEnabled;
-(void)setTimeTravelEnabled:(BOOL)arg1 ;
@end

