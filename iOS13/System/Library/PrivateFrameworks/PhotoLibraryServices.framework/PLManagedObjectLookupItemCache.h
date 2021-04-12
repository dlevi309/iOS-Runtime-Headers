/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableDictionary, PLManagedObjectContext, PLPhotoLibraryPathManager;

@interface PLManagedObjectLookupItemCache : NSObject {

	NSMutableDictionary* _objectIDsByKey;
	PLManagedObjectContext* _creationContext;
	PLPhotoLibraryPathManager* _pathManager;
	os_unfair_lock_s _cacheLock;

}
-(id)initWithPathManager:(id)arg1 ;
-(void)invalidateWithReason:(id)arg1 ;
-(void)setObjectID:(id)arg1 forKey:(id)arg2 ;
-(id)objectIDForKey:(id)arg1 ;
-(id)createObjectIfNecessaryForKey:(id)arg1 withManagedObjectContext:(id)arg2 createBlock:(/*^block*/id)arg3 ;
@end

