/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@class NSArray, SFSearchResult, SFCardSection, SFCard, NSString, NSURL;

@interface SearchUIRowModel : NSObject {

	BOOL _isTappable;
	BOOL _isDraggable;
	NSArray* _results;
	SFSearchResult* _identifyingResult;
	SFCardSection* _cardSection;
	NSArray* _punchouts;
	NSArray* _contactIdentifiers;
	Class _cellViewClass;
	SFCard* _nextCard;
	double _leadingSeparatorImageInset;
	unsigned long long _queryId;
	NSString* _dragTitle;
	NSString* _dragSubtitle;
	NSString* _dragText;
	NSURL* _dragURL;
	NSString* _dragAppBundleID;

}

@property (nonatomic,retain) NSArray * results;                                //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) SFSearchResult * identifyingResult;               //@synthesize identifyingResult=_identifyingResult - In the implementation block
@property (nonatomic,retain) SFCardSection * cardSection;                      //@synthesize cardSection=_cardSection - In the implementation block
@property (nonatomic,readonly) NSArray * punchouts;                            //@synthesize punchouts=_punchouts - In the implementation block
@property (nonatomic,readonly) NSArray * contactIdentifiers;                   //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (nonatomic,readonly) Class cellViewClass;                            //@synthesize cellViewClass=_cellViewClass - In the implementation block
@property (nonatomic,readonly) SFCard * nextCard;                              //@synthesize nextCard=_nextCard - In the implementation block
@property (nonatomic,readonly) BOOL isTappable;                                //@synthesize isTappable=_isTappable - In the implementation block
@property (nonatomic,readonly) int separatorStyle; 
@property (nonatomic,readonly) double leadingSeparatorImageInset;              //@synthesize leadingSeparatorImageInset=_leadingSeparatorImageInset - In the implementation block
@property (nonatomic,readonly) unsigned long long queryId;                     //@synthesize queryId=_queryId - In the implementation block
@property (nonatomic,readonly) BOOL isDraggable;                               //@synthesize isDraggable=_isDraggable - In the implementation block
@property (nonatomic,readonly) NSString * dragTitle;                           //@synthesize dragTitle=_dragTitle - In the implementation block
@property (nonatomic,readonly) NSString * dragSubtitle;                        //@synthesize dragSubtitle=_dragSubtitle - In the implementation block
@property (nonatomic,readonly) NSString * dragText;                            //@synthesize dragText=_dragText - In the implementation block
@property (nonatomic,readonly) NSURL * dragURL;                                //@synthesize dragURL=_dragURL - In the implementation block
@property (nonatomic,readonly) NSString * dragAppBundleID;                     //@synthesize dragAppBundleID=_dragAppBundleID - In the implementation block
@property (nonatomic,readonly) BOOL isQuerySuggestion; 
-(NSArray *)results;
-(id)initWithResult:(id)arg1 ;
-(int)separatorStyle;
-(NSString *)reuseIdentifier;
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)contactIdentifiers;
-(SFCardSection *)cardSection;
-(void)setCardSection:(SFCardSection *)arg1 ;
-(SFCard *)nextCard;
-(id)initWithResults:(id)arg1 ;
-(unsigned long long)queryId;
-(BOOL)isDraggable;
-(NSArray *)punchouts;
-(SFSearchResult *)identifyingResult;
-(id)initWithCardSection:(id)arg1 queryId:(unsigned long long)arg2 ;
-(Class)cellViewClass;
-(NSURL *)dragURL;
-(NSString *)dragTitle;
-(NSString *)dragText;
-(NSString *)dragSubtitle;
-(BOOL)isTappable;
-(NSString *)dragAppBundleID;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 queryId:(unsigned long long)arg3 ;
-(id)initWithResults:(id)arg1 cardSection:(id)arg2 queryId:(unsigned long long)arg3 ;
-(void)setIdentifyingResult:(SFSearchResult *)arg1 ;
-(BOOL)isQuerySuggestion;
-(double)leadingSeparatorImageInset;
@end

