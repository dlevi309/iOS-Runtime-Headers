/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableSet, NSMutableDictionary;

@interface HDDemoDataBaseSampleGeneratorObjectCollection : NSObject {

	NSMutableSet* _objectsFromPhone;
	NSMutableSet* _objectsFromWatch;
	NSMutableDictionary* _objectsFromPhoneApps;
	NSMutableDictionary* _workoutUUIDToAssocatedObjectUUIDs;

}
-(id)init;
-(void)addObjectFromPhone:(id)arg1 ;
-(void)addObjectsFromPhone:(id)arg1 ;
-(void)addObjectFromWatch:(id)arg1 ;
-(void)addObjects:(id)arg1 fromPhoneAppWithBundleIdentifier:(id)arg2 ;
-(void)addObjectsFromWatch:(id)arg1 ;
-(id)objectsFromPhone;
-(id)objectsFromWatch;
-(id)objectsFromPhoneApps;
-(void)setAssociatedObjectUUIDs:(id)arg1 forWorkoutUUID:(id)arg2 ;
-(void)enumerateWorkoutAssociations:(/*^block*/id)arg1 ;
@end

