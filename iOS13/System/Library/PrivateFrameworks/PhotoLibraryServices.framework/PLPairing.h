/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)processPairingForGroupIDs:(id)arg1 inContext:(id)arg2 duplicateDetection:(BOOL)arg3 error:(id*)arg4 ;
@end

