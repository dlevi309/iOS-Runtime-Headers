/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIDynamicAnimatorDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SBPresentingDelegate;
@class NSMutableSet, UIView, SBBouncingSystem, UIDynamicAnimator, SBBouncingItem, SBBounceBehavior, UIGestureRecognizer, NSSet, CSBounceSettings, NSString;

@interface SBLockScreenBounceAnimator : NSObject <UIDynamicAnimatorDelegate, PTSettingsKeyObserver, UIGestureRecognizerDelegate> {

	NSMutableSet* _tapExcludedViews;
	NSMutableSet* _tapExcludedZones;
	BOOL _isAnimating;
	BOOL _bounceEnabled;
	UIView* _view;
	SBBouncingSystem* _system;
	UIDynamicAnimator* _animator;
	SBBouncingItem* _item;
	SBBounceBehavior* _behavior;
	UIGestureRecognizer* _tapRecognizer;
	NSSet* _gestures;
	/*^block*/id _shouldBeginBlock;
	/*^block*/id _prepareBlock;
	/*^block*/id _translateBlock;
	/*^block*/id _canceledBlock;
	/*^block*/id _completedBlock;
	CSBounceSettings* _settings;
	id<SBPresentingDelegate> _presentingDelegate;

}

@property (copy) id shouldBeginBlock;                                                         //@synthesize shouldBeginBlock=_shouldBeginBlock - In the implementation block
@property (copy) id prepareBlock;                                                             //@synthesize prepareBlock=_prepareBlock - In the implementation block
@property (copy) id translateBlock;                                                           //@synthesize translateBlock=_translateBlock - In the implementation block
@property (copy) id canceledBlock;                                                            //@synthesize canceledBlock=_canceledBlock - In the implementation block
@property (copy) id completedBlock;                                                           //@synthesize completedBlock=_completedBlock - In the implementation block
@property (nonatomic,retain) CSBounceSettings * settings;                                     //@synthesize settings=_settings - In the implementation block
@property (nonatomic,__weak,readonly) NSSet * tapExcludedViews; 
@property (assign,nonatomic,__weak) id<SBPresentingDelegate> presentingDelegate;              //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (nonatomic,__weak,readonly) NSSet * gestures; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CSBounceSettings *)settings;
-(void)setSettings:(CSBounceSettings *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)isAnimating;
-(id)initWithView:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(void)dynamicAnimatorDidPause:(id)arg1 ;
-(NSSet *)gestures;
-(void)_updateSettings;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setPrepareBlock:(id)arg1 ;
-(id)prepareBlock;
-(id<SBPresentingDelegate>)presentingDelegate;
-(void)setPresentingDelegate:(id<SBPresentingDelegate>)arg1 ;
-(void)_createAnimator;
-(void)_addTapRecognizer;
-(void)_removeAnimator;
-(void)_resetAnimator;
-(void)_removeTapRecognizer;
-(BOOL)allowTapForGestureRecognizer:(id)arg1 ;
-(void)_beginAnimating:(id)arg1 ;
-(void)setTranslateBlock:(id)arg1 ;
-(void)cancelAnimation;
-(void)setBounceEnabled:(BOOL)arg1 ;
-(void)addTapExcludedView:(id)arg1 ;
-(void)removeTapExcludedView:(id)arg1 ;
-(NSSet *)tapExcludedViews;
-(void)addTapExcludedZone:(CGRect)arg1 ;
-(void)cancelGestureRecognizer:(id)arg1 ;
-(void)reenableGestureRecognizer:(id)arg1 ;
-(id)shouldBeginBlock;
-(void)setShouldBeginBlock:(id)arg1 ;
-(id)translateBlock;
-(id)canceledBlock;
-(void)setCanceledBlock:(id)arg1 ;
-(id)completedBlock;
-(void)setCompletedBlock:(id)arg1 ;
@end

