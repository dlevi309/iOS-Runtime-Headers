/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)connectToDaemon;
-(void)setVisibilityStateChangeHandler:(id)arg1 ;
-(void)setVisibilityState:(unsigned long long)arg1 ;
-(unsigned long long)visibilityState;
-(void)reloadVisibilityState;
-(id)visibilityStateChangeHandler;
-(void)setVisibilityProvider:(id<CRKSettingsUIVisibilityProvider>)arg1 ;
-(id<CRKSettingsUIVisibilityProvider>)visibilityProvider;
@end

