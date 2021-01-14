/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@class NSManagedObjectContext, AnalyticsStoreDescriptor, AnalyticsPersistenceManager;

@interface AnalyticsStoreMOContext : NSObject {

	NSManagedObjectContext* _managedObjectContext;
	AnalyticsStoreDescriptor* _storeDescriptor;
	AnalyticsPersistenceManager* _persistenceManager;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                 //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) AnalyticsStoreDescriptor * storeDescriptor;                    //@synthesize storeDescriptor=_storeDescriptor - In the implementation block
@property (nonatomic,retain) AnalyticsPersistenceManager * persistenceManager;              //@synthesize persistenceManager=_persistenceManager - In the implementation block
-(NSManagedObjectContext *)managedObjectContext;
-(void)setPersistenceManager:(AnalyticsPersistenceManager *)arg1 ;
-(AnalyticsPersistenceManager *)persistenceManager;
-(void)setStoreDescriptor:(AnalyticsStoreDescriptor *)arg1 ;
-(BOOL)storeNeedsImmediatePruning:(unsigned long long)arg1 ;
-(AnalyticsStoreDescriptor *)storeDescriptor;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)initWithStoreDescriptor:(id)arg1 ;
@end

