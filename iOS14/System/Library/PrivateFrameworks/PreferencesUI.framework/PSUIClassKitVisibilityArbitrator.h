/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CLSSettingsVisibilityController *)visibilityController;
-(void)setVisibilityStateChangeHandler:(id)arg1 ;
-(void)setVisibilityState:(unsigned long long)arg1 ;
-(unsigned long long)visibilityState;
-(void)settingsVisibilityDidChange:(id)arg1 ;
-(void)setVisibilityController:(CLSSettingsVisibilityController *)arg1 ;
-(void)reloadVisibilityState;
-(id)visibilityStateChangeHandler;
-(void)dealloc;
@end

