/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@class NSString, NSSet, GEOMapItemStorage, NSNumber;

@interface MapsSync.MapsSyncFavoriteItem : MapsSync.MapsSyncBaseItem {

	 _contactHandles;
	 _customName;
	 _hidden;
	 _mapItemStorage;
	 _originatingAddressString;
	 _type;
	 _source;
	 _shortcutIdentifier;
	 _version;
	 _latitude;
	 _longitude;
	 _muid;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSSet * contactHandles; 
@property (readonly,nonatomic) NSString * customName; 
@property (readonly,nonatomic) BOOL hidden; 
@property (readonly,nonatomic) GEOMapItemStorage * mapItemStorage; 
@property (readonly,nonatomic) NSString * originatingAddressString; 
@property (readonly,nonatomic) short type; 
@property (readonly,nonatomic) short source; 
@property (readonly,nonatomic) NSString * shortcutIdentifier; 
@property (readonly,nonatomic) short version; 
@property (readonly,nonatomic) NSNumber * latitude; 
@property (readonly,nonatomic) NSNumber * longitude; 
@property (readonly,nonatomic) NSNumber * muid; 
+(void)fetchNearbyPlacesWithLatitude:(double)arg1 longitude:(double)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
+(id)fetchFavoriteItemForIdentifier:(id)arg1 ;
+(id)fetchFavoriteItemForShortcutIdentifier:(id)arg1 ;
-(NSNumber *)latitude;
-(id)initWithObject:(id)arg1 ;
-(BOOL)hidden;
-(Class)managedObjectClass;
-(NSNumber *)longitude;
-(Class)mutableObjectClass;
-(NSString *)description;
-(NSString *)customName;
-(NSSet *)contactHandles;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(short)type;
-(NSNumber *)muid;
-(GEOMapItemStorage *)mapItemStorage;
-(short)version;
-(void)setPropertiesWithObject:(id)arg1 ;
-(NSString *)originatingAddressString;
-(NSString *)shortcutIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(short)source;
@end

