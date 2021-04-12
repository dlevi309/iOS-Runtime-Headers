/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIRowModel.h>

@class NSArray;

@interface SearchUIHorizontallyScrollingCardSectionRowModel : SearchUIRowModel {

	NSArray* _cardSectionRowModels;

}

@property (retain) NSArray * cardSectionRowModels;              //@synthesize cardSectionRowModels=_cardSectionRowModels - In the implementation block
-(id)reuseIdentifier;
-(void)setCardSectionRowModels:(NSArray *)arg1 ;
-(NSArray *)cardSectionRowModels;
-(id)initWithResults:(id)arg1 ;
-(BOOL)hasLeadingImage;
-(id)cardSection;
-(Class)cellViewClass;
@end

