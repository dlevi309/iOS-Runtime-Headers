/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSSet, NSMutableDictionary;

@interface PLUpdatedOrderKeys : NSObject {

	os_unfair_lock_s _lock;
	BOOL _isObservingOrderKeys;
	NSSet* _observedRelationships;
	NSMutableDictionary* _updatedOrderKeyObjectIDs;

}

@property (readonly) BOOL isObservingOrderKeys; 
-(id)init;
-(void)persistentStoreDidUpdateOrderKeys:(id)arg1 ;
-(BOOL)registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1 ;
-(BOOL)isObservingOrderKeys;
-(BOOL)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1 ;
-(id)getAndClearUpdatedOrderKeys;
-(id)_persistentStoresForContext:(id)arg1 ;
@end

