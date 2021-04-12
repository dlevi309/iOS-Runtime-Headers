/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIHorizontallyScrollingContainerButtonController.h>

@class SearchUIDetailedView;

@interface SearchUIHorizontallyScrollingDetailedRowButtonController : SearchUIHorizontallyScrollingContainerButtonController {

	SearchUIDetailedView* _detailedView;

}

@property (nonatomic,retain) SearchUIDetailedView * detailedView;              //@synthesize detailedView=_detailedView - In the implementation block
-(double)spacing;
-(id)setupContentView;
-(void)setFeedbackDelegate:(id)arg1 ;
-(void)setCardSectionRowModel:(id)arg1 ;
-(void)setDetailedView:(SearchUIDetailedView *)arg1 ;
-(SearchUIDetailedView *)detailedView;
@end

