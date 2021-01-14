/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)recoverFromCrashIfNeededWithImageWriter:(id)arg1 ;
-(void)_enqeueRecoveryJob:(id)arg1 date:(id)arg2 toImageWriter:(id)arg3 ;
-(BOOL)isSafeToRecoverAfterCrash;
@end

