/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@interface _DKSyncedFeatures : NSObject {

	BOOL _isDigitalHealthDisabledInitialized;
	BOOL _isDigitalHealthDisabledPreviousResult;
	BOOL _isSingleDevice;
	long long _screenTimeSyncState;

}

@property (assign) long long screenTimeSyncState;              //@synthesize screenTimeSyncState=_screenTimeSyncState - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)description;
-(BOOL)isDigitalHealthDisabledWithIsSingleDevice:(BOOL)arg1 forTransports:(long long)arg2 ;
-(BOOL)isIDSMessageGatingDisabled;
-(BOOL)isSiriPortraitDisabled;
-(BOOL)isSupergreenDisabledForTransports:(long long)arg1 ;
-(long long)screenTimeSyncState;
-(void)setScreenTimeSyncState:(long long)arg1 ;
-(void)_fetchScreenTimeSyncState;
-(id)_stateStringWithState:(long long)arg1 ;
@end

