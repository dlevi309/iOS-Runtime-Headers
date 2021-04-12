/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NPSManager;

@interface MTPairedDevicePreferences : NSObject {

	BOOL _pushAlertsEnabled;
	NPSManager* _npsManager;

}

@property (nonatomic,retain) NPSManager * npsManager;               //@synthesize npsManager=_npsManager - In the implementation block
@property (nonatomic,readonly) BOOL pushAlertsEnabled;              //@synthesize pushAlertsEnabled=_pushAlertsEnabled - In the implementation block
+(id)sharedInstance;
-(NPSManager *)npsManager;
-(id)init;
-(BOOL)pushAlertsEnabled;
-(void)_handlePrefsChanged;
-(BOOL)isPushAlertsEnabled;
-(void)setNpsManager:(NPSManager *)arg1 ;
-(BOOL)_isPushAlertsEnabledInPreferences;
-(void)dealloc;
-(void)_notifyClientsOfChange;
@end

