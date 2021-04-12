/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class SearchUIImageView, TLKStackView, NSString;

@interface SearchUITwitterCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate> {

	SearchUIImageView* _pictureView;

}

@property (nonatomic,retain) TLKStackView * contentView; 
@property (nonatomic,retain) SearchUIImageView * pictureView;              //@synthesize pictureView=_pictureView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPictureView:(SearchUIImageView *)arg1 ;
-(SearchUIImageView *)pictureView;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(id)setupContentView;
@end

