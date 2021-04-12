/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

@class NSURL, NSString, NSSet, NSArray;


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
@property (nonatomic,readonly) NSSet * recordedResultClasses; 
@property (nonatomic,readonly) NSArray * recordedResultClassList; 
@property (nonatomic,readonly) BOOL isReplayingManually; 
@property (getter=isSynchronousMode,nonatomic,readonly) BOOL synchronousMode; 
@property (nonatomic,readonly) BOOL finishedReplaying; 
@property (readonly) long long nextFrameIndex; 
@property (assign) float advanceFramesPerSecondMultiplier; 
@property (nonatomic,copy) NSSet * customDataClasses; 
@property (nonatomic,readonly) BOOL interrupted; 
@required
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)stop;
-(void)start;
-(void)interrupt;
-(BOOL)interrupted;
-(NSString *)osVersion;
-(NSString *)deviceModel;
-(double)nominalFrameRate;
-(void)endInterruption;
-(long long)replayMode;
-(CGSize)imageResolution;
-(id)initWithDataFromFile:(id)arg1;
-(id)initWithSequenceURL:(id)arg1 replayMode:(long long)arg2;
-(id)initWithSequenceURL:(id)arg1 manualReplay:(BOOL)arg2;
-(id)initWithSequenceURL:(id)arg1 manualReplay:(BOOL)arg2 synchronousMode:(BOOL)arg3;
-(void)advanceFrame;
-(void)advanceToFrameIndex:(long long)arg1;
-(id)replayTechniqueForResultDataClasses:(id)arg1;
-(id)customDataForTimestamp:(double)arg1;
-(id<ARReplaySensorDelegate>)replaySensorDelegate;
-(void)setReplaySensorDelegate:(id)arg1;
-(NSURL *)sequenceURL;
-(NSString *)arkitVersion;
-(unsigned long long)recordedSensorTypes;
-(NSSet *)recordedResultClasses;
-(NSArray *)recordedResultClassList;
-(BOOL)isReplayingManually;
-(BOOL)isSynchronousMode;
-(BOOL)finishedReplaying;
-(long long)nextFrameIndex;
-(float)advanceFramesPerSecondMultiplier;
-(void)setAdvanceFramesPerSecondMultiplier:(float)arg1;
-(NSSet *)customDataClasses;
-(void)setCustomDataClasses:(id)arg1;

@end

