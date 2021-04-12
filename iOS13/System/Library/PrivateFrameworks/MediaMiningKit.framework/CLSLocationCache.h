/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)cachedCoordinate:(CLLocationCoordinate2D)arg1 isMatchingOtherCoordinate:(CLLocationCoordinate2D)arg2 ;
+(BOOL)cachedCoordinate:(CLLocationCoordinate2D)arg1 isMatchingOtherCoordinate:(CLLocationCoordinate2D)arg2 withAccuracy:(double)arg3 ;
-(id)initWithDiskCacheName:(id)arg1 ;
-(void)invalidateCacheForLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)dataModelName;
-(id)predicateForCoordinate:(CLLocationCoordinate2D)arg1 withAccuracy:(double)arg2 ;
-(id)nearestEntryForCoordinate:(CLLocationCoordinate2D)arg1 entries:(id)arg2 ;
-(BOOL)hasCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)hasCoordinate:(CLLocationCoordinate2D)arg1 withAccuracy:(double)arg2 ;
-(void)setPlacemarks:(id)arg1 forLocation:(id)arg2 ;
-(void)insertBatchesOfPlacemarks:(id)arg1 forLocationCoordinates:(id)arg2 ;
-(void)setPlacemarks:(id)arg1 forLocationCoordinate:(CLLocationCoordinate2D)arg2 ;
-(id)placemarksForLocationCoordinate:(CLLocationCoordinate2D)arg1 withAccuracy:(double)arg2 ;
-(id)placemarksForLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setPlacemarks:(id)arg1 forLocationAddress:(id)arg2 ;
-(id)placemarksForLocationAddress:(id)arg1 ;
-(void)setPlacemarks:(id)arg1 forAddressDictionary:(id)arg2 ;
-(id)placemarksForAddressDictionary:(id)arg1 ;
-(void)setPlacemarks:(id)arg1 forPostalAddress:(id)arg2 ;
-(id)placemarksForPostalAddress:(id)arg1 ;
-(id)placemarksForLocation:(id)arg1 ;
-(id)placemarksForLocation:(id)arg1 withAccuracy:(double)arg2 ;
-(id)_stringifyAddressDictionaryValues:(id)arg1 ;
-(id)_stringifyCircularRegionValue:(id)arg1 ;
-(id)_stringifyPostalAddress:(id)arg1 ;
-(void)setPlacemark:(id)arg1 forMUID:(unsigned long long)arg2 ;
-(id)placemarkForMUID:(unsigned long long)arg1 ;
-(void)invalidateCacheForMUID:(unsigned long long)arg1 ;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1 ;
-(id)fetchPlacemarkForLocation:(id)arg1 withAccuracy:(double)arg2 ;
-(void)_setPlacemarks:(id)arg1 forEntryWithPredicate:(id)arg2 entrySetupBlock:(/*^block*/id)arg3 ;
-(id)_litePlacemarksFromManagedPlacemarks:(id)arg1 ;
-(id)_insertManagedPlacemarksForLitePlacemarks:(id)arg1 inContext:(id)arg2 ;
-(id)_insertManagedPlacemarkForLitePlacemark:(id)arg1 inContext:(id)arg2 ;
-(id)_litePlacemarkFromManagedPlacemark:(id)arg1 ;
-(void)invalidateCacheForGeoServiceProviderChangeToProvider:(id)arg1 ;
@end

