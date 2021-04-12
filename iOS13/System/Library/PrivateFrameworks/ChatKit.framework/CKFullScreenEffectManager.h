/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKFullScreenEffectDelegate.h>

@protocol CKFullScreenEffectManagerDelegate;
@class CKFullScreenEffect, NSObject, NSMutableArray, NSTimer, CKScheduledUpdater, NSString;

@interface CKFullScreenEffectManager : NSObject <CKFullScreenEffectDelegate> {

	CKFullScreenEffect* _currentEffect;
	NSObject*<CKFullScreenEffectManagerDelegate> _delegate;
	NSMutableArray* _effectQueue;
	NSTimer* _effectDurationTimer;
	CKScheduledUpdater* _triggerUpdater;

}

@property (nonatomic,retain) CKFullScreenEffect * currentEffect;                                        //@synthesize currentEffect=_currentEffect - In the implementation block
@property (nonatomic,retain) NSMutableArray * effectQueue;                                              //@synthesize effectQueue=_effectQueue - In the implementation block
@property (nonatomic,retain) NSTimer * effectDurationTimer;                                             //@synthesize effectDurationTimer=_effectDurationTimer - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * triggerUpdater;                                       //@synthesize triggerUpdater=_triggerUpdater - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKFullScreenEffectManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)idleDurationAfterEffectWithIdentifier:(id)arg1 ;
+(id)localizedMaskStringForEffectWithIdentifier:(id)arg1 ;
+(double)delayBeforeEffectWithIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<CKFullScreenEffectManagerDelegate>)delegate;
-(void)setDelegate:(NSObject*<CKFullScreenEffectManagerDelegate>)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(CKFullScreenEffect *)currentEffect;
-(void)triggerNextEffect;
-(void)setTriggerUpdater:(CKScheduledUpdater *)arg1 ;
-(id)fullscreenEffectMap;
-(NSMutableArray *)effectQueue;
-(id)effectForIdentifier:(id)arg1 ;
-(void)setEffectQueue:(NSMutableArray *)arg1 ;
-(CKScheduledUpdater *)triggerUpdater;
-(id)effectIdentifiers;
-(NSTimer *)effectDurationTimer;
-(void)stopFullscreenEffect;
-(void)setEffectDurationTimer:(NSTimer *)arg1 ;
-(void)setCurrentEffect:(CKFullScreenEffect *)arg1 ;
-(void)fullScreenEffectDidPrepareSoundEffect:(id)arg1 ;
-(id)localizedDisplayNameForEffectWithIdentifier:(id)arg1 ;
-(id)localizedPickerTitleForEffectWithIdentifier:(id)arg1 ;
-(void)startFullscreenEffectForChatItem:(id)arg1 language:(id)arg2 ;
@end

