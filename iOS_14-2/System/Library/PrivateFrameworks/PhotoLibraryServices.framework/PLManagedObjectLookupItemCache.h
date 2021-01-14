/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)invalidateWithReason:(id)arg1 ;
-(id)createObjectIfNecessaryForKey:(id)arg1 withManagedObjectContext:(id)arg2 createBlock:(/*^block*/id)arg3 ;
-(void)setObjectID:(id)arg1 forKey:(id)arg2 ;
-(id)initWithPathManager:(id)arg1 ;
-(id)objectIDForKey:(id)arg1 ;
@end

