/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIHorizontallyScrollingButtonController.h>

@class TLKProminenceView, TLKTextButton;

@interface SearchUIHorizontallyScrollingMoreResultsButtonController : SearchUIHorizontallyScrollingButtonController {

	TLKProminenceView* _backgroundView;

}

@property (retain) TLKTextButton * button; 
@property (retain) TLKProminenceView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(id)init;
-(TLKProminenceView *)backgroundView;
-(void)setBackgroundView:(TLKProminenceView *)arg1 ;
-(void)setCardSectionRowModel:(id)arg1 ;
@end

