/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputSwitcherTableCell.h>

@class UIInputSwitcherSegmentControl;

@interface UIInputSwitcherSegmentedTableCell : UIInputSwitcherTableCell {

	UIInputSwitcherSegmentControl* _segmentControl;

}

@property (nonatomic,readonly) UIInputSwitcherSegmentControl * segmentControl;              //@synthesize segmentControl=_segmentControl - In the implementation block
+(CGSize)preferredSizeWithSegmentCount:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(UIInputSwitcherSegmentControl *)segmentControl;
@end

