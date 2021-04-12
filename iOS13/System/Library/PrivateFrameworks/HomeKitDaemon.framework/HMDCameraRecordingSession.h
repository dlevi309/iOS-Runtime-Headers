/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMICameraVideoAnalyzerDelegate.h>
#import <libobjc.A.dylib/HMDCameraRecordingUploaderDelegate.h>

@protocol HMDCameraRecordingSessionDelegate, OS_dispatch_queue;
@class NSDictionary, HMDCameraRecordingSessionTimelineManager, NSUUID, HMFActivity, HMDCameraRecordingUploader, NSString, NSObject, HMDCameraProfile, HMICameraVideoAnalyzer, HMDCameraRecordingSessionFactory, NSNumber, NSMutableDictionary;

@interface HMDCameraRecordingSession : HMFObject <HMFLogging, HMICameraVideoAnalyzerDelegate, HMDCameraRecordingUploaderDelegate> {

	BOOL _noMoreFragmentsAvailable;
	BOOL _active;
	BOOL _didHandleFirstFragment;
	NSDictionary* _homePresenceByPairingIdentity;
	HMDCameraRecordingSessionTimelineManager* _timelineManager;
	unsigned long long _currentFragmentNumber;
	NSUUID* _identifier;
	id<HMDCameraRecordingSessionDelegate> _delegate;
	double _configuredFragmentDuration;
	HMFActivity* _sessionActivity;
	HMDCameraRecordingUploader* _recordingUploader;
	unsigned long long _pendingFragmentsCount;
	NSString* _fragmentDirectoryPath;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDCameraProfile* _camera;
	HMICameraVideoAnalyzer* _videoAnalyzer;
	HMDCameraRecordingSessionFactory* _factory;
	NSNumber* _remainingRecordingExtensionDuration;
	NSMutableDictionary* _confidenceLevelsByEventReason;
	double _cumulativeFragmentDuration;
	NSMutableDictionary* _analysisEventsBySequenceNumber;

}

