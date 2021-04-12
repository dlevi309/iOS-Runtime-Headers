/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIRowModel.h>

@interface SearchUICardSectionRowModel : SearchUIRowModel {

	BOOL _isInline;
	Class _customCardSectionViewClass;

}

@property (assign,nonatomic) BOOL isInline;                         //@synthesize isInline=_isInline - In the implementation block
@property (readonly) Class customCardSectionViewClass;              //@synthesize customCardSectionViewClass=_customCardSectionViewClass - In the implementation block
-(id)description;
-(int)separatorStyle;
-(id)reuseIdentifier;
-(id)nextCard;
-(BOOL)isDraggable;
-(BOOL)isInline;
-(id)punchouts;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(BOOL)arg3 queryId:(unsigned long long)arg4 ;
-(Class)customCardSectionViewClass;
-(Class)cellViewClass;
-(id)dragURL;
-(id)dragTitle;
-(id)dragText;
-(id)dragSubtitle;
-(BOOL)isTappable;
-(BOOL)isQuerySuggestion;
-(double)leadingSeparatorImageInset;
-(void)setIsInline:(BOOL)arg1 ;
-(BOOL)anyInlineCardSectionsHavePunchouts;
-(BOOL)anyInlineCardSectionsHaveNextCards;
@end

