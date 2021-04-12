/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<SBSceneHandleObserver>)observer;
-(id)initWithObserver:(id)arg1 ;
-(BOOL)didCreateScene;
-(void)setDidCreateScene:(BOOL)arg1 ;
-(BOOL)didDestroyScene;
-(void)setDidDestroyScene:(BOOL)arg1 ;
-(BOOL)didUpdateContentState;
-(void)setDidUpdateContentState:(BOOL)arg1 ;
-(BOOL)didUpdateSettingsWithDiff;
-(void)setDidUpdateSettingsWithDiff:(BOOL)arg1 ;
-(BOOL)didUpdateClientSettingsWithDiff;
-(void)setDidUpdateClientSettingsWithDiff:(BOOL)arg1 ;
-(BOOL)didUpdatePairingStatusForExternalSceneIdentifiers;
-(void)setDidUpdatePairingStatusForExternalSceneIdentifiers:(BOOL)arg1 ;
@end

