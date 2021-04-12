/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIFocusItemScrollableContainer <UIFocusItemContainer>
@property (assign,nonatomic) CGPoint contentOffset; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) CGSize visibleSize; 
@required
-(CGSize)contentSize;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1;
-(CGSize)visibleSize;

@end

