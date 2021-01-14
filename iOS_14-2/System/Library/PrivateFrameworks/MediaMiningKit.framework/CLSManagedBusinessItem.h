/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, CLSBusinessCacheEntry;

@interface CLSManagedBusinessItem : NSManagedObject

@property (nonatomic,retain) NSNumber * venueCapacityAsNumber; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) unsigned categories; 
@property (assign,nonatomic) long long venueCapacity; 
@property (nonatomic,retain) NSString * businessCategories; 
@property (nonatomic,retain) CLSBusinessCacheEntry * entry; 
@property (nonatomic,retain) NSString * geoServiceProvider; 
@property (nonatomic,retain) NSString * isoCountryCode; 
+(id)entityName;
-(long long)venueCapacity;
-(void)setVenueCapacity:(long long)arg1 ;
@end

