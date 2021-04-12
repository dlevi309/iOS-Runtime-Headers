/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
*/

#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AXPIFingerAppearanceDelegate;
@class NSMutableArray, UIView, AXPIPinchChainView;

@interface AXPIFingerContainerView : UIView {

	NSMutableArray* _fingerViews;
	UIView* _viewForAnimatingAlpha;
	AXPIPinchChainView* _pinchChainView;
	BOOL _shouldAnimatePress;
	BOOL _shouldSuppressFingerVisuals;
	id<AXPIFingerAppearanceDelegate> _appearanceDelegate;

}

@property (assign,nonatomic) BOOL shouldAnimatePress;                                                 //@synthesize shouldAnimatePress=_shouldAnimatePress - In the implementation block
@property (nonatomic,readonly) BOOL isPinchChainVisible; 
@property (assign,nonatomic) BOOL shouldSuppressFingerVisuals;                                        //@synthesize shouldSuppressFingerVisuals=_shouldSuppressFingerVisuals - In the implementation block
@property (assign,nonatomic,__weak) id<AXPIFingerAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAppearanceDelegate:(id<AXPIFingerAppearanceDelegate>)arg1 ;
-(id<AXPIFingerAppearanceDelegate>)appearanceDelegate;
-(BOOL)isPinchChainVisible;
-(void)clearAllFingersAnimated:(BOOL)arg1 endPointForAnimation:(CGPoint)arg2 ;
-(void)showFingerModels:(id)arg1 animated:(BOOL)arg2 startPointForAnimation:(CGPoint)arg3 shouldShowPinchChain:(BOOL)arg4 ;
-(void)setShouldAnimatePress:(BOOL)arg1 ;
-(void)updateWithFingerModel:(id)arg1 forFingerAtIndex:(unsigned long long)arg2 ;
-(void)cancelCircularProgressAnimation;
-(void)performCircularProgressAnimationOnFingersWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfFingerAtPoint:(CGPoint)arg1 ;
-(void)setShouldSuppressFingerVisuals:(BOOL)arg1 ;
-(CGRect)rectForFingersAtPoints:(id)arg1 ;
-(void)animateToTapWithDuration:(double)arg1 ;
-(BOOL)shouldAnimatePress;
-(void)_updatePinchChainAppearance;
-(void)_setSystemFilters;
-(void)setPressedState:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldSuppressFingerVisuals;
@end

