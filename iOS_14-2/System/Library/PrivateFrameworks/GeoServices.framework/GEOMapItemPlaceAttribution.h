/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray, NSURL;

@interface GEOMapItemPlaceAttribution : GEOMapItemAttribution

@property (nonatomic,readonly) NSArray * checkInURLs; 
@property (nonatomic,readonly) NSURL * webURL; 
-(NSURL *)webURL;
-(NSArray *)checkInURLs;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
@end

