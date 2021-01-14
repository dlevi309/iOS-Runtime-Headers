/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/_MKMapItemAttribution.h>

@class GEOMapItemPhotosAttribution, NSArray;

@interface _MKMapItemPhotosAttribution : _MKMapItemAttribution {

	GEOMapItemPhotosAttribution* _geoPhotosAttribution;

}

@property (nonatomic,readonly) NSArray * addPhotoURLs; 
@property (nonatomic,readonly) BOOL shouldSuppressPhotoAttribution; 
@property (nonatomic,readonly) BOOL shouldHandlePhotosLocally; 
@property (nonatomic,readonly) BOOL shouldAddPhotosLocally; 
@property (nonatomic,readonly) BOOL supportsReportingIssue; 
-(BOOL)shouldAddPhotosLocally;
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
-(id)urlsForPhotoWithIdentifier:(id)arg1 ;
-(BOOL)shouldHandlePhotosLocally;
-(BOOL)shouldSuppressPhotoAttribution;
-(NSArray *)addPhotoURLs;
-(BOOL)supportsReportingIssue;
@end

