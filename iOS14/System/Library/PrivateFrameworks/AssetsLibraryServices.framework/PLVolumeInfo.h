/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class NSString;

@interface PLVolumeInfo : NSObject {

	NSString* _mountPoint;
	unsigned long long _blockSize;
	unsigned long long _desiredDiskThreshold;
	unsigned long long _nearLowDiskThreshold;
	unsigned long long _lowDiskThreshold;
	unsigned long long _veryLowDiskThreshold;
	unsigned long long _volumeSize;

}

@property (nonatomic,readonly) unsigned long long volumeSize;                        //@synthesize volumeSize=_volumeSize - In the implementation block
@property (nonatomic,readonly) long long availableSpace; 
@property (nonatomic,readonly) unsigned long long desiredDiskThreshold; 
@property (nonatomic,readonly) unsigned long long nearLowDiskThreshold; 
@property (nonatomic,readonly) unsigned long long lowDiskThreshold; 
@property (nonatomic,readonly) unsigned long long veryLowDiskThreshold; 
-(id)initWithPath:(id)arg1 ;
-(unsigned long long)volumeSize;
-(unsigned long long)nearLowDiskThreshold;
-(unsigned long long)desiredDiskThreshold;
-(id)initWithMountPoint:(id)arg1 ;
-(unsigned long long)lowDiskThreshold;
-(unsigned long long)veryLowDiskThreshold;
-(long long)availableSpace;
@end

