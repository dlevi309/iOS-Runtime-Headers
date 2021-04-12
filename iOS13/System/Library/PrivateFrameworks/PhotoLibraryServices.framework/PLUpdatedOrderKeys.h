/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)getAndClearUpdatedOrderKeys;
-(BOOL)isObservingOrderKeys;
-(BOOL)registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1 ;
-(BOOL)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1 ;
-(id)_persistentStoresForContext:(id)arg1 ;
-(void)persistentStoreDidUpdateOrderKeys:(id)arg1 ;
@end

