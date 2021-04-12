/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraRecordingUploaderDelegate, HMDCameraRecordingUploaderFactory, OS_dispatch_queue;
@class NSData, NSUUID, HMBLocalZone, HMCameraClipEncryptionManager, NSObject, NSMutableArray, NSString;

@interface HMDCameraRecordingUploader : HMFObject <HMFLogging> {

	unsigned long long _activeUploadOperationCount;
	NSData* _videoInitData;
	double _targetFragmentDuration;
	id<HMDCameraRecordingUploaderDelegate> _delegate;
	NSUUID* _clipModelID;
	HMBLocalZone* _localZone;
	id<HMDCameraRecordingUploaderFactory> _factory;
	HMCameraClipEncryptionManager* _encryptionManager;
	NSObject*<OS_dispatch_queue> _workQueue;
	double _frameTimeOffset;
	NSMutableArray* _operations;
	double _totalClipDuration;

}

@property (copy) NSData * videoInitData;                                           //@synthesize videoInitData=_videoInitData - In the implementation block
@property (readonly) HMBLocalZone * localZone;                                     //@synthesize localZone=_localZone - In the implementation block
@property (retain) NSUUID * clipModelID;                                           //@synthesize clipModelID=_clipModelID - In the implementation block
@property (readonly) id<HMDCameraRecordingUploaderFactory> factory;                //@synthesize factory=_factory - In the implementation block
@property (retain) HMCameraClipEncryptionManager * encryptionManager;              //@synthesize encryptionManager=_encryptionManager - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (assign) double frameTimeOffset;                                         //@synthesize frameTimeOffset=_frameTimeOffset - In the implementation block
@property (readonly) NSMutableArray * operations;                                  //@synthesize operations=_operations - In the implementation block
@property (assign) double totalClipDuration;                                       //@synthesize totalClipDuration=_totalClipDuration - In the implementation block
@property (readonly) unsigned long long activeUploadOperationCount;                //@synthesize activeUploadOperationCount=_activeUploadOperationCount - In the implementation block
@property (assign) double targetFragmentDuration;                                  //@synthesize targetFragmentDuration=_targetFragmentDuration - In the implementation block
@property (__weak) id<HMDCameraRecordingUploaderDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDCameraRecordingUploaderDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraRecordingUploaderDelegate>)arg1 ;
-(NSMutableArray *)operations;
-(id)finish;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<HMDCameraRecordingUploaderFactory>)factory;
-(id)_finish;
-(double)targetFragmentDuration;
-(HMBLocalZone *)localZone;
-(NSUUID *)clipModelID;
-(HMCameraClipEncryptionManager *)encryptionManager;
-(void)setEncryptionManager:(HMCameraClipEncryptionManager *)arg1 ;
-(void)setTotalClipDuration:(double)arg1 ;
-(void)setClipModelID:(NSUUID *)arg1 ;
-(id)initWithLocalZone:(id)arg1 workQueue:(id)arg2 videoInitData:(id)arg3 targetFragmentDuration:(double)arg4 ;
-(double)totalClipDuration;
-(void)setTargetFragmentDuration:(double)arg1 ;
-(id)addVideoInitData:(id)arg1 ;
-(id)addVideoSegmentData:(id)arg1 startDate:(id)arg2 duration:(double)arg3 ;
-(id)addNotificationWithReason:(unsigned long long)arg1 confidenceLevel:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 heroFrameData:(id)arg4 offset:(double)arg5 homePresenceByPairingIdentity:(id)arg6 ;
-(id)addPosterFrameData:(id)arg1 offset:(double)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(NSData *)videoInitData;
-(id)initWithLocalZone:(id)arg1 workQueue:(id)arg2 videoInitData:(id)arg3 targetFragmentDuration:(double)arg4 factory:(id)arg5 ;
-(void)setVideoInitData:(NSData *)arg1 ;
-(id)_addOperation:(id)arg1 finalizeClipOnError:(BOOL)arg2 ;
-(void)_createClipModel:(id)arg1 ;
-(void)setFrameTimeOffset:(double)arg1 ;
-(double)frameTimeOffset;
-(void)_operationCompleted:(id)arg1 finalizeOnError:(BOOL)arg2 promise:(id)arg3 ;
-(void)_startNextOperationWithLastOperationWasFinalized:(BOOL)arg1 ;
-(BOOL)errorIsCancelled:(id)arg1 ;
-(void)_cancelOperationsForCurrentClip;
-(id)errorForCancel;
-(unsigned long long)activeUploadOperationCount;
@end

