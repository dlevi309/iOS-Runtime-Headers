/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)save;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)_save;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)invalidateDiskCaches;
-(void)invalidateMemoryCaches;
-(void)invalidateCacheForLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setPlacemarks:(id)arg1 forLocationCoordinate:(CLLocationCoordinate2D)arg2 ;
-(id)placemarksForLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)placemarksForLocationCoordinate:(CLLocationCoordinate2D)arg1 andAccuracy:(double)arg2 ;
-(void)_didEnterBackgroundNotification;
-(void)_willTerminateNotification;
-(id)initWithDiskCacheFilepath:(id)arg1 ;
-(id)placemarksForLocationCoordinate:(CLLocationCoordinate2D)arg1 andAccuracy:(double)arg2 closestResultDistance:(double*)arg3 numberOfResults:(unsigned long long*)arg4 ;
@end

