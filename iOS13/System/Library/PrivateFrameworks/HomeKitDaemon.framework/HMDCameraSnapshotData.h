/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSData, HMFOSTransaction, HMDVideoResolution;

@interface HMDCameraSnapshotData : HMFObject {

	NSData* _snapshotData;
	HMFOSTransaction* _snapshotDataTrasaction;
	HMDVideoResolution* _videoResolution;

}

@property (nonatomic,readonly) NSData * snapshotData;                                  //@synthesize snapshotData=_snapshotData - In the implementation block
@property (nonatomic,readonly) HMFOSTransaction * snapshotDataTrasaction;              //@synthesize snapshotDataTrasaction=_snapshotDataTrasaction - In the implementation block
@property (nonatomic,readonly) HMDVideoResolution * videoResolution;                   //@synthesize videoResolution=_videoResolution - In the implementation block
-(void)dealloc;
-(HMDVideoResolution *)videoResolution;
-(NSData *)snapshotData;
-(HMFOSTransaction *)snapshotDataTrasaction;
-(id)initWithSnapshotData:(id)arg1 videoResolution:(id)arg2 snapshotDataTrasaction:(id)arg3 ;
-(id)initWithSnapshotFile:(id)arg1 videoResolution:(id)arg2 ;
@end

