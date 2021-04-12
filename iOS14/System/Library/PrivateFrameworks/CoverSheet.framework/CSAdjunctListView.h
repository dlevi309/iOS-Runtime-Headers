/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewBase.h>

@class UIStackView;

@interface CSAdjunctListView : CSCoverSheetViewBase {

	UIStackView* _stackView;

}

@property (nonatomic,retain) UIStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
-(UIStackView *)stackView;
-(void)layoutSubviews;
-(void)_layoutStackView;
-(void)setStackView:(UIStackView *)arg1 ;
@end

