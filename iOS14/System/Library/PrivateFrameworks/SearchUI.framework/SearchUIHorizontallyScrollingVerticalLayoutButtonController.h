/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SearchUILabel *)titleLabel;
-(double)spacing;
-(void)setTitleLabel:(SearchUILabel *)arg1 ;
-(void)setFootnoteLabel:(SearchUILabel *)arg1 ;
-(SearchUILabel *)footnoteLabel;
-(id)thumbnailView;
-(void)setThumbnailView:(id)arg1 ;
-(void)setCardSectionRowModel:(id)arg1 ;
-(id)setupContentView;
@end

