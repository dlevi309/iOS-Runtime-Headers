/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUTitleValueCell.h>

@class HUDynamicAlignmentTitleValueCellLayoutOptions;

@interface HUDynamicAlignmentTitleValueCell : HUTitleValueCell {

	HUDynamicAlignmentTitleValueCellLayoutOptions* _layoutOptions;

}

@property (nonatomic,retain) HUDynamicAlignmentTitleValueCellLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
-(HUDynamicAlignmentTitleValueCellLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(HUDynamicAlignmentTitleValueCellLayoutOptions *)arg1 ;
-(void)_ensureCorrectHeaderViewOrientation;
-(BOOL)useVerticalLayout;
@end

