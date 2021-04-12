/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLPhotoLibraryPathManager, NSDate;

@interface PLAssetsdCrashRecoverySupport : NSObject {

	PLPhotoLibraryPathManager* _pathManager;
	os_unfair_lock_s _recoveryIndicatorCheckLock;
	NSDate* _recoveryJobCreationDate;

}
-(id)initWithPathManager:(id)arg1 ;
-(BOOL)isSafeToRecoverAfterCrash;
-(void)recoverFromCrashIfNeededWithImageWriter:(id)arg1 ;
-(void)_enqeueRecoveryJob:(id)arg1 date:(id)arg2 toImageWriter:(id)arg3 ;
@end

