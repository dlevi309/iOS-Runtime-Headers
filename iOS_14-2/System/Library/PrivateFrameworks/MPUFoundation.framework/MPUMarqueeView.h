/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol MPUMarqueeViewDelegate;
@class NSUUID, NSPointerArray, UIView, NSArray, NSString;

@interface MPUMarqueeView : UIView <CAAnimationDelegate> {

	NSUUID* _currentAnimationID;
	long long _options;
	NSPointerArray* _coordinatedMarqueeViews;
	MPUMarqueeView* _primaryMarqueeView;
	BOOL _marqueeEnabled;
	double _contentGap;
	UIView* _contentView;
	UIView* _animationReferenceView;
	id<MPUMarqueeViewDelegate> _delegate;
	double _marqueeDelay;
	double _marqueeScrollRate;
	UIView* _viewForContentSize;
	long long _animationDirection;
	CGSize _contentSize;
	UIEdgeInsets _fadeEdgeInsets;

}

@property (assign,nonatomic) double contentGap;                                        //@synthesize contentGap=_contentGap - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                       //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) UIView * animationReferenceView;                   //@synthesize animationReferenceView=_animationReferenceView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets fadeEdgeInsets;                              //@synthesize fadeEdgeInsets=_fadeEdgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<MPUMarqueeViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double marqueeDelay;                                      //@synthesize marqueeDelay=_marqueeDelay - In the implementation block
@property (assign,nonatomic) double marqueeScrollRate;                                 //@synthesize marqueeScrollRate=_marqueeScrollRate - In the implementation block
@property (assign,getter=isMarqueeEnabled,nonatomic) BOOL marqueeEnabled;              //@synthesize marqueeEnabled=_marqueeEnabled - In the implementation block
@property (nonatomic,readonly) NSArray * coordinatedMarqueeViews; 
@property (nonatomic,retain) UIView * viewForContentSize;                              //@synthesize viewForContentSize=_viewForContentSize - In the implementation block
@property (assign,nonatomic) long long animationDirection;                             //@synthesize animationDirection=_animationDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(double)marqueeDelay;
-(void)setContentSize:(CGSize)arg1 ;
-(id)viewForLastBaselineLayout;
-(CGSize)intrinsicContentSize;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_createMarqueeAnimationIfNeededWithMaximumDuration:(double)arg1 beginTime:(double)arg2 ;
-(void)setMarqueeEnabled:(BOOL)arg1 withOptions:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id<MPUMarqueeViewDelegate>)delegate;
-(double)marqueeScrollRate;
-(void)setFadeEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGSize)contentSize;
-(void)_createMarqueeAnimationIfNeeded;
-(void)_applyMarqueeFade;
-(void)setBounds:(CGRect)arg1 ;
-(void)resetMarqueePosition;
-(void)setContentGap:(double)arg1 ;
-(void)setAnimationReferenceView:(UIView *)arg1 ;
-(long long)animationDirection;
-(void)setDelegate:(id<MPUMarqueeViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)fadeEdgeInsets;
-(void)setFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)invalidateIntrinsicContentSize;
-(NSArray *)coordinatedMarqueeViews;
-(BOOL)isMarqueeEnabled;
-(double)contentGap;
-(void)setMarqueeScrollRate:(double)arg1 ;
-(void)_tearDownMarqueeAnimation;
-(UIView *)viewForContentSize;
-(void)setMarqueeDelay:(double)arg1 ;
-(void)setViewForContentSize:(UIView *)arg1 ;
-(void)setAnimationDirection:(long long)arg1 ;
-(void)sceneDidEnterBackgroundNotification:(id)arg1 ;
-(double)_duration;
-(UIView *)contentView;
-(UIView *)animationReferenceView;
-(void)sceneWillEnterForegroundNotification:(id)arg1 ;
-(void)addCoordinatedMarqueeView:(id)arg1 ;
@end

