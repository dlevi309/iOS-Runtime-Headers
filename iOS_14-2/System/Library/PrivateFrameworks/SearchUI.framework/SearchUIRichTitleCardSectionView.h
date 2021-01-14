/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>

@class TLKHeaderView;

@interface SearchUIRichTitleCardSectionView : SearchUICardSectionView

@property (nonatomic,retain) TLKHeaderView * contentView; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(id)dragTitleForCardSection:(id)arg1 ;
+(int)defaultSeparatorStyleForCardSection:(id)arg1 ;
+(id)dragSubtitleForCardSection:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(id)setupContentView;
@end

