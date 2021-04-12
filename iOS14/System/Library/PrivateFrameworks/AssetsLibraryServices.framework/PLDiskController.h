/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(long long)freeDiskSpaceThreshold;
+(id)mountPointForPath:(id)arg1 ;
+(long long)diskSpaceAvailableForUse;
+(long long)fileSystemSizeForPath:(id)arg1 ;
+(long long)diskSpaceAvailableForPath:(id)arg1 ;
+(BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)arg1 ;
-(id)init;
-(void)_actuallyUpdateCookie;
-(long long)bytesToAutomaticallyClear;
-(void)_diskSpaceDidBecomeLow;
-(BOOL)hasEnoughDiskToTakePicture;
-(void)updateAvailableDiskSpace;
-(void)dealloc;
-(void)_updateCookie;
@end

