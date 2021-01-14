/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/FigCaptureBaseStillImageSinkPipelineConfiguration.h>

@class NSNumber, NSDictionary;

@interface FigCaptureStillImageSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration {

	NSNumber* _clientPID;
	NSDictionary* _stillImageColorInfoForFramesOriginatingFromVideoStream;
	BOOL _stillImageISPChromaNoiseReductionEnabled;
	BOOL _stereoFusionSupported;
	BOOL _isIrisSupported;
	BOOL _hdrSupported;
	BOOL _gnrHDRSupported;

}

@property (nonatomic,retain) NSNumber * clientPID;                                                               //@synthesize clientPID=_clientPID - In the implementation block
@property (nonatomic,retain) NSDictionary * stillImageColorInfoForFramesOriginatingFromVideoStream;              //@synthesize stillImageColorInfoForFramesOriginatingFromVideoStream=_stillImageColorInfoForFramesOriginatingFromVideoStream - In the implementation block
@property (assign,nonatomic) BOOL stillImageISPChromaNoiseReductionEnabled;                                      //@synthesize stillImageISPChromaNoiseReductionEnabled=_stillImageISPChromaNoiseReductionEnabled - In the implementation block
@property (assign,nonatomic) BOOL stereoFusionSupported;                                                         //@synthesize stereoFusionSupported=_stereoFusionSupported - In the implementation block
@property (assign,nonatomic) BOOL isIrisSupported;                                                               //@synthesize isIrisSupported=_isIrisSupported - In the implementation block
@property (assign,nonatomic) BOOL hdrSupported;                                                                  //@synthesize hdrSupported=_hdrSupported - In the implementation block
@property (assign,nonatomic) BOOL gnrHDRSupported;                                                               //@synthesize gnrHDRSupported=_gnrHDRSupported - In the implementation block
-(void)setClientPID:(NSNumber *)arg1 ;
-(BOOL)isIrisSupported;
-(NSNumber *)clientPID;
-(void)setStillImageISPChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(BOOL)stereoFusionSupported;
-(BOOL)stillImageISPChromaNoiseReductionEnabled;
-(NSDictionary *)stillImageColorInfoForFramesOriginatingFromVideoStream;
-(BOOL)hdrSupported;
-(void)setGnrHDRSupported:(BOOL)arg1 ;
-(void)setIsIrisSupported:(BOOL)arg1 ;
-(BOOL)gnrHDRSupported;
-(void)setHdrSupported:(BOOL)arg1 ;
-(void)setStereoFusionSupported:(BOOL)arg1 ;
-(void)dealloc;
-(void)setStillImageColorInfoForFramesOriginatingFromVideoStream:(NSDictionary *)arg1 ;
@end

