/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray;

@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution

@property (nonatomic,readonly) NSArray * addPhotoURLs; 
@property (nonatomic,readonly) BOOL canAddPhotosLocally; 
@property (nonatomic,readonly) BOOL canShowPhotosLocally; 
@property (nonatomic,readonly) BOOL shouldSuppressPhotoAttribution; 
@property (nonatomic,readonly) BOOL supportsReportingIssue; 
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3 ;
-(BOOL)canAddPhotosLocally;
-(BOOL)canShowPhotosLocally;
-(id)urlsForPhotoWithIdentifier:(id)arg1 ;
-(BOOL)shouldSuppressPhotoAttribution;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
-(NSArray *)addPhotoURLs;
-(BOOL)supportsReportingIssue;
@end

