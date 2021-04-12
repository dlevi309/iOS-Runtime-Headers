/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@class AnalyticsStoreMOContext;

@interface AnalyticsStoreMOHandler : NSObject {

	AnalyticsStoreMOContext* _storeMOContext;

}

@property (nonatomic,retain) AnalyticsStoreMOContext * storeMOContext;              //@synthesize storeMOContext=_storeMOContext - In the implementation block
-(id)managedObjectContext;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)fetchRequestForEntity:(id)arg1 ;
-(id)entity:(id)arg1 withPredicate:(id)arg2 created:(BOOL*)arg3 ;
-(id)bssManagedObject:(id)arg1 ssid:(id)arg2 ;
-(id)fetchRoamCache:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)networkManagedObject:(id)arg1 ;
-(id)analyticsStoreEntitiesWithDate;
-(unsigned long long)roamsCount:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)analyticsStoreEntityNames;
-(id)fetchRequestForEntityWithOffset:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(BOOL)setBssManagedObjectPropertyValueForKey:(id)arg1 forKey:(id)arg2 withValue:(id)arg3 ;
-(void)setStoreMOContext:(AnalyticsStoreMOContext *)arg1 ;
-(BOOL)setNetworkManagedObjectPropertyValueForKey:(id)arg1 forKey:(id)arg2 withValue:(id)arg3 ;
-(id)mostRecentJoinMO:(id)arg1 ssid:(id)arg2 ;
-(id)fetchRoamObjects:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)networkManagedObject:(id)arg1 created:(BOOL*)arg2 ;
-(id)allSsidsForBssid:(id)arg1 ;
-(id)analyticsStoreEntityRelationshipNames;
-(id)leaveManagedObject;
-(BOOL)batchDelete:(id)arg1 withPredicate:(id)arg2 withFetchRequest:(id)arg3 ;
-(id)fetchRoamProperties:(id)arg1 fetchLimit:(unsigned long long)arg2 properties:(id)arg3 ;
-(id)fetchPropertiesForEntity:(id)arg1 properties:(id)arg2 predicate:(id)arg3 ;
-(void)performPruneBasedOnStoreSize;
-(id)predicateForEntityWithAge:(id)arg1 maxAge:(unsigned long long)arg2 ;
-(id)entityByCounting:(id)arg1 withPredicate:(id)arg2 created:(BOOL*)arg3 ;
-(id)getDeploymentUuidForBssids:(id)arg1 ;
-(id)bssManagedObject:(id)arg1 ssid:(id)arg2 created:(BOOL*)arg3 ;
-(AnalyticsStoreMOContext *)storeMOContext;
-(BOOL)removeNetwork:(id)arg1 ;
-(id)fetchAll:(id)arg1 ;
-(id)geotagManagedObject;
-(id)fetchPropertiesForEntityWithLimitAndSortDescriptor:(id)arg1 properties:(id)arg2 predicate:(id)arg3 fetchLimit:(unsigned long long)arg4 sortDescriptor:(id)arg5 returnDistinct:(BOOL)arg6 ;
-(id)predicateForEntityWithAgeOlderThan:(id)arg1 dateAttribute:(id)arg2 olderThan:(double)arg3 ;
-(void)performBlockOnManagedObjectContext:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)updateManagedObjectContextWithoutSave;
-(id)roamManagedObject;
-(id)bssManagedObjectPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(void)pruneManagedObjects;
-(id)createEntity:(id)arg1 ;
-(id)joinManagedObject;
-(id)allBssidsForSsid:(id)arg1 ;
-(unsigned long long)entityCount:(id)arg1 withPredicate:(id)arg2 ;
-(BOOL)coalesceBssidsIntoDeployment:(id)arg1 ;
-(void)saveManagedObjectContext;
-(id)networkManagedObjectPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(id)fetch:(id)arg1 withPredicate:(id)arg2 ;
-(BOOL)batchUpdate:(id)arg1 withPredicate:(id)arg2 propertiesToUpdate:(id)arg3 ;
-(void)ageOutManagedObjectsOlderThan:(double)arg1 ;
-(id)earliestJoinDate:(id)arg1 ;
@end

