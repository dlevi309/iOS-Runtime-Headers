/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)completion;
-(double)convergenceRate;
-(void)setConvergenceRate:(double)arg1 ;
-(id<UIFocusItemScrollableContainer>)scrollableContainer;
-(void)setScrollableContainer:(id<UIFocusItemScrollableContainer>)arg1 ;
-(id<UIScrollViewDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(CGPoint)lastContentOffset;
-(void)setLastContentOffset:(CGPoint)arg1 ;
-(CGPoint)targetContentOffset;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(CGPoint)lastVelocity;
-(void)setLastVelocity:(CGPoint)arg1 ;
@end

