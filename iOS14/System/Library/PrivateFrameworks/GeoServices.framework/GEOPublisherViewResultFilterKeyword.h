/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDPublisherViewResultFilterKeyword, GEORelatedSearchSuggestion;

@interface GEOPublisherViewResultFilterKeyword : NSObject {

	GEOPDPublisherViewResultFilterKeyword* _filterKeywordIdentifier;

}

@property (nonatomic,readonly) GEORelatedSearchSuggestion * searchSuggestion; 
@property (nonatomic,readonly) GEOPDPublisherViewResultFilterKeyword * keywordIdentifier; 
-(GEORelatedSearchSuggestion *)searchSuggestion;
-(id)initWithFilterKeywordIdentifier:(id)arg1 ;
-(GEOPDPublisherViewResultFilterKeyword *)keywordIdentifier;
@end

