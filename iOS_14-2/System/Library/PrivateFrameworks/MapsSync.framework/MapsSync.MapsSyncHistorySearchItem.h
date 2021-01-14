/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncHistoryItem.h>

@class NSString, GEOMapRegion;

@interface MapsSync.MapsSyncHistorySearchItem : MapsSync.MapsSyncHistoryItem {

	 _geoMapRegion;
	 _language;
	 _locationDisplay;
	 _query;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) GEOMapRegion * geoMapRegion; 
@property (readonly,nonatomic) NSString * language; 
@property (readonly,nonatomic) NSString * locationDisplay; 
@property (readonly,nonatomic) NSString * query; 
-(NSString *)query;
-(id)initWithObject:(id)arg1 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(NSString *)description;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(GEOMapRegion *)geoMapRegion;
-(NSString *)locationDisplay;
-(void)setPropertiesWithObject:(id)arg1 ;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
@end

