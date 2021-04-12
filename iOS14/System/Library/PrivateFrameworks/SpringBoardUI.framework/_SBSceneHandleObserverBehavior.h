/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/


@protocol SBSceneHandleObserver;
@interface _SBSceneHandleObserverBehavior : NSObject {

	BOOL _didCreateScene;
	BOOL _didDestroyScene;
	BOOL _didUpdateContentState;
	BOOL _didUpdateSettingsWithDiff;
	BOOL _didUpdateClientSettingsWithDiff;
	BOOL _didUpdatePairingStatusForExternalSceneIdentifiers;
	id<SBSceneHandleObserver> _observer;

}

@property (nonatomic,__weak,readonly) id<SBSceneHandleObserver> observer;                         //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) BOOL didCreateScene;                                                 //@synthesize didCreateScene=_didCreateScene - In the implementation block
@property (assign,nonatomic) BOOL didDestroyScene;                                                //@synthesize didDestroyScene=_didDestroyScene - In the implementation block
@property (assign,nonatomic) BOOL didUpdateContentState;                                          //@synthesize didUpdateContentState=_didUpdateContentState - In the implementation block
@property (assign,nonatomic) BOOL didUpdateSettingsWithDiff;                                      //@synthesize didUpdateSettingsWithDiff=_didUpdateSettingsWithDiff - In the implementation block
@property (assign,nonatomic) BOOL didUpdateClientSettingsWithDiff;                                //@synthesize didUpdateClientSettingsWithDiff=_didUpdateClientSettingsWithDiff - In the implementation block
@property (assign,nonatomic) BOOL didUpdatePairingStatusForExternalSceneIdentifiers;              //@synthesize didUpdatePairingStatusForExternalSceneIdentifiers=_didUpdatePairingStatusForExternalSceneIdentifiers - In the implementation block
+(id)behaviorFromObserver:(id)arg1 ;
-(BOOL)didUpdateClientSettingsWithDiff;
-(BOOL)didCreateScene;
-(BOOL)didUpdateSettingsWithDiff;
-(id<SBSceneHandleObserver>)observer;
-(BOOL)didUpdateContentState;
-(BOOL)didDestroyScene;
-(BOOL)didUpdatePairingStatusForExternalSceneIdentifiers;
-(id)initWithObserver:(id)arg1 ;
-(void)setDidUpdateClientSettingsWithDiff:(BOOL)arg1 ;
-(void)setDidDestroyScene:(BOOL)arg1 ;
-(void)setDidUpdateContentState:(BOOL)arg1 ;
-(void)setDidUpdateSettingsWithDiff:(BOOL)arg1 ;
-(void)setDidCreateScene:(BOOL)arg1 ;
-(void)setDidUpdatePairingStatusForExternalSceneIdentifiers:(BOOL)arg1 ;
@end

