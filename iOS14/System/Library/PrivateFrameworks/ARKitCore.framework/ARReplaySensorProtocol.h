/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

@class NSURL, NSString, NSSet;


@protocol ARReplaySensorProtocol <ARSensor>
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate; 
@property (__weak) id<ARReplaySensorDelegate> replaySensorDelegate; 
@property (nonatomic,readonly) long long replayMode; 
@property (nonatomic,readonly) NSURL * sequenceURL; 
@property (nonatomic,readonly) NSString * deviceModel; 
@property (nonatomic,readonly) NSString * osVersion; 
@property (nonatomic,readonly) NSString * arkitVersion; 
@property (nonatomic,readonly) CGSize imageResolution; 
@property (nonatomic,readonly) double nominalFrameRate; 
@property (nonatomic,readonly) unsigned long long recordedSensorTypes; 
@property (nonatomic,readonly) BOOL isReplayingManually; 
@property (getter=isSynchronousMode,nonatomic,readonly) BOOL synchronousMode; 
@property (nonatomic,readonly) BOOL finishedReplaying; 
@property (readonly) long long nextFrameIndex; 
@property (assign) float advanceFramesPerSecondMultiplier; 
@property (nonatomic,copy) NSSet * customDataClasses; 
@property (nonatomic,readonly) BOOL interrupted; 
@required
-(NSString *)deviceModel;
-(double)nominalFrameRate;
-(void)interrupt;
-(id<ARSensorDelegate>)delegate;
-(void)start;
-(NSString *)osVersion;
-(void)stop;
-(void)setDelegate:(id)arg1;
-(BOOL)interrupted;
-(long long)replayMode;
-(void)endInterruption;
-(long long)nextFrameIndex;
-(CGSize)imageResolution;
-(NSString *)arkitVersion;
-(unsigned long long)recordedSensorTypes;
-(id)initWithDataFromFile:(id)arg1;
-(id)initWithSequenceURL:(id)arg1 replayMode:(long long)arg2;
-(id)initWithSequenceURL:(id)arg1 manualReplay:(BOOL)arg2;
-(id)initWithSequenceURL:(id)arg1 manualReplay:(BOOL)arg2 synchronousMode:(BOOL)arg3;
-(void)advanceFrame;
-(void)advanceToFrameIndex:(long long)arg1;
-(id)customDataForTimestamp:(double)arg1;
-(id<ARReplaySensorDelegate>)replaySensorDelegate;
-(void)setReplaySensorDelegate:(id)arg1;
-(NSURL *)sequenceURL;
-(BOOL)isReplayingManually;
-(BOOL)isSynchronousMode;
-(BOOL)finishedReplaying;
-(float)advanceFramesPerSecondMultiplier;
-(void)setAdvanceFramesPerSecondMultiplier:(float)arg1;
-(NSSet *)customDataClasses;
-(void)setCustomDataClasses:(id)arg1;

@end

