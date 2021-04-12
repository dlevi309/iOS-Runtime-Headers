/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class FigCaptureSourceConfiguration, NSArray, BWZoomCommandHandler, NSNumber, NSData;

@interface FigCaptureMicSourcePipelineConfiguration : NSObject {

	FigCaptureSourceConfiguration* _micConfiguration;
	NSArray* _micConnectionConfigurations;
	FigCaptureSourceConfiguration* _cameraConfigurationForStereoAudioCapture;
	BWZoomCommandHandler* _zoomCommandHandlerForStereoAudioCapture;
	BOOL _configuresAppAudioSession;
	BOOL _audioSourceNodeShouldCallEndInterruption;
	NSNumber* _clientPID;
	unsigned _clientVersionOfLinkedSDK;
	NSData* _clientAuditToken;

}

@property (nonatomic,retain) FigCaptureSourceConfiguration * micConfiguration;                                      //@synthesize micConfiguration=_micConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * micConnectionConfigurations;                                                 //@synthesize micConnectionConfigurations=_micConnectionConfigurations - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * cameraConfigurationForStereoAudioCapture;              //@synthesize cameraConfigurationForStereoAudioCapture=_cameraConfigurationForStereoAudioCapture - In the implementation block
@property (nonatomic,retain) BWZoomCommandHandler * zoomCommandHandlerForStereoAudioCapture;                        //@synthesize zoomCommandHandlerForStereoAudioCapture=_zoomCommandHandlerForStereoAudioCapture - In the implementation block
@property (assign,nonatomic) BOOL configuresAppAudioSession;                                                        //@synthesize configuresAppAudioSession=_configuresAppAudioSession - In the implementation block
@property (assign,nonatomic) BOOL audioSourceNodeShouldCallEndInterruption;                                         //@synthesize audioSourceNodeShouldCallEndInterruption=_audioSourceNodeShouldCallEndInterruption - In the implementation block
@property (nonatomic,retain) NSNumber * clientPID;                                                                  //@synthesize clientPID=_clientPID - In the implementation block
@property (assign,nonatomic) unsigned clientVersionOfLinkedSDK;                                                     //@synthesize clientVersionOfLinkedSDK=_clientVersionOfLinkedSDK - In the implementation block
@property (nonatomic,retain) NSData * clientAuditToken;                                                             //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
-(void)dealloc;
-(void)setConfiguresAppAudioSession:(BOOL)arg1 ;
-(NSData *)clientAuditToken;
-(NSArray *)micConnectionConfigurations;
-(FigCaptureSourceConfiguration *)cameraConfigurationForStereoAudioCapture;
-(NSNumber *)clientPID;
-(void)setClientPID:(NSNumber *)arg1 ;
-(BOOL)configuresAppAudioSession;
-(void)setMicConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(void)setMicConnectionConfigurations:(NSArray *)arg1 ;
-(void)setCameraConfigurationForStereoAudioCapture:(FigCaptureSourceConfiguration *)arg1 ;
-(void)setZoomCommandHandlerForStereoAudioCapture:(BWZoomCommandHandler *)arg1 ;
-(void)setAudioSourceNodeShouldCallEndInterruption:(BOOL)arg1 ;
-(void)setClientVersionOfLinkedSDK:(unsigned)arg1 ;
-(void)setClientAuditToken:(NSData *)arg1 ;
-(id)micConnectionConfigurationsForMicSourcePosition:(int)arg1 ;
-(FigCaptureSourceConfiguration *)micConfiguration;
-(BWZoomCommandHandler *)zoomCommandHandlerForStereoAudioCapture;
-(BOOL)audioSourceNodeShouldCallEndInterruption;
-(unsigned)clientVersionOfLinkedSDK;
@end

