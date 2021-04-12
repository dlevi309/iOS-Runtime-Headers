/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, CLSLocationCacheEntry;

@interface CLSManagedPlacemark : NSManagedObject

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double regionLatitude; 
@property (assign,nonatomic) double regionLongitude; 
@property (assign,nonatomic) double regionRadius; 
@property (nonatomic,copy) NSString * regionIdentifier; 
@property (nonatomic,copy) NSString * thoroughfare; 
@property (nonatomic,copy) NSString * subThoroughfare; 
@property (nonatomic,copy) NSString * locality; 
@property (nonatomic,copy) NSString * subLocality; 
@property (nonatomic,copy) NSString * administrativeArea; 
@property (nonatomic,copy) NSString * administrativeAreaCode; 
@property (nonatomic,copy) NSString * subAdministrativeArea; 
@property (nonatomic,copy) NSString * isoCountryCode; 
@property (nonatomic,copy) NSString * inlandWater; 
@property (nonatomic,copy) NSString * ocean; 
@property (nonatomic,copy) NSString * areasOfInterest; 
@property (nonatomic,copy) NSString * geoServiceProvider; 
@property (assign,nonatomic) BOOL isIsland; 
@property (nonatomic,retain) NSData * revGeoLocationData; 
@property (nonatomic,retain) CLSLocationCacheEntry * entry; 
+(id)entityName;
@end

