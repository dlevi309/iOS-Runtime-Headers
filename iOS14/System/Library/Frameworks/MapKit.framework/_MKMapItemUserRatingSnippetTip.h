/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKMapItemProviderRatingSnippet.h>

@class MKMapItem, GEOMapItemTip, NSString, NSDate, NSURL;

@interface _MKMapItemUserRatingSnippetTip : NSObject <MKMapItemProviderRatingSnippet> {

	MKMapItem* _mapItem;
	GEOMapItemTip* _tip;

}

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_score;
-(double)_normalizedScore;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)_maxScore;
-(id)_geoReview;
-(id)_reviewerImageURL;
-(id)_reviewerName;
-(id)_localizedSnippet;
-(id)_localizedSnippetLocale;
-(id)_geoMapItemTIp;
-(id)initWithMapItem:(id)arg1 review:(id)arg2 ;
-(id)_date;
@end

