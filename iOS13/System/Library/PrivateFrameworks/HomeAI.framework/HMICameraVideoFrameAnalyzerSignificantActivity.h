/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMICameraVideoFrameAnalyzer.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFUnfairLock, NSOperationQueue, NSMapTable, HMISignificantActivityDetector, HMFOSTransaction, NSString;

@interface HMICameraVideoFrameAnalyzerSignificantActivity : HMFObject <HMICameraVideoFrameAnalyzer, HMFLogging> {

	HMFUnfairLock* _lock;
	NSOperationQueue* _regionOfInterestOperationQueue;
	NSMapTable* _regionOfInterestOperations;
	HMISignificantActivityDetector* _significantActivityDetector;
	HMFOSTransaction* _transaction;

}

@property (nonatomic,readonly) HMFUnfairLock * lock;                                            //@synthesize lock=_lock - In the implementation block
@property (readonly) NSOperationQueue * regionOfInterestOperationQueue;                         //@synthesize regionOfInterestOperationQueue=_regionOfInterestOperationQueue - In the implementation block
@property (readonly) NSMapTable * regionOfInterestOperations;                                   //@synthesize regionOfInterestOperations=_regionOfInterestOperations - In the implementation block
@property (readonly) HMISignificantActivityDetector * significantActivityDetector;              //@synthesize significantActivityDetector=_significantActivityDetector - In the implementation block
@property (nonatomic,retain) HMFOSTransaction * transaction;                                    //@synthesize transaction=_transaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)classHierarchyMap;
-(HMFUnfairLock *)lock;
-(HMFOSTransaction *)transaction;
-(void)setTransaction:(HMFOSTransaction *)arg1 ;
-(id)initWithConfidenceThresholds:(id)arg1 nmsThreshold:(double)arg2 error:(id*)arg3 ;
-(void)preAnalyze:(id)arg1 ;
-(id)analyze:(id)arg1 targetEventTypes:(long long)arg2 error:(id*)arg3 ;
-(double)_confidenceScoreOverrideForEventType:(long long)arg1 ;
-(HMISignificantActivityDetector *)significantActivityDetector;
-(NSMapTable *)regionOfInterestOperations;
-(NSOperationQueue *)regionOfInterestOperationQueue;
-(long long)rankForClassLabel:(long long)arg1 ;
-(void)_addSimulatedDetectionForEventType:(long long)arg1 targetEventTypes:(long long)arg2 events:(long long*)arg3 annotationScores:(id)arg4 detections:(id)arg5 ;
@end

