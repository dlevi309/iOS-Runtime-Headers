/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <BaseBoardUI/BSUIScrollView.h>

@interface SBIconScrollView : BSUIScrollView

@property (assign,nonatomic,__weak) id<SBIconScrollViewDelegate> delegate; 
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_autoScrollAssistantUpdateContentOffset:(CGPoint)arg1 ;
-(BOOL)cancelTouchTracking;
-(BOOL)_scrollsToMakeFirstResponderVisible;
-(CGPoint)_roundedProposedContentOffset:(CGPoint)arg1 ;
@end

