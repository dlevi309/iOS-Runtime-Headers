/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncHistoryItem.h>

@class NSString, GEOMapItemStorage, NSUUID, NSNumber;

@interface MapsSync.MapsSyncHistoryPlaceItem : MapsSync.MapsSyncHistoryItem {

	 _mapItemStorage;
	 _latitude;
	 _longitude;
	 _muid;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) GEOMapItemStorage * mapItemStorage; 
@property (readonly,nonatomic) NSUUID * supersededSearchId; 
@property (readonly,nonatomic) NSNumber * latitude; 
@property (readonly,nonatomic) NSNumber * longitude; 
@property (readonly,nonatomic) NSNumber * muid; 
+(void)fetchNearbyPlacesWithLatitude:(double)arg1 longitude:(double)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSNumber *)latitude;
-(id)initWithObject:(id)arg1 ;
-(Class)managedObjectClass;
-(NSNumber *)longitude;
-(Class)mutableObjectClass;
-(NSString *)description;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(NSUUID *)supersededSearchId;
-(NSNumber *)muid;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setPropertiesWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

