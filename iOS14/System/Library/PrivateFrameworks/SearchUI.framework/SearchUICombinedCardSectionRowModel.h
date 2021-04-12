/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIRowModel.h>

@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel {

	NSArray* _cardSectionRowModels;

}

@property (nonatomic,retain) NSArray * cardSectionRowModels;              //@synthesize cardSectionRowModels=_cardSectionRowModels - In the implementation block
-(int)separatorStyle;
-(id)punchouts;
-(BOOL)isDraggable;
-(id)dragText;
-(id)nextCard;
-(id)dragURL;
-(BOOL)isTappable;
-(void)setCardSectionRowModels:(NSArray *)arg1 ;
-(NSArray *)cardSectionRowModels;
-(id)firstRowModel;
-(id)dragSubtitle;
-(id)initWithResult:(id)arg1 cardSectionRowModels:(id)arg2 ;
-(id)dragTitle;
-(Class)cellViewClass;
@end

