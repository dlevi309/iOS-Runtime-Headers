/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)axis;
-(double)threshold;
-(id)init;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(long long)state;
-(UIScrollView *)scrollView;
-(void)setThreshold:(double)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(id)initWithScrollView:(id)arg1 axis:(long long)arg2 ;
-(void)evaluateForState:(long long)arg1 ;
@end

