/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSDBCache.h>

@class NSPredicate;

@interface CLSLocationCache : CLSDBCache {

	NSPredicate* _entryPredicateWithContactsPostalAddressTemplate;
	NSPredicate* _entryPredicateWithAddressBookDictionaryTemplate;
	NSPredicate* _entryPredicateWithCoordinateTemplate;
	NSPredicate* _entryPredicateWithAddressTemplate;
	NSPredicate* _entryPredicateWithMUID;

}
+(id)defaultCacheName;
+(BOOL)cachedRegion:(id)arg1 isMatchingOtherRegion:(id)arg2 ;
-(void)setPlacemarks:(id)arg1 forCLLocation:(id)arg2 ;
-(id)nearestEntryForCoordinate:(CLLocationCoordinate2D)arg1 entries:(id)arg2 ;
-(id)_stringifyCircularRegionValue:(id)arg1 ;
-(id)fetchPlacemarkForLocation:(id)arg1 withQueryAccuracy:(double)arg2 ;
-(BOOL)hasRegion:(id)arg1 ;
-(id)_litePlacemarksFromManagedPlacemarks:(id)arg1 ;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1 ;
-(void)_setPlacemarks:(id)arg1 forEntryWithPredicate:(id)arg2 entrySetupBlock:(/*^block*/id)arg3 ;
-(id)dataModelName;
-(id)_insertManagedPlacemarkForLitePlacemark:(id)arg1 inContext:(id)arg2 ;
-(id)_insertManagedPlacemarksForLitePlacemarks:(id)arg1 inContext:(id)arg2 ;
-(id)placemarksForPostalAddress:(id)arg1 ;
-(id)_litePlacemarkFromManagedPlacemark:(id)arg1 ;
-(void)invalidateCacheForMUID:(unsigned long long)arg1 ;
-(void)setPlacemarks:(id)arg1 forPostalAddress:(id)arg2 ;
-(void)invalidateCacheForLocationCoordinate:(CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2 ;
-(void)setPlacemarks:(id)arg1 forLocation:(id)arg2 ;
-(void)setPlacemark:(id)arg1 forMUID:(unsigned long long)arg2 ;
-(BOOL)hasCoordinate:(CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2 ;
-(id)initWithDiskCacheName:(id)arg1 ;
-(id)_stringifyAddressDictionaryValues:(id)arg1 ;
-(void)invalidateCacheForGeoServiceProviderChangeToProvider:(id)arg1 ;
-(void)setPlacemarks:(id)arg1 forAddressDictionary:(id)arg2 ;
-(id)placemarksForLocationCoordinate:(CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2 queryAccuracy:(double)arg3 ;
-(id)placemarksForLocationAddress:(id)arg1 ;
-(void)insertBatchesOfPlacemarks:(id)arg1 forLocations:(id)arg2 ;
-(void)setPlacemarks:(id)arg1 forLocationAddress:(id)arg2 ;
-(id)predicateForCoordinate:(CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2 queryAccuracy:(double)arg3 ;
-(void)setPlacemarks:(id)arg1 forLocationCoordinate:(CLLocationCoordinate2D)arg2 withHorizontalAccuracy:(double)arg3 ;
-(id)placemarksForAddressDictionary:(id)arg1 ;
-(id)placemarkForMUID:(unsigned long long)arg1 ;
-(id)predicateForCoordinate:(CLLocationCoordinate2D)arg1 withHorizontalAccuracy:(double)arg2 ;
-(id)placemarksForLocation:(id)arg1 withQueryAccuracy:(double)arg2 ;
-(id)_stringifyPostalAddress:(id)arg1 ;
-(id)placemarksForLocation:(id)arg1 ;
@end

