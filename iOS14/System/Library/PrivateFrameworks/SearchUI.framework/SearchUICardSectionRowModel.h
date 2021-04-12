/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIRowModel.h>

@interface SearchUICardSectionRowModel : SearchUIRowModel {

	BOOL _isInline;
	Class _customCardSectionViewClass;

}

@property (assign,nonatomic) BOOL isInline;                         //@synthesize isInline=_isInline - In the implementation block
@property (readonly) Class customCardSectionViewClass;              //@synthesize customCardSectionViewClass=_customCardSectionViewClass - In the implementation block
-(int)separatorStyle;
-(id)punchouts;
-(BOOL)isDraggable;
-(void)setIsInline:(BOOL)arg1 ;
-(id)description;
-(id)dragText;
-(id)nextCard;
-(BOOL)isInline;
-(id)dragURL;
-(Class)customCardSectionViewClass;
-(BOOL)anyInlineCardSectionsHavePunchouts;
-(BOOL)anyInlineCardSectionsHaveNextCards;
-(id)fallbackCardSectionForCompactResult;
-(Class)cardSectionViewClass;
-(BOOL)isTappable;
-(BOOL)isQuerySuggestion;
-(id)reuseIdentifier;
-(id)accessibilityIdentifier;
-(id)dragSubtitle;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(BOOL)arg3 queryId:(unsigned long long)arg4 ;
-(BOOL)prefersNoSeparatorAbove;
-(BOOL)hasLeadingImage;
-(BOOL)fillsBackgroundWithContent;
-(id)dragTitle;
-(BOOL)supportsCustomUserReportRequestAfforance;
-(Class)cellViewClass;
@end

