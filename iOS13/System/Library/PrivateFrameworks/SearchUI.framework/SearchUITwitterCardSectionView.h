/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(id)setupContentView;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)setPictureView:(SearchUIImageView *)arg1 ;
-(SearchUIImageView *)pictureView;
@end

