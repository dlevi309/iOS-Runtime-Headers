/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIFocusItemScrollableContainer, UIScrollViewDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIFocusEngineScrollableContainerOffsets : NSObject {

	id<UIFocusItemScrollableContainer> _scrollableContainer;
	id<UIScrollViewDelegate> _scrollDelegate;
	double _convergenceRate;
	/*^block*/id _completion;
	CGPoint _lastContentOffset;
	CGPoint _targetContentOffset;
	CGPoint _lastVelocity;

}

@property (nonatomic,retain) id<UIFocusItemScrollableContainer> scrollableContainer;              //@synthesize scrollableContainer=_scrollableContainer - In the implementation block
@property (nonatomic,retain) id<UIScrollViewDelegate> scrollDelegate;                             //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (assign,nonatomic) CGPoint lastContentOffset;                                           //@synthesize lastContentOffset=_lastContentOffset - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;                                         //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (assign,nonatomic) double convergenceRate;                                              //@synthesize convergenceRate=_convergenceRate - In the implementation block
@property (assign,nonatomic) CGPoint lastVelocity;                                                //@synthesize lastVelocity=_lastVelocity - In the implementation block
@property (nonatomic,copy) id completion;                                                         //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(CGPoint)lastContentOffset;
-(void)setScrollDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(id)completion;
-(id<UIScrollViewDelegate>)scrollDelegate;
-(id<UIFocusItemScrollableContainer>)scrollableContainer;
-(void)setScrollableContainer:(id<UIFocusItemScrollableContainer>)arg1 ;
-(CGPoint)targetContentOffset;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(void)setLastVelocity:(CGPoint)arg1 ;
-(void)setLastContentOffset:(CGPoint)arg1 ;
-(double)convergenceRate;
-(CGPoint)lastVelocity;
-(void)setConvergenceRate:(double)arg1 ;
@end

