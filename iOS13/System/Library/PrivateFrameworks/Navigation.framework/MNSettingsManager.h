/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class MNSettings, MNObserverHashTable;

@interface MNSettingsManager : NSObject {

	MNSettings* _settings;
	MNObserverHashTable* _observers;

}

@property (nonatomic,readonly) MNSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(MNSettings *)settings;
-(void)updateForSettings:(id)arg1 ;
-(void)setVolumeFromDefaults;
@end

