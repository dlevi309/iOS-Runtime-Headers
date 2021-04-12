/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIconLabelAccessoryView.h>

@class UIImageView;

@interface SBIconLegibilityLabelAccessoryView : SBIconLabelAccessoryView {

	UIImageView* _iconImageView;

}

@property (nonatomic,readonly) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
-(BOOL)hasBaseline;
-(double)baselineOffsetFromBottom;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(UIImageView *)iconImageView;
-(void)updateWithBaseImage:(id)arg1 legibilitySettings:(id)arg2 ;
-(void)removeInvertingFilter;
-(void)addInvertingFilter;
@end

