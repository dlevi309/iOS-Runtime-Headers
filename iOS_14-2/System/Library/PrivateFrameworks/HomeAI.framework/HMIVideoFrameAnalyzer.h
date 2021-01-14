/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoProcessingNode.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIVideoFrameAnalyzerDelegate;
@class MovingAverage, NSUUID, NSString;

@interface HMIVideoFrameAnalyzer : HMIVideoProcessingNode <HMFLogging> {

	MovingAverage* _analysisTime;
	BOOL _recognizeFaces;
	id<HMIVideoFrameAnalyzerDelegate> _delegate;
	NSUUID* _sessionIdentifier;
	NSUUID* _homeUUID;

}

@property (__weak) id<HMIVideoFrameAnalyzerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) double averageAnalysisTime; 
@property (readonly) NSUUID * sessionIdentifier;                            //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign) BOOL recognizeFaces;                                     //@synthesize recognizeFaces=_recognizeFaces - In the implementation block
@property (retain) NSUUID * homeUUID;                                       //@synthesize homeUUID=_homeUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)homeUUID;
-(id)init;
-(id<HMIVideoFrameAnalyzerDelegate>)delegate;
-(NSUUID *)sessionIdentifier;
-(void)setDelegate:(id<HMIVideoFrameAnalyzerDelegate>)arg1 ;
-(void)setHomeUUID:(NSUUID *)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(double)averageAnalysisTime;
-(BOOL)recognizeFaces;
-(BOOL)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 motionDetections:(id)arg2 ;
-(void)setRecognizeFaces:(BOOL)arg1 ;
@end

