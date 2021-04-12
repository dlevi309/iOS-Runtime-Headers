/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIRowModel.h>

@class NSArray;

@interface SearchUIHorizontallyScrollingCardSectionRowModel : SearchUIRowModel {

	NSArray* _cardSectionRowModels;

}

@property (retain) NSArray * cardSectionRowModels;              //@synthesize cardSectionRowModels=_cardSectionRowModels - In the implementation block
-(id)reuseIdentifier;
-(id)cardSection;
-(id)initWithResults:(id)arg1 ;
-(Class)cellViewClass;
-(void)setCardSectionRowModels:(NSArray *)arg1 ;
-(NSArray *)cardSectionRowModels;
@end

