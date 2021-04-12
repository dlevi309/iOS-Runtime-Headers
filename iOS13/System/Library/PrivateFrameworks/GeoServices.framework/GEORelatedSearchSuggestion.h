/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDRelatedSearchSuggestion, NSString;

@interface GEORelatedSearchSuggestion : NSObject {

	GEOPDRelatedSearchSuggestion* _relatedSearchSuggestion;

}

@property (nonatomic,retain) GEOPDRelatedSearchSuggestion * relatedSearchSuggestion;              //@synthesize relatedSearchSuggestion=_relatedSearchSuggestion - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSString * searchBarDisplayToken; 
-(NSString *)displayString;
-(id)_suggestionEntryMetadata;
-(id)initWithPDRelatedSearchSuggestion:(id)arg1 ;
-(GEOPDRelatedSearchSuggestion *)relatedSearchSuggestion;
-(void)setRelatedSearchSuggestion:(GEOPDRelatedSearchSuggestion *)arg1 ;
-(NSString *)searchBarDisplayToken;
@end

