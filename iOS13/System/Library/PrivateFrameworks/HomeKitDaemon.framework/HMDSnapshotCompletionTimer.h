/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFTimer.h>

@class HMDSnapshotSession;

@interface HMDSnapshotCompletionTimer : HMFTimer {

	HMDSnapshotSession* _snapshotSession;

}

@property (nonatomic,__weak,readonly) HMDSnapshotSession * snapshotSession;              //@synthesize snapshotSession=_snapshotSession - In the implementation block
-(id)initWithSnapshotSession:(id)arg1 timer:(double)arg2 ;
-(HMDSnapshotSession *)snapshotSession;
@end

