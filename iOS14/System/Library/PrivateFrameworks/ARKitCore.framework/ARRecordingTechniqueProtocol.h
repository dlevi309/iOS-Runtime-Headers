/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

@class NSURL;


@protocol ARRecordingTechniqueProtocol <NSObject>
@property (nonatomic,readonly) NSURL * outputFileURL; 
@property (assign,nonatomic) BOOL expectDepthData; 
@property (assign,nonatomic) BOOL expectAudioData; 
@property (assign,nonatomic) BOOL expectCustomData; 
@property (assign,nonatomic) BOOL shouldSaveVideoInPhotosLibrary; 
@property (__weak) id<ARRecordingTechniqueDelegate> recordingTechniqueDelegate; 
@property (nonatomic,readonly) unsigned long long recordingSensorDataTypes; 
@required
+(id)metadataIdentifierForARRecordableResultsClass:(Class)arg1;
-(void)startRecording;
-(NSURL *)outputFileURL;
-(id)initWithFileURL:(id)arg1 sensorDataTypes:(unsigned long long)arg2;
-(id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2;
-(id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 startImmediately:(BOOL)arg3 recordCollaborationData:(BOOL)arg4;
-(id<ARRecordingTechniqueDelegate>)recordingTechniqueDelegate;
-(BOOL)expectAudioData;
-(void)recordCustomData:(id)arg1 forTimestamp:(double)arg2;
-(void)recordCollaborationData:(id)arg1 localSession:(BOOL)arg2;
-(void)recordAddedAnchor:(id)arg1;
-(void)recordRemovedAnchor:(id)arg1;
-(void)finishRecording;
-(void)abortRecording;
-(BOOL)expectDepthData;
-(void)setExpectDepthData:(BOOL)arg1;
-(void)setExpectAudioData:(BOOL)arg1;
-(BOOL)expectCustomData;
-(void)setExpectCustomData:(BOOL)arg1;
-(BOOL)shouldSaveVideoInPhotosLibrary;
-(void)setShouldSaveVideoInPhotosLibrary:(BOOL)arg1;
-(void)setRecordingTechniqueDelegate:(id)arg1;
-(unsigned long long)recordingSensorDataTypes;

@end

