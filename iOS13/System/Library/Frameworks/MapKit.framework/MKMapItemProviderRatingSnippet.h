/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

@class NSString, NSDate, NSURL, GEOMapItemTip;


@protocol MKMapItemProviderRatingSnippet <NSObject>
@property (getter=_score,nonatomic,readonly) double score; 
@property (getter=_maxScore,nonatomic,readonly) double maxScore; 
@property (getter=_normalizedScore,nonatomic,readonly) double normalizedScore; 
@property (getter=_localizedSnippet,nonatomic,readonly) NSString * localizedSnippet; 
@property (getter=_localizedSnippetLocale,nonatomic,readonly) NSString * localizedSnippetLocale; 
@property (getter=_date,nonatomic,readonly) NSDate * date; 
@property (getter=_reviewerName,nonatomic,readonly) NSString * reviewerName; 
@property (getter=_reviewerImageURL,nonatomic,readonly) NSURL * reviewerImageURL; 
@property (getter=_geoReview,nonatomic,readonly) id<GEOMapItemReview> geoReview; 
@property (getter=_geoMapItemTIp,nonatomic,readonly) GEOMapItemTip * geoMapItemTip; 
@required
-(id)_date;
-(double)_score;
-(double)_maxScore;
-(double)_normalizedScore;
-(id)_localizedSnippet;
-(id)_localizedSnippetLocale;
-(id)_reviewerName;
-(void)showWithCompletionHandler:(/*^block*/id)arg1;
-(id)_reviewerImageURL;
-(id)_geoReview;
-(id)_geoMapItemTIp;

@end

