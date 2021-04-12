/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, HMDCameraSignificantEventFaceClassificationResolver, NSMutableArray;

@interface HMDCameraRecordingSessionSignificantEventManager : HMFObject <HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _logIdentifier;
	HMDCameraSignificantEventFaceClassificationResolver* _faceClassificationResolver;
	NSMutableArray* _significantEvents;
	/*^block*/id _significantEventUUIDFactory;
	/*^block*/id _faceClassificationUUIDFactory;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                        //@synthesize workQueue=_workQueue - In the implementation block
@property (copy,readonly) NSString * logIdentifier;                                                                 //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) HMDCameraSignificantEventFaceClassificationResolver * faceClassificationResolver;              //@synthesize faceClassificationResolver=_faceClassificationResolver - In the implementation block
@property (readonly) NSMutableArray * significantEvents;                                                            //@synthesize significantEvents=_significantEvents - In the implementation block
@property (copy) id significantEventUUIDFactory;                                                                    //@synthesize significantEventUUIDFactory=_significantEventUUIDFactory - In the implementation block
@property (copy) id faceClassificationUUIDFactory;                                                                  //@synthesize faceClassificationUUIDFactory=_faceClassificationUUIDFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)logIdentifier;
-(void)resetState;
-(NSMutableArray *)significantEvents;
-(id)_significantEventsForFrameResult:(id)arg1 dateOfOccurrence:(id)arg2 timeOffsetWithinClip:(double)arg3 recordingEventTriggers:(unsigned long long)arg4 ;
-(id)_significantEventsForEmptyAnalyzerResult:(id)arg1 dateOfOccurrence:(id)arg2 timeOffsetWithinClip:(double)arg3 ;
-(id)_significantEventsForAnalyzerEvent:(id)arg1 dateOfOccurrence:(id)arg2 heroFrameData:(id)arg3 timeOffsetWithinClip:(double)arg4 recordingEventTriggers:(unsigned long long)arg5 ;
-(id)_filteredAndUpdatedSignificantEventsFromSignificantEvents:(id)arg1 ;
-(id)_faceRecognitionSignificantEventsForAnalyzerEvent:(id)arg1 dateOfOccurrence:(id)arg2 heroFrameData:(id)arg3 timeOffsetWithinClip:(double)arg4 confidenceLevel:(unsigned long long)arg5 ;
-(id)significantEventUUIDFactory;
-(HMDCameraSignificantEventFaceClassificationResolver *)faceClassificationResolver;
-(id)_filteredFaceClassificationsFromFaceClassifications:(id)arg1 ;
-(id)faceClassificationUUIDFactory;
-(id)initWithWorkQueue:(id)arg1 faceClassificationResolver:(id)arg2 logIdentifier:(id)arg3 ;
-(BOOL)isAnyEventInAnalyzerResult:(id)arg1 includedInRecordingEventTriggers:(unsigned long long)arg2 ;
-(id)significantEventsForAnalyzerResult:(id)arg1 dateOfOccurrence:(id)arg2 timeOffsetWithinClip:(double)arg3 recordingEventTriggers:(unsigned long long)arg4 ;
-(void)setSignificantEventUUIDFactory:(id)arg1 ;
-(void)setFaceClassificationUUIDFactory:(id)arg1 ;
@end

