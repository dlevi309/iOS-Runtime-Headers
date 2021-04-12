/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSUUID, NSNumber, NSSet, MapsSyncManagedMixinMapItem;

@interface MapsSyncManagedFavoriteItem : NSManagedObject

@property (copy,nonatomic) NSDate * createTime; 
@property (copy,nonatomic) NSString * customName; 
@property (assign,nonatomic) BOOL hidden; 
@property (copy,nonatomic) NSUUID * identifier; 
@property (copy,nonatomic) NSDate * modificationTime; 
@property (copy,nonatomic) NSString * originatingAddressString; 
@property (assign,nonatomic) long long positionIndex; 
@property (copy,nonatomic) NSString * shortcutIdentifier; 
@property (assign,nonatomic) short source; 
@property (assign,nonatomic) short type; 
@property (assign,nonatomic) short version; 
@property (retain,nonatomic) NSNumber * muid; 
@property (retain,nonatomic) NSNumber * longitude; 
@property (retain,nonatomic) NSNumber * latitude; 
@property (retain,nonatomic) NSSet * contactHandles; 
@property (retain,nonatomic) MapsSyncManagedMixinMapItem * mapItem; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

