/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@class NSArray, SFSearchResult, SFCardSection, SFCard, NSString, NSURL;

@interface SearchUIRowModel : NSObject {

	BOOL _isTappable;
	BOOL _isDraggable;
	BOOL _supportsCustomUserReportRequestAfforance;
	BOOL _hasLeadingImage;
	BOOL _prefersNoSeparatorAbove;
	NSArray* _results;
	SFSearchResult* _identifyingResult;
	SFCardSection* _cardSection;
	NSArray* _punchouts;
	NSArray* _contactIdentifiers;
	Class _cellViewClass;
	SFCard* _nextCard;
	unsigned long long _queryId;
	NSString* _dragTitle;
	NSString* _dragSubtitle;
	NSString* _dragText;
	NSURL* _dragURL;
	NSString* _dragAppBundleID;

}

@property (nonatomic,retain) NSArray * results;                                            //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) SFSearchResult * identifyingResult;                           //@synthesize identifyingResult=_identifyingResult - In the implementation block
@property (nonatomic,retain) SFCardSection * cardSection;                                  //@synthesize cardSection=_cardSection - In the implementation block
@property (nonatomic,readonly) NSArray * punchouts;                                        //@synthesize punchouts=_punchouts - In the implementation block
@property (nonatomic,readonly) NSArray * contactIdentifiers;                               //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (nonatomic,readonly) Class cellViewClass;                                        //@synthesize cellViewClass=_cellViewClass - In the implementation block
@property (nonatomic,readonly) SFCard * nextCard;                                          //@synthesize nextCard=_nextCard - In the implementation block
@property (nonatomic,readonly) BOOL isTappable;                                            //@synthesize isTappable=_isTappable - In the implementation block
@property (nonatomic,readonly) int separatorStyle; 
@property (nonatomic,readonly) unsigned long long queryId;                                 //@synthesize queryId=_queryId - In the implementation block
@property (nonatomic,readonly) BOOL isDraggable;                                           //@synthesize isDraggable=_isDraggable - In the implementation block
@property (nonatomic,readonly) NSString * dragTitle;                                       //@synthesize dragTitle=_dragTitle - In the implementation block
@property (nonatomic,readonly) NSString * dragSubtitle;                                    //@synthesize dragSubtitle=_dragSubtitle - In the implementation block
@property (nonatomic,readonly) NSString * dragText;                                        //@synthesize dragText=_dragText - In the implementation block
@property (nonatomic,readonly) NSURL * dragURL;                                            //@synthesize dragURL=_dragURL - In the implementation block
@property (nonatomic,readonly) NSString * dragAppBundleID;                                 //@synthesize dragAppBundleID=_dragAppBundleID - In the implementation block
@property (nonatomic,readonly) BOOL isQuerySuggestion; 
@property (nonatomic,readonly) NSString * accessibilityIdentifier; 
@property (nonatomic,readonly) BOOL supportsCustomUserReportRequestAfforance;              //@synthesize supportsCustomUserReportRequestAfforance=_supportsCustomUserReportRequestAfforance - In the implementation block
@property (nonatomic,readonly) BOOL hasLeadingImage;                                       //@synthesize hasLeadingImage=_hasLeadingImage - In the implementation block
@property (nonatomic,readonly) BOOL prefersNoSeparatorAbove;                               //@synthesize prefersNoSeparatorAbove=_prefersNoSeparatorAbove - In the implementation block
@property (nonatomic,readonly) BOOL fillsBackgroundWithContent; 
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)results;
-(id)initWithResult:(id)arg1 ;
-(int)separatorStyle;
-(unsigned long long)queryId;
-(NSArray *)punchouts;
-(BOOL)isDraggable;
-(SFSearchResult *)identifyingResult;
-(void)setCardSection:(SFCardSection *)arg1 ;
-(NSString *)dragText;
-(SFCard *)nextCard;
-(NSURL *)dragURL;
-(NSArray *)contactIdentifiers;
-(BOOL)isTappable;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 queryId:(unsigned long long)arg3 ;
-(id)initWithResults:(id)arg1 cardSection:(id)arg2 queryId:(unsigned long long)arg3 ;
-(void)setIdentifyingResult:(SFSearchResult *)arg1 ;
-(BOOL)isQuerySuggestion;
-(BOOL)isEqualToModel:(id)arg1 ;
-(NSString *)dragAppBundleID;
-(NSString *)reuseIdentifier;
-(NSString *)accessibilityIdentifier;
-(NSString *)dragSubtitle;
-(id)initWithResults:(id)arg1 ;
-(BOOL)prefersNoSeparatorAbove;
-(BOOL)hasLeadingImage;
-(BOOL)fillsBackgroundWithContent;
-(SFCardSection *)cardSection;
-(id)initWithCardSection:(id)arg1 queryId:(unsigned long long)arg2 ;
-(NSString *)dragTitle;
-(BOOL)supportsCustomUserReportRequestAfforance;
-(Class)cellViewClass;
@end

