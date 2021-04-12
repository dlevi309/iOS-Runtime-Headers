/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellSeparatorAppearanceDefining.h>

@class HUItemTableSectionHeaderFooterView, NSString;

@interface HUSectionHeaderFooterCell : UITableViewCell <HUCellSeparatorAppearanceDefining> {

	HUItemTableSectionHeaderFooterView* _headerFooterView;

}

@property (nonatomic,readonly) HUItemTableSectionHeaderFooterView * headerFooterView;              //@synthesize headerFooterView=_headerFooterView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL prefersSeparatorsHidden; 
-(void)prepareForReuse;
-(CGSize)intrinsicContentSize;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HUItemTableSectionHeaderFooterView *)headerFooterView;
-(BOOL)prefersSeparatorsHidden;
@end

