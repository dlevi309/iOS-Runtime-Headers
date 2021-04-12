/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSHashTable;

@interface PLManagedObjectContextList : NSObject {

	os_unfair_lock_s _lock;
	NSHashTable* _contexts;

}
-(id)init;
-(id)allContexts;
-(void)addContext:(id)arg1 ;
-(id)allContextsNotIdenticalTo:(id)arg1 ;
@end

