/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <libobjc.A.dylib/SNResultsObserving.h>

@protocol AXHADetectorManagerDelegate;
@class SNAudioStreamAnalyzer, NSMutableDictionary, NSArray, NSString;

@interface AXHADetectorManager : NSObject <SNResultsObserving> {

	SNAudioStreamAnalyzer* _streamAnalyzer;
	NSMutableDictionary* _currentRequests;
	id<AXHADetectorManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXHADetectorManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * currentDetectors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initializeModelMap;
+(id)detectorRequestForDetectionType:(id)arg1 ;
+(id)modelPathForURL:(id)arg1 detectionType:(id)arg2 ;
+(void)setTestBundle:(id)arg1 ;
-(id)init;
-(id<AXHADetectorManagerDelegate>)delegate;
-(void)setDelegate:(id<AXHADetectorManagerDelegate>)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)request:(id)arg1 didProduceResult:(id)arg2 ;
-(void)requestDidComplete:(id)arg1 ;
-(NSArray *)currentDetectors;
-(BOOL)addDetector:(id)arg1 ;
-(BOOL)removeDetector:(id)arg1 ;
-(void)removeAllDetectors;
-(void)stopDetection;
-(BOOL)startDetectionWithFormat:(id)arg1 ;
-(void)processAudioBuffer:(id)arg1 atTime:(id)arg2 ;
-(BOOL)streamAnalyzerIsRunning;
-(BOOL)addAllDetectors;
-(BOOL)_testAudioFile:(id)arg1 ;
@end

