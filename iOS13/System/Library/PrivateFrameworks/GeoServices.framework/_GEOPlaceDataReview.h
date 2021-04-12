/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOMapItemReview.h>

@class NSString, NSDate, GEOPDPlace, GEOPDReview;

@interface _GEOPlaceDataReview : NSObject <GEOMapItemReview> {

	GEOPDPlace* _placeData;
	GEOPDReview* _review;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_score,nonatomic,readonly) double score; 
@property (getter=_maxScore,nonatomic,readonly) double maxScore; 
@property (getter=_normalizedScore,nonatomic,readonly) double normalizedScore; 
@property (getter=_localizedSnippet,nonatomic,readonly) NSString * localizedSnippet; 
@property (getter=_localizedSnippetLocale,nonatomic,readonly) NSString * localizedSnippetLocale; 
@property (getter=_date,nonatomic,readonly) NSDate * date; 
@property (getter=_reviewerName,nonatomic,readonly) NSString * reviewerName; 
@property (getter=_reviewerImageURLString,nonatomic,readonly) NSString * reviewerImageURLString; 
@property (getter=_identifier,nonatomic,readonly) NSString * identifier; 
-(id)_identifier;
-(id)_date;
-(double)_score;
-(double)_maxScore;
-(double)_normalizedScore;
-(id)initWithPlaceData:(id)arg1 review:(id)arg2 ;
-(id)_localizedSnippet;
-(id)_localizedSnippetLocale;
-(id)_reviewerName;
-(id)_reviewerImageURLString;
@end

