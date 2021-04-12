/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/

#import <IMSharedUI/IMFullScreenEffectPlayerDelegate.h>

@protocol IMFullScreenEffectManagerDelegate;
@class IMFullScreenEffectPlayer, NSMutableArray, IMScheduledUpdater, IMFullScreenEffect, NSString;

@interface IMFullScreenEffectManager : NSObject <IMFullScreenEffectPlayerDelegate> {

	id<IMFullScreenEffectManagerDelegate> _delegate;
	IMFullScreenEffectPlayer* _currentEffectPlayer;
	NSMutableArray* _effectQueue;
	IMScheduledUpdater* _triggerUpdater;

}

@property (nonatomic,retain) IMFullScreenEffectPlayer * currentEffectPlayer;                     //@synthesize currentEffectPlayer=_currentEffectPlayer - In the implementation block
@property (nonatomic,retain) NSMutableArray * effectQueue;                                       //@synthesize effectQueue=_effectQueue - In the implementation block
@property (nonatomic,retain) IMScheduledUpdater * triggerUpdater;                                //@synthesize triggerUpdater=_triggerUpdater - In the implementation block
@property (assign,nonatomic,__weak) id<IMFullScreenEffectManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IMFullScreenEffect * currentEffect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<IMFullScreenEffectManagerDelegate>)delegate;
-(void)setDelegate:(id<IMFullScreenEffectManagerDelegate>)arg1 ;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(IMFullScreenEffect *)currentEffect;
-(void)triggerNextEffect;
-(void)setTriggerUpdater:(IMScheduledUpdater *)arg1 ;
-(NSMutableArray *)effectQueue;
-(void)setEffectQueue:(NSMutableArray *)arg1 ;
-(IMScheduledUpdater *)triggerUpdater;
-(BOOL)isFullScreenEffectQueued:(id)arg1 ;
-(void)willStartFullScreenEffect:(id)arg1 ;
-(IMFullScreenEffectPlayer *)currentEffectPlayer;
-(void)setCurrentEffectPlayer:(IMFullScreenEffectPlayer *)arg1 ;
-(void)_stopCurrentFullscreenEffect:(BOOL)arg1 ;
-(void)stopCurrentFullscreenEffectPlayer;
-(void)queueFullScreenEffectPlayer:(id)arg1 withRepeating:(BOOL)arg2 ;
-(void)fullScreenEffectPlayerDidPrepare:(id)arg1 ;
-(void)fullScreenEffectPlayerDidStart:(id)arg1 ;
-(void)fullScreenEffectPlayerDidFinish:(id)arg1 ;
-(void)stopAllFullscreenEffectPlayers;
-(double)adjustedEffectDurationForTesting:(id)arg1 ;
@end

