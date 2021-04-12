/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

