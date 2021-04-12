/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
*/


@protocol CRKSettingsUIVisibilityProvider;
@interface PSUIClassroomVisibilityArbitrator : NSObject {

	unsigned long long _visibilityState;
	/*^block*/id _visibilityStateChangeHandler;
	id<CRKSettingsUIVisibilityProvider> _visibilityProvider;

}

@property (nonatomic,retain) id<CRKSettingsUIVisibilityProvider> visibilityProvider;              //@synthesize visibilityProvider=_visibilityProvider - In the implementation block
@property (assign,nonatomic) unsigned long long visibilityState;                                  //@synthesize visibilityState=_visibilityState - In the implementation block
@property (nonatomic,copy) id visibilityStateChangeHandler;                                       //@synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler - In the implementation block
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)connectToDaemon;
-(unsigned long long)visibilityState;
-(void)setVisibilityState:(unsigned long long)arg1 ;
-(id)visibilityStateChangeHandler;
-(void)reloadVisibilityState;
-(void)setVisibilityStateChangeHandler:(id)arg1 ;
-(void)setVisibilityProvider:(id<CRKSettingsUIVisibilityProvider>)arg1 ;
-(id<CRKSettingsUIVisibilityProvider>)visibilityProvider;
@end

