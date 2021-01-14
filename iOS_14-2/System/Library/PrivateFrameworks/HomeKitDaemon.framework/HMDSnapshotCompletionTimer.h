/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

