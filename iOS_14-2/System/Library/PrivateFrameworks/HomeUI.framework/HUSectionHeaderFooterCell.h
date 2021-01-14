/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL prefersSeparatorsHidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willMoveToSuperview:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(CGSize)intrinsicContentSize;
-(void)prepareForReuse;
-(HUItemTableSectionHeaderFooterView *)headerFooterView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)prefersSeparatorsHidden;
@end

