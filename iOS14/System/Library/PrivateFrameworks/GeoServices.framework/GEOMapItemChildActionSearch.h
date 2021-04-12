/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

