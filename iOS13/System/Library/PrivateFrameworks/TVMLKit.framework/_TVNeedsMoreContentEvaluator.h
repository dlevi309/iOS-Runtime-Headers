/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@class UIScrollView, IKViewElement;

@interface _TVNeedsMoreContentEvaluator : NSObject {

	UIScrollView* _scrollView;
	long long _axis;
	long long _state;
	IKViewElement* _viewElement;
	double _threshold;

}

@property (assign,nonatomic) long long state;                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double threshold;                         //@synthesize threshold=_threshold - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) long long axis;                         //@synthesize axis=_axis - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
-(id)init;
-(long long)state;
-(void)reset;
-(void)setState:(long long)arg1 ;
-(double)threshold;
-(void)setThreshold:(double)arg1 ;
-(long long)axis;
-(UIScrollView *)scrollView;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(id)initWithScrollView:(id)arg1 axis:(long long)arg2 ;
-(void)evaluateForState:(long long)arg1 ;
@end

