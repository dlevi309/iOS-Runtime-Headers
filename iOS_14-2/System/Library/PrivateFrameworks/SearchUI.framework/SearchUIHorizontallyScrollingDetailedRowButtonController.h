/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIHorizontallyScrollingContainerButtonController.h>

@class SearchUIDetailedView;

@interface SearchUIHorizontallyScrollingDetailedRowButtonController : SearchUIHorizontallyScrollingContainerButtonController {

	SearchUIDetailedView* _detailedView;

}

@property (nonatomic,retain) SearchUIDetailedView * detailedView;              //@synthesize detailedView=_detailedView - In the implementation block
-(double)spacing;
-(void)setCardSectionRowModel:(id)arg1 ;
-(void)setFeedbackDelegate:(id)arg1 ;
-(void)setDetailedView:(SearchUIDetailedView *)arg1 ;
-(SearchUIDetailedView *)detailedView;
-(id)setupContentView;
@end

