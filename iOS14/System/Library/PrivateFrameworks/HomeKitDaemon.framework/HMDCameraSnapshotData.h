/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSData, HMFOSTransaction, HMDVideoResolution;

@interface HMDCameraSnapshotData : HMFObject {

	NSData* _snapshotData;
	HMFOSTransaction* _snapshotDataTrasaction;
	HMDVideoResolution* _videoResolution;

}

@property (readonly) NSData * snapshotData;                                  //@synthesize snapshotData=_snapshotData - In the implementation block
@property (readonly) HMFOSTransaction * snapshotDataTrasaction;              //@synthesize snapshotDataTrasaction=_snapshotDataTrasaction - In the implementation block
@property (readonly) HMDVideoResolution * videoResolution;                   //@synthesize videoResolution=_videoResolution - In the implementation block
-(HMDVideoResolution *)videoResolution;
-(void)dealloc;
-(HMFOSTransaction *)snapshotDataTrasaction;
-(id)initWithSnapshotData:(id)arg1 videoResolution:(id)arg2 snapshotDataTrasaction:(id)arg3 ;
-(NSData *)snapshotData;
-(id)initWithSnapshotFile:(id)arg1 videoResolution:(id)arg2 ;
@end

