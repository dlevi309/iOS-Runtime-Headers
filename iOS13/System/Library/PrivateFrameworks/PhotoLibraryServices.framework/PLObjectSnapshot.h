/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLManagedObject, NSKnownKeysDictionary;

@interface PLObjectSnapshot : NSObject {

	PLManagedObject* _managedObject;
	NSKnownKeysDictionary* _snapshotValues;
	CFDictionaryRef _indexMaps;

}

@property (nonatomic,readonly) PLManagedObject * managedObject;              //@synthesize managedObject=_managedObject - In the implementation block
+(id)snapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 useCommitedValues:(BOOL)arg3 ;
+(CFDictionaryRef)_createIndexMapsSnapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setAssetsSnapshot:(id)arg1 ;
-(PLManagedObject *)managedObject;
-(BOOL)hasSnapshotValueForProperty:(id)arg1 ;
-(id)initWithManagedObject:(id)arg1 properties:(id)arg2 toOneRelationships:(id)arg3 indexMaps:(CFDictionaryRef)arg4 useCommitedValues:(BOOL)arg5 ;
-(id)snapshotValueForProperty:(id)arg1 ;
-(id)indexMapStateForDerivedObject:(id)arg1 ;
-(id)filteredIndexesForFilter:(id)arg1 ;
-(id)_snapshotValueForProperty:(id)arg1 ;
-(id)_allSnapshotValuesDescription;
@end

