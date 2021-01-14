/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(UIInputSwitcherSegmentControl *)segmentControl;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

