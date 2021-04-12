/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

@class NSURL, NSSet;


@protocol ARRecordingTechniqueProtocol <NSObject>
@property (nonatomic,readonly) NSURL * outputFileURL; 
@property (assign,nonatomic) BOOL expectDepthData; 
@property (assign,nonatomic) BOOL expectAudioData; 
@property (assign,nonatomic) BOOL expectCustomData; 
@property (assign,nonatomic) BOOL shouldSaveVideoInPhotosLibrary; 
@property (__weak) id<ARRecordingTechniqueDelegate> recordingTechniqueDelegate; 
@property (nonatomic,readonly) unsigned long long recordingSensorDataTypes; 
@property (nonatomic,readonly) NSSet * recordingResultDataClasses; 
@required
+(id)metadataIdentifierForARRecordableResultsClass:(Class)arg1;
-(NSURL *)outputFileURL;
-(void)startRecording;
-(unsigned long long)recordingSensorDataTypes;
-(NSSet *)recordingResultDataClasses;
-(id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3;
-(id)initWithFileURL:(id)arg1 sensorDataTypes:(unsigned long long)arg2;
-(id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3 startImmediately:(BOOL)arg4 recordCollaborationData:(BOOL)arg5;
-(void)finishRecording;
-(id<ARRecordingTechniqueDelegate>)recordingTechniqueDelegate;
-(BOOL)expectAudioData;
-(void)recordCustomData:(id)arg1 forTimestamp:(double)arg2;
-(void)recordCollaborationData:(id)arg1 localSession:(BOOL)arg2;
-(void)recordAddedAnchor:(id)arg1;
-(void)recordRemovedAnchor:(id)arg1;
-(void)abortRecording;
-(BOOL)expectDepthData;
-(void)setExpectDepthData:(BOOL)arg1;
-(void)setExpectAudioData:(BOOL)arg1;
-(BOOL)expectCustomData;
-(void)setExpectCustomData:(BOOL)arg1;
-(BOOL)shouldSaveVideoInPhotosLibrary;
-(void)setShouldSaveVideoInPhotosLibrary:(BOOL)arg1;
-(void)setRecordingTechniqueDelegate:(id)arg1;

@end

