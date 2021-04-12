/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIHorizontallyScrollingContainerButtonController.h>

@class SearchUIImageView, SearchUILabel;

@interface SearchUIHorizontallyScrollingVerticalLayoutButtonController : SearchUIHorizontallyScrollingContainerButtonController {

	SearchUIImageView* thumbnailView;
	SearchUILabel* _titleLabel;
	SearchUILabel* _footnoteLabel;

}

@property (nonatomic,retain) SearchUILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) SearchUILabel * footnoteLabel;              //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
-(double)spacing;
-(SearchUILabel *)titleLabel;
-(void)setTitleLabel:(SearchUILabel *)arg1 ;
-(SearchUILabel *)footnoteLabel;
-(void)setFootnoteLabel:(SearchUILabel *)arg1 ;
-(id)thumbnailView;
-(void)setThumbnailView:(id)arg1 ;
-(id)setupContentView;
-(void)setCardSectionRowModel:(id)arg1 ;
@end

