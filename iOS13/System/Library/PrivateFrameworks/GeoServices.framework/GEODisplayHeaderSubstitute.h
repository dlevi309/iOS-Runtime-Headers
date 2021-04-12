/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithPDDisplayHeaderSubstitute:(id)arg1 ;
-(GEORelatedSearchSuggestion *)relatedSearchSuggestion;
-(GEOPDDisplayHeaderSubstitute *)displayHeaderSubstitute;
-(int)substituteType;
-(NSString *)interpretedQuery;
-(void)setDisplayHeaderSubstitute:(GEOPDDisplayHeaderSubstitute *)arg1 ;
-(void)setRelatedSearchSuggestion:(GEORelatedSearchSuggestion *)arg1 ;
@end

