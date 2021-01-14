/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOMapItemReview.h>

@class NSString, NSDate, GEOPDPlace, GEOPDReview;

@interface _GEOPlaceDataReview : NSObject <GEOMapItemReview> {

	GEOPDPlace* _placeData;
	GEOPDReview* _review;

}

@property (getter=_score,nonatomic,readonly) double score; 
@property (getter=_maxScore,nonatomic,readonly) double maxScore; 
@property (getter=_normalizedScore,nonatomic,readonly) double normalizedScore; 
@property (getter=_localizedSnippet,nonatomic,readonly) NSString * localizedSnippet; 
@property (getter=_localizedSnippetLocale,nonatomic,readonly) NSString * localizedSnippetLocale; 
@property (getter=_date,nonatomic,readonly) NSDate * date; 
@property (getter=_reviewerName,nonatomic,readonly) NSString * reviewerName; 
@property (getter=_reviewerImageURLString,nonatomic,readonly) NSString * reviewerImageURLString; 
@property (getter=_identifier,nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_score;
-(double)_normalizedScore;
-(double)_maxScore;
-(id)_identifier;
-(id)initWithPlaceData:(id)arg1 review:(id)arg2 ;
-(id)_reviewerName;
-(id)_localizedSnippet;
-(id)_localizedSnippetLocale;
-(id)_reviewerImageURLString;
-(id)_date;
@end

