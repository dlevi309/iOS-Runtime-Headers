/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBackgroundView:(TLKProminenceView *)arg1 ;
-(TLKProminenceView *)backgroundView;
-(void)setCardSectionRowModel:(id)arg1 ;
@end

