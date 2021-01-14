/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(CFDictionaryRef)_createIndexMapsSnapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 ;
+(id)snapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 useCommitedValues:(BOOL)arg3 ;
-(id)init;
-(void)setAssetsSnapshot:(id)arg1 ;
-(id)description;
-(id)snapshotValueForProperty:(id)arg1 ;
-(id)indexMapStateForDerivedObject:(id)arg1 ;
-(id)initWithManagedObject:(id)arg1 properties:(id)arg2 toOneRelationships:(id)arg3 indexMaps:(CFDictionaryRef)arg4 useCommitedValues:(BOOL)arg5 ;
-(id)filteredIndexesForFilter:(id)arg1 ;
-(id)_snapshotValueForProperty:(id)arg1 ;
-(id)_allSnapshotValuesDescription;
-(PLManagedObject *)managedObject;
-(BOOL)hasSnapshotValueForProperty:(id)arg1 ;
-(void)dealloc;
@end

