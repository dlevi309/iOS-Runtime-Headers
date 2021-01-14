/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraGetSnapshotProtocol;
@class HMDCameraSnapshotSessionID, HMDSnapshotCompletionTimer, NSMutableArray, HMDCameraSnapshotMetrics, NSString;

@interface HMDSnapshotSession : HMFObject <HMFLogging> {

	HMDCameraSnapshotSessionID* _sessionID;
	id<HMDCameraGetSnapshotProtocol> _snapshotGetter;
	HMDSnapshotCompletionTimer* _snapshotCompletionTimer;
	NSMutableArray* _sessionMessages;
	unsigned long long _streamingTierType;
	HMDCameraSnapshotMetrics* _snapshotMetrics;

}

@property (nonatomic,readonly) HMDCameraSnapshotMetrics * snapshotMetrics;                      //@synthesize snapshotMetrics=_snapshotMetrics - In the implementation block
@property (nonatomic,readonly) HMDCameraSnapshotSessionID * sessionID;                          //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) id<HMDCameraGetSnapshotProtocol> snapshotGetter;                 //@synthesize snapshotGetter=_snapshotGetter - In the implementation block
@property (nonatomic,retain) HMDSnapshotCompletionTimer * snapshotCompletionTimer;              //@synthesize snapshotCompletionTimer=_snapshotCompletionTimer - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sessionMessages;                                //@synthesize sessionMessages=_sessionMessages - In the implementation block
@property (nonatomic,readonly) unsigned long long streamingTierType;                            //@synthesize streamingTierType=_streamingTierType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDCameraSnapshotSessionID *)sessionID;
-(id)logIdentifier;
-(NSString *)description;
-(void)dealloc;
-(unsigned long long)streamingTierType;
-(id)initWithSessionID:(id)arg1 accessory:(id)arg2 snapshotGetter:(id)arg3 message:(id)arg4 waitPeriod:(double)arg5 streamingTierType:(unsigned long long)arg6 cameraLocallyReachable:(BOOL)arg7 snapshotForNotification:(BOOL)arg8 ;
-(NSMutableArray *)sessionMessages;
-(void)respond:(id)arg1 payload:(id)arg2 ;
-(id<HMDCameraGetSnapshotProtocol>)snapshotGetter;
-(HMDSnapshotCompletionTimer *)snapshotCompletionTimer;
-(HMDCameraSnapshotMetrics *)snapshotMetrics;
-(void)setSnapshotCompletionTimer:(HMDSnapshotCompletionTimer *)arg1 ;
@end

