/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIDimmingViewDelegate;
@class UIBarButtonItem, UIImageView, NSArray, UIColor, UITapGestureRecognizer, NSString;

@interface UIDimmingView : UIView <UIGestureRecognizerDelegate> {

	UIBarButtonItem* _highlightedBarButtonItem;
	UIImageView* _highlightedImageView;
	UIImageView* _backgroundGlow;
	NSArray* _passthroughViews;
	BOOL _ignoresTouches;
	BOOL _inPassthroughHitTest;
	UIColor* _dimmingColor;
	UITapGestureRecognizer* _singleFingerTapRecognizer;
	BOOL _suppressesBackdrops;
	id<UIDimmingViewDelegate> _delegate;
	double _percentDisplayed;
	double _percentLightened;

}

@property (assign,nonatomic,__weak) id<UIDimmingViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * highlightedBarButtonItem; 
@property (nonatomic,copy) NSArray * passthroughViews;                                //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (assign,nonatomic) BOOL ignoresTouches;                                     //@synthesize ignoresTouches=_ignoresTouches - In the implementation block
@property (nonatomic,readonly) BOOL displayed; 
@property (assign,nonatomic) double percentDisplayed;                                 //@synthesize percentDisplayed=_percentDisplayed - In the implementation block
@property (assign,nonatomic) double percentLightened;                                 //@synthesize percentLightened=_percentLightened - In the implementation block
@property (nonatomic,retain) UIColor * dimmingColor;                                  //@synthesize dimmingColor=_dimmingColor - In the implementation block
@property (assign,nonatomic) BOOL suppressesBackdrops;                                //@synthesize suppressesBackdrops=_suppressesBackdrops - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDimmingColor;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(void)mouseUp:(GSEventRef)arg1 ;
-(NSArray *)passthroughViews;
-(int)textEffectsVisibilityLevel;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<UIDimmingViewDelegate>)delegate;
-(void)_sendDelegateDimmingViewWasTapped;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHighlightedBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_simulateTap;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)suppressesBackdrops;
-(double)percentLightened;
-(void)setDelegate:(id<UIDimmingViewDelegate>)arg1 ;
-(void)handleSingleTap:(id)arg1 ;
-(UIBarButtonItem *)highlightedBarButtonItem;
-(void)setIgnoresTouches:(BOOL)arg1 ;
-(void)updateBackgroundColor;
-(double)percentDisplayed;
-(void)display:(BOOL)arg1 ;
-(id)_backdropViewsToAnimate;
-(void)dimmingRemovalAnimationDidStop;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIColor *)dimmingColor;
-(void)display:(BOOL)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3 ;
-(void)setDimmingColor:(UIColor *)arg1 ;
-(void)setSuppressesBackdrops:(BOOL)arg1 ;
-(BOOL)displayed;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setPercentDisplayed:(double)arg1 ;
-(BOOL)ignoresTouches;
-(void)setPercentLightened:(double)arg1 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)dealloc;
@end

