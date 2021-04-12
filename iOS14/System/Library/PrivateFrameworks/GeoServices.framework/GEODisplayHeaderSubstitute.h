/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDDisplayHeaderSubstitute, GEORelatedSearchSuggestion, NSString;

@interface GEODisplayHeaderSubstitute : NSObject {

	GEOPDDisplayHeaderSubstitute* _displayHeaderSubstitute;
	GEORelatedSearchSuggestion* _relatedSearchSuggestion;

}

@property (nonatomic,retain) GEOPDDisplayHeaderSubstitute * displayHeaderSubstitute;              //@synthesize displayHeaderSubstitute=_displayHeaderSubstitute - In the implementation block
@property (nonatomic,retain) GEORelatedSearchSuggestion * relatedSearchSuggestion;                //@synthesize relatedSearchSuggestion=_relatedSearchSuggestion - In the implementation block
@property (nonatomic,readonly) int substituteType; 
@property (nonatomic,readonly) NSString * interpretedQuery; 
-(GEORelatedSearchSuggestion *)relatedSearchSuggestion;
-(void)setRelatedSearchSuggestion:(GEORelatedSearchSuggestion *)arg1 ;
-(id)initWithPDDisplayHeaderSubstitute:(id)arg1 ;
-(NSString *)interpretedQuery;
-(int)substituteType;
-(GEOPDDisplayHeaderSubstitute *)displayHeaderSubstitute;
-(void)setDisplayHeaderSubstitute:(GEOPDDisplayHeaderSubstitute *)arg1 ;
@end

