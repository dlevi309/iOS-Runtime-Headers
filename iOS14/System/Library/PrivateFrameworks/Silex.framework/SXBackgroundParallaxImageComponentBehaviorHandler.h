/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponentBehaviorHandler.h>

@class UIView;

@interface SXBackgroundParallaxImageComponentBehaviorHandler : SXComponentBehaviorHandler {

	UIView* _windowedScrollContentView;
	double _originalYCenter;
	UIView* _clippingView;
	unsigned long long _viewHierarchyIndex;
	double _amplitude;

}

@property (nonatomic,retain) UIView * windowedScrollContentView;                 //@synthesize windowedScrollContentView=_windowedScrollContentView - In the implementation block
@property (assign,nonatomic) double originalYCenter;                             //@synthesize originalYCenter=_originalYCenter - In the implementation block
@property (nonatomic,retain) UIView * clippingView;                              //@synthesize clippingView=_clippingView - In the implementation block
@property (assign,nonatomic) unsigned long long viewHierarchyIndex;              //@synthesize viewHierarchyIndex=_viewHierarchyIndex - In the implementation block
@property (nonatomic,readonly) double amplitude;                                 //@synthesize amplitude=_amplitude - In the implementation block
-(UIView *)clippingView;
-(double)amplitude;
-(void)setClippingView:(UIView *)arg1 ;
-(id)initWithComponentView:(id)arg1 withBehavior:(id)arg2 ;
-(void)setupWithBehaviorController:(id)arg1 ;
-(void)setupWindowedScroll;
-(void)updateWithBehaviorController:(id)arg1 ;
-(UIView *)windowedScrollContentView;
-(double)originalYCenter;
-(void)setWindowedScrollContentView:(UIView *)arg1 ;
-(void)setOriginalYCenter:(double)arg1 ;
-(void)setViewHierarchyIndex:(unsigned long long)arg1 ;
-(unsigned long long)viewHierarchyIndex;
-(void)destroyWithBehaviorController:(id)arg1 ;
-(void)destroyWindowedScroll;
@end

