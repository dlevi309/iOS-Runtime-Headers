/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraClipUploaderDelegate, OS_dispatch_queue, HMDCameraClipUploaderFactory;
@class NSUUID, NSDate, HMBLocalZone, NSObject, NSString, HMCameraClipEncryptionManager, NSMutableArray, NAFuture;

@interface HMDCameraClipUploader : HMFObject <HMFLogging> {

	NSUUID* _clipUUID;
	id<HMDCameraClipUploaderDelegate> _delegate;
	NSDate* _startDate;
	double _targetFragmentDuration;
	HMBLocalZone* _localZone;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _logIdentifier;
	HMCameraClipEncryptionManager* _encryptionManager;
	id<HMDCameraClipUploaderFactory> _factory;
	NSMutableArray* _operations;
	NAFuture* _didCreateClipFuture;

}

@property (copy,readonly) NSDate * startDate;                                        //@synthesize startDate=_startDate - In the implementation block
@property (readonly) double targetFragmentDuration;                                  //@synthesize targetFragmentDuration=_targetFragmentDuration - In the implementation block
@property (readonly) HMBLocalZone * localZone;                                       //@synthesize localZone=_localZone - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                         //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSString * logIdentifier;                                       //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) HMCameraClipEncryptionManager * encryptionManager;              //@synthesize encryptionManager=_encryptionManager - In the implementation block
@property (readonly) id<HMDCameraClipUploaderFactory> factory;                       //@synthesize factory=_factory - In the implementation block
@property (readonly) NSMutableArray * operations;                                    //@synthesize operations=_operations - In the implementation block
@property (retain) NAFuture * didCreateClipFuture;                                   //@synthesize didCreateClipFuture=_didCreateClipFuture - In the implementation block
@property (copy,readonly) NSUUID * clipUUID;                                         //@synthesize clipUUID=_clipUUID - In the implementation block
@property (__weak) id<HMDCameraClipUploaderDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)finish;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSMutableArray *)operations;
-(id<HMDCameraClipUploaderDelegate>)delegate;
-(NSDate *)startDate;
-(NSString *)logIdentifier;
-(id<HMDCameraClipUploaderFactory>)factory;
-(void)setDelegate:(id<HMDCameraClipUploaderDelegate>)arg1 ;
-(NSUUID *)clipUUID;
-(id)attributeDescriptions;
-(double)targetFragmentDuration;
-(HMBLocalZone *)localZone;
-(id)initWithClipUUID:(id)arg1 startDate:(id)arg2 targetFragmentDuration:(double)arg3 localZone:(id)arg4 workQueue:(id)arg5 logIdentifier:(id)arg6 ;
-(HMCameraClipEncryptionManager *)encryptionManager;
-(id)addNotificationForSignificantEvent:(id)arg1 homePresenceByPairingIdentity:(id)arg2 ;
-(id)addVideoInitData:(id)arg1 ;
-(id)addVideoSegmentData:(id)arg1 duration:(double)arg2 timeOffsetWithinClip:(double)arg3 clipFinalizedBecauseMaxDurationExceeded:(BOOL)arg4 ;
-(id)addPosterFrameData:(id)arg1 timeOffsetWithinClip:(double)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(id)initWithClipUUID:(id)arg1 startDate:(id)arg2 targetFragmentDuration:(double)arg3 localZone:(id)arg4 workQueue:(id)arg5 logIdentifier:(id)arg6 encryptionManager:(id)arg7 factory:(id)arg8 ;
-(NAFuture *)didCreateClipFuture;
-(id)_createClipWithSignificantEvent:(id)arg1 homePresenceByPairingIdentity:(id)arg2 ;
-(void)setDidCreateClipFuture:(NAFuture *)arg1 ;
-(BOOL)hasAddedCreateClipOperation;
-(id)_addOperation:(id)arg1 finalizeClipOnError:(BOOL)arg2 ;
-(void)_operationCompleted:(id)arg1 finalizeOnError:(BOOL)arg2 future:(id)arg3 ;
-(void)_startNextOperation;
-(BOOL)_isCancelledError:(id)arg1 ;
-(void)_handleFatalOperationFailure;
@end

