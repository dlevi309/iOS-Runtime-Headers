/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/_MKMapItemAttribution.h>

@class GEOMapItemReviewsAttribution, NSArray;

@interface _MKMapItemReviewsAttribution : _MKMapItemAttribution {

	GEOMapItemReviewsAttribution* _geoReviewsAttribution;

}

@property (nonatomic,readonly) NSArray * addReviewURLs; 
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
-(NSArray *)addReviewURLs;
-(id)urlsForSelectedItemWithItems:(id)arg1 ;
-(id)urlsForReview:(id)arg1 ;
@end

