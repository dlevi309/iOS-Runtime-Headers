/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableSet, NSMutableDictionary;

@interface HDDemoDataBaseSampleGeneratorObjectCollection : NSObject {

	NSMutableSet* _objectsFromPhone;
	NSMutableSet* _objectsFromWatch;
	NSMutableDictionary* _objectsFromPhoneApps;
	NSMutableDictionary* _objectUUIDToAssocatedObjectUUIDs;

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
-(void)setAssociatedObjectUUIDs:(id)arg1 forObjectUUID:(id)arg2 ;
-(void)enumerateObjectAssociations:(/*^block*/id)arg1 ;
@end

