/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/


@class NWSSnapshotSource;

@interface NWSSnapshotter : NSObject {

	unsigned long long _kernelSourceRef;
	NWSSnapshotSource* _snapshotSource;

}

@property (assign) unsigned long long kernelSourceRef;              //@synthesize kernelSourceRef=_kernelSourceRef - In the implementation block
@property (retain) NWSSnapshotSource * snapshotSource;              //@synthesize snapshotSource=_snapshotSource - In the implementation block
-(id)snapshot;
-(unsigned long long)kernelSourceRef;
-(void)setKernelSourceRef:(unsigned long long)arg1 ;
-(NWSSnapshotSource *)snapshotSource;
-(void)setSnapshotSource:(NWSSnapshotSource *)arg1 ;
@end

