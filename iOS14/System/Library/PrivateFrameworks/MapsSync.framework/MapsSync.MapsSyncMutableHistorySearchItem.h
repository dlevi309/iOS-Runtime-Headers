/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncMutableHistoryItem.h>

@class GEOMapRegion, NSString;

@interface MapsSync.MapsSyncMutableHistorySearchItem : MapsSync.MapsSyncMutableHistoryItem {

	 _proxyHistory;

}

@property (retain,nonatomic) GEOMapRegion * geoMapRegion; 
@property (copy,nonatomic) NSString * language; 
@property (copy,nonatomic) NSString * locationDisplay; 
@property (copy,nonatomic) NSString * query; 
-(NSString *)query;
-(void)setLanguage:(NSString *)arg1 ;
-(id)initWithProxyObject:(id)arg1 ;
-(GEOMapRegion *)geoMapRegion;
-(void)setGeoMapRegion:(GEOMapRegion *)arg1 ;
-(NSString *)locationDisplay;
-(void)setLocationDisplay:(NSString *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)language;
@end