@property (readonly) HMFActivity * sessionActivity;                                           //@synthesize sessionActivity=_sessionActivity - In the implementation block
@property (assign) BOOL noMoreFragmentsAvailable;                                             //@synthesize noMoreFragmentsAvailable=_noMoreFragmentsAvailable - In the implementation block
@property (getter=isActive) BOOL active;                                                      //@synthesize active=_active - In the implementation block
@property (retain) HMDCameraRecordingUploader * recordingUploader;                            //@synthesize recordingUploader=_recordingUploader - In the implementation block
@property (assign) unsigned long long currentFragmentNumber;                                  //@synthesize currentFragmentNumber=_currentFragmentNumber - In the implementation block
@property (assign) unsigned long long pendingFragmentsCount;                                  //@synthesize pendingFragmentsCount=_pendingFragmentsCount - In the implementation block
@property (copy) NSString * fragmentDirectoryPath;                                            //@synthesize fragmentDirectoryPath=_fragmentDirectoryPath - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) HMDCameraProfile * camera;                                                 //@synthesize camera=_camera - In the implementation block
@property (retain) HMICameraVideoAnalyzer * videoAnalyzer;                                    //@synthesize videoAnalyzer=_videoAnalyzer - In the implementation block
@property (assign) BOOL didHandleFirstFragment;                                               //@synthesize didHandleFirstFragment=_didHandleFirstFragment - In the implementation block
@property (readonly) HMDCameraRecordingSessionFactory * factory;                              //@synthesize factory=_factory - In the implementation block
@property (readonly) long long videoAnalyzerEventTypes; 
@property (retain) NSNumber * remainingRecordingExtensionDuration;                            //@synthesize remainingRecordingExtensionDuration=_remainingRecordingExtensionDuration - In the implementation block
@property (readonly) NSMutableDictionary * confidenceLevelsByEventReason;                     //@synthesize confidenceLevelsByEventReason=_confidenceLevelsByEventReason - In the implementation block
@property (assign) double cumulativeFragmentDuration;                                         //@synthesize cumulativeFragmentDuration=_cumulativeFragmentDuration - In the implementation block
@property (readonly) NSMutableDictionary * analysisEventsBySequenceNumber;                    //@synthesize analysisEventsBySequenceNumber=_analysisEventsBySequenceNumber - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (__weak) id<HMDCameraRecordingSessionDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) double configuredFragmentDuration;                                       //@synthesize configuredFragmentDuration=_configuredFragmentDuration - In the implementation block
@property (retain) NSDictionary * homePresenceByPairingIdentity;                              //@synthesize homePresenceByPairingIdentity=_homePresenceByPairingIdentity - In the implementation block
@property (readonly) HMDCameraRecordingSessionTimelineManager * timelineManager;              //@synthesize timelineManager=_timelineManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDCameraRecordingSessionDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraRecordingSessionDelegate>)arg1 ;
-(NSUUID *)identifier;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDCameraRecordingSessionFactory *)factory;
-(void)setCamera:(HMDCameraProfile *)arg1 ;
-(HMDCameraProfile *)camera;
-(id)logIdentifier;
-(HMFActivity *)sessionActivity;
-(HMDCameraRecordingSessionTimelineManager *)timelineManager;
-(NSDictionary *)homePresenceByPairingIdentity;
-(double)configuredFragmentDuration;
-(void)setHomePresenceByPairingIdentity:(NSDictionary *)arg1 ;
-(unsigned long long)currentFragmentNumber;
-(void)handleFragment:(id)arg1 ;
-(void)handleNoMoreFragmentsAvailable;
-(id)initWithWorkQueue:(id)arg1 camera:(id)arg2 configuredFragmentDuration:(double)arg3 timelineManager:(id)arg4 factory:(id)arg5 ;
-(BOOL)didHandleFirstFragment;
-(void)setDidHandleFirstFragment:(BOOL)arg1 ;
-(BOOL)_isValidFirstSessionFragment:(id)arg1 ;
-(void)setRecordingUploader:(HMDCameraRecordingUploader *)arg1 ;
-(HMDCameraRecordingUploader *)recordingUploader;
-(void)_writeFragment:(id)arg1 ;
-(BOOL)_isValidNonFirstSessionFragment:(id)arg1 ;
-(long long)videoAnalyzerEventTypes;
-(void)setCurrentFragmentNumber:(unsigned long long)arg1 ;
-(unsigned long long)pendingFragmentsCount;
-(void)setPendingFragmentsCount:(unsigned long long)arg1 ;
-(HMICameraVideoAnalyzer *)videoAnalyzer;
-(NSMutableDictionary *)analysisEventsBySequenceNumber;
-(void)setNoMoreFragmentsAvailable:(BOOL)arg1 ;
-(void)_endSessionWithError:(id)arg1 ;
-(void)_handleAnalyzedFragment:(id)arg1 withResult:(id)arg2 ;
-(BOOL)_shouldUploadFragmentWithAnalyzerResult:(id)arg1 sequenceNumber:(unsigned long long)arg2 ;
-(double)cumulativeFragmentDuration;
-(void)_addNotificationForReason:(unsigned long long)arg1 confidenceLevel:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 heroFrameData:(id)arg4 offset:(double)arg5 recordingEventTriggers:(unsigned long long)arg6 fragmentNumber:(unsigned long long)arg7 ;
-(void)setRemainingRecordingExtensionDuration:(NSNumber *)arg1 ;
-(NSNumber *)remainingRecordingExtensionDuration;
-(void)setCumulativeFragmentDuration:(double)arg1 ;
-(BOOL)_shouldEndSession;
-(void)_submitAnalysisEventForSequenceNumber:(long long)arg1 ;
-(void)_handleDidFindSignificantEvent:(id)arg1 inFragment:(id)arg2 ;
-(NSMutableDictionary *)confidenceLevelsByEventReason;
-(void)_submitNotificationSuccessMetricWithRecordingEventTriggers:(unsigned long long)arg1 fragmentNumber:(unsigned long long)arg2 ;
-(void)_handleDidFailAnalysisForFragment:(id)arg1 withError:(id)arg2 ;
-(BOOL)noMoreFragmentsAvailable;
-(NSString *)fragmentDirectoryPath;
-(void)setFragmentDirectoryPath:(NSString *)arg1 ;
-(void)analyzer:(id)arg1 didAnalyzeFragment:(id)arg2 withResult:(id)arg3 ;
-(void)analyzer:(id)arg1 didNotAnalyzeFragment:(id)arg2 withResult:(id)arg3 ;
-(void)analyzer:(id)arg1 didFindSignificantEvent:(id)arg2 inFragment:(id)arg3 ;
-(void)analyzer:(id)arg1 didFailAnalysisForFragment:(id)arg2 withError:(id)arg3 ;
-(void)recordingUploader:(id)arg1 willFinishClip:(id)arg2 ;
-(void)recordingUploader:(id)arg1 didStartClip:(id)arg2 ;
-(void)recordingUploader:(id)arg1 didFinishClip:(id)arg2 ;
-(void)recordingUploaderIsIdle:(id)arg1 ;
-(void)setVideoAnalyzer:(HMICameraVideoAnalyzer *)arg1 ;
@end

