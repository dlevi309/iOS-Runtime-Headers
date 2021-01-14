/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIFocusItemScrollableContainer <UIFocusItemContainer>
@property (assign,nonatomic) CGPoint contentOffset; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) CGSize visibleSize; 
@required
-(CGSize)contentSize;
-(CGSize)visibleSize;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1;

@end

