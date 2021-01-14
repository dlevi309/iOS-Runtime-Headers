/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncCollectionItem.h>

@class NSString, GEOLatLng, GEOMapItemStorage, NSNumber;

@interface MapsSync.MapsSyncCollectionPlaceItem : MapsSync.MapsSyncCollectionItem {

	 _customName;
	 _droppedPinCoordinate;
	 _droppedPinFloorOrdinal;
	 _mapItemStorage;
	 _origin;
	 _latitude;
	 _longitude;
	 _muid;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSString * customName; 
@property (readonly,nonatomic) GEOLatLng * droppedPinCoordinate; 
@property (readonly,nonatomic) int droppedPinFloorOrdinal; 
@property (readonly,nonatomic) GEOMapItemStorage * mapItemStorage; 
@property (readonly,nonatomic) short origin; 
@property (readonly,nonatomic) NSNumber * latitude; 
@property (readonly,nonatomic) NSNumber * longitude; 
@property (readonly,nonatomic) NSNumber * muid; 
+(void)fetchNearbyPlacesWithLatitude:(double)arg1 longitude:(double)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSNumber *)latitude;
-(id)initWithObject:(id)arg1 ;
-(short)origin;
-(Class)managedObjectClass;
-(NSNumber *)longitude;
-(Class)mutableObjectClass;
-(NSString *)description;
-(NSString *)customName;
-(id)initWithCollection:(id)arg1 ;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(GEOLatLng *)droppedPinCoordinate;
-(int)droppedPinFloorOrdinal;
-(BOOL)isDuplicateOfOther:(id)arg1 ;
-(NSNumber *)muid;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setPropertiesWithObject:(id)arg1 ;
-(id)copyWithZone:(void*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

