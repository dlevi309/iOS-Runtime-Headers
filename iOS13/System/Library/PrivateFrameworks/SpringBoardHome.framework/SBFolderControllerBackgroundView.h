/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SBFolderControllerBackgroundViewDelegate;
@class MTMaterialView, UIImageView, UIView;

@interface SBFolderControllerBackgroundView : UIView {

	MTMaterialView* _blurView;
	UIImageView* _blurViewSnapshot;
	UIView* _tintView;
	UIView* _debugFreezingView;
	BOOL _transitionCancelled;
	BOOL _effectActive;
	BOOL _expanding;
	BOOL _frozen;
	BOOL _reduceTransparencyEnabled;
	id<SBFolderControllerBackgroundViewDelegate> _delegate;
	unsigned long long _effect;
	unsigned long long _currentEffect;

}

@property (assign,getter=isReduceTransparencyEnabled,nonatomic) BOOL reduceTransparencyEnabled;              //@synthesize reduceTransparencyEnabled=_reduceTransparencyEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long concreteEffect; 
@property (assign,nonatomic) unsigned long long currentEffect;                                               //@synthesize currentEffect=_currentEffect - In the implementation block
@property (assign,nonatomic,__weak) id<SBFolderControllerBackgroundViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isTransitionCancelled,nonatomic) BOOL transitionCancelled;                          //@synthesize transitionCancelled=_transitionCancelled - In the implementation block
@property (assign,nonatomic) unsigned long long effect;                                                      //@synthesize effect=_effect - In the implementation block
@property (assign,getter=isEffectActive,nonatomic) BOOL effectActive;                                        //@synthesize effectActive=_effectActive - In the implementation block
@property (assign,getter=isExpanding,nonatomic) BOOL expanding;                                              //@synthesize expanding=_expanding - In the implementation block
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                                                    //@synthesize frozen=_frozen - In the implementation block
+(id)_tintColorForEffect:(unsigned long long)arg1 ;
-(id<SBFolderControllerBackgroundViewDelegate>)delegate;
-(void)setDelegate:(id<SBFolderControllerBackgroundViewDelegate>)arg1 ;
-(BOOL)isFrozen;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEffect:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)effect;
-(void)setFrozen:(BOOL)arg1 ;
-(void)setReduceTransparencyEnabled:(BOOL)arg1 ;
-(BOOL)isReduceTransparencyEnabled;
-(unsigned long long)currentEffect;
-(void)setCurrentEffect:(unsigned long long)arg1 ;
-(void)setExpanding:(BOOL)arg1 ;
-(void)setTransitionCancelled:(BOOL)arg1 ;
-(void)setEffectActive:(BOOL)arg1 ;
-(void)_updateCurrentEffect;
-(unsigned long long)concreteEffect;
-(void)_reduceTransparencyEnabledStateChanged;
-(double)minimumHomeScreenScale;
-(id)currentEffectMaterialRecipeName;
-(BOOL)isEffectActive;
-(BOOL)_isCurrentlyExpanding;
-(BOOL)isExpanding;
-(BOOL)isTransitionCancelled;
@end

