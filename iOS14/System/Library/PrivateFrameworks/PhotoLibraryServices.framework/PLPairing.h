/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSPredicate;

@interface PLPairing : NSObject {

	NSPredicate* _locatedInUsersPhotoLibrary;
	os_unfair_lock_s _lock;

}
+(id)getMetadataForAsset:(id)arg1 ;
-(id)init;
-(BOOL)processPairingForEntireLibraryInContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)processPairingForGroupIDs:(id)arg1 inContext:(id)arg2 deferredProcessingNeeded:(BOOL*)arg3 error:(id*)arg4 ;
@end

