/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIRowModel.h>

@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel {

	NSArray* _cardSectionRowModels;

}

@property (nonatomic,retain) NSArray * cardSectionRowModels;              //@synthesize cardSectionRowModels=_cardSectionRowModels - In the implementation block
-(int)separatorStyle;
-(id)nextCard;
-(BOOL)isDraggable;
-(id)punchouts;
-(id)initWithResult:(id)arg1 cardSectionRowModels:(id)arg2 ;
-(Class)cellViewClass;
-(void)setCardSectionRowModels:(NSArray *)arg1 ;
-(NSArray *)cardSectionRowModels;
-(id)dragURL;
-(id)firstRowModel;
-(id)dragTitle;
-(id)dragText;
-(id)dragSubtitle;
-(BOOL)isTappable;
@end

