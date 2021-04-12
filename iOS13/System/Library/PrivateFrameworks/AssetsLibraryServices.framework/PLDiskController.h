/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLDiskController : NSObject {

	double _lastFSCheck;
	long long _bytesRequiredForPhoto;
	struct {
		unsigned needToCheckDiskSpace : 1;
		unsigned probablyLowOnDiskSpace : 1;
		unsigned isAssetsd : 1;
		unsigned extra : 28;
	}  _flags;

}
+(id)sharedInstance;
+(long long)diskSpaceAvailableForPath:(id)arg1 ;
+(BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)arg1 ;
+(long long)fileSystemSizeForPath:(id)arg1 ;
+(id)mountPointForPath:(id)arg1 ;
+(long long)freeDiskSpaceThreshold;
+(long long)diskSpaceAvailableForUse;
-(id)init;
-(void)dealloc;
-(void)updateAvailableDiskSpace;
-(void)_diskSpaceDidBecomeLow;
-(void)_actuallyUpdateCookie;
-(void)_updateCookie;
-(BOOL)hasEnoughDiskToTakePicture;
-(long long)bytesToAutomaticallyClear;
@end

