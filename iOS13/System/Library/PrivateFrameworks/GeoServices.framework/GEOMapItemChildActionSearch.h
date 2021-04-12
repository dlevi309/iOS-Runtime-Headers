/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEORelatedSearchSuggestion, NSString;

@interface GEOMapItemChildActionSearch : NSObject {

	GEORelatedSearchSuggestion* _relatedSearchSuggestion;

}

@property (nonatomic,retain) GEORelatedSearchSuggestion * relatedSearchSuggestion;              //@synthesize relatedSearchSuggestion=_relatedSearchSuggestion - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
-(NSString *)displayString;
-(GEORelatedSearchSuggestion *)relatedSearchSuggestion;
-(void)setRelatedSearchSuggestion:(GEORelatedSearchSuggestion *)arg1 ;
-(id)initWithChildActionSearch:(id)arg1 ;
@end

