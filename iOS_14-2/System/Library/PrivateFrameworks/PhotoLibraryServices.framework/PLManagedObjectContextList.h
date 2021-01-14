/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSHashTable;

@interface PLManagedObjectContextList : NSObject {

	os_unfair_lock_s _lock;
	NSHashTable* _contexts;

}
-(id)init;
-(id)allContextsNotIdenticalTo:(id)arg1 ;
-(id)allContexts;
-(void)addContext:(id)arg1 ;
@end

