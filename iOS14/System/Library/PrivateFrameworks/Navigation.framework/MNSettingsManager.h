/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class MNSettings, MNObserverHashTable;

@interface MNSettingsManager : NSObject {

	MNSettings* _settings;
	MNObserverHashTable* _observers;

}

@property (nonatomic,readonly) MNSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(void)setVolumeFromDefaults;
-(id)init;
-(MNSettings *)settings;
-(void)removeObserver:(id)arg1 ;
-(void)updateForSettings:(id)arg1 ;
@end

