/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
*/


@class CLSSettingsVisibilityController;

@interface PSUIClassKitVisibilityArbitrator : NSObject {

	unsigned long long _visibilityState;
	/*^block*/id _visibilityStateChangeHandler;
	CLSSettingsVisibilityController* _visibilityController;

}

@property (assign,nonatomic) unsigned long long visibilityState;                                  //@synthesize visibilityState=_visibilityState - In the implementation block
@property (nonatomic,retain) CLSSettingsVisibilityController * visibilityController;              //@synthesize visibilityController=_visibilityController - In the implementation block
@property (nonatomic,copy) id visibilityStateChangeHandler;                                       //@synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)visibilityState;
-(void)setVisibilityState:(unsigned long long)arg1 ;
-(id)visibilityStateChangeHandler;
-(void)reloadVisibilityState;
-(void)setVisibilityStateChangeHandler:(id)arg1 ;
-(void)settingsVisibilityDidChange:(id)arg1 ;
-(CLSSettingsVisibilityController *)visibilityController;
-(void)setVisibilityController:(CLSSettingsVisibilityController *)arg1 ;
@end

