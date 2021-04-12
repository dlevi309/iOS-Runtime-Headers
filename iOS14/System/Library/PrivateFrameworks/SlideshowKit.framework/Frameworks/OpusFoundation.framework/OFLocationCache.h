/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSString, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSPredicate;

@interface OFLocationCache : NSObject {

	NSString* _diskCacheFilepath;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectContext* _parentManagedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSPredicate* _predicateEntryTemplate;
	NSPredicate* _predicateEntryWithLocalRegionTemplate;

}

@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
+(id)defaultCache;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)_save;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)init;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(BOOL)save;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)invalidateMemoryCaches;
-(NSManagedObjectModel *)managedObjectModel;
-(void)dealloc;
-(void)invalidateDiskCaches;
-(id)placemarksForLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)placemarksForLocationCoordinate:(CLLocationCoordinate2D)arg1 andAccuracy:(double)arg2 ;
-(void)setPlacemarks:(id)arg1 forLocationCoordinate:(CLLocationCoordinate2D)arg2 ;
-(void)_didEnterBackgroundNotification;
-(void)_willTerminateNotification;
-(id)initWithDiskCacheFilepath:(id)arg1 ;
-(id)placemarksForLocationCoordinate:(CLLocationCoordinate2D)arg1 andAccuracy:(double)arg2 closestResultDistance:(double*)arg3 numberOfResults:(unsigned long long*)arg4 ;
-(void)invalidateCacheForLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
@end

