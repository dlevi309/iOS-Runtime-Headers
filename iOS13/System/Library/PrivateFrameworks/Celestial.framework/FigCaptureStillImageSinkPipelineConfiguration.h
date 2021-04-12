/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/FigCaptureBaseStillImageSinkPipelineConfiguration.h>

@class NSNumber, NSDictionary;

@interface FigCaptureStillImageSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration {

	NSNumber* _clientPID;
	NSDictionary* _stillImageColorInfoForFramesOriginatingFromVideoStream;
	BOOL _stillImageISPChromaNoiseReductionEnabled;
	BOOL _stereoFusionSupported;
	BOOL _isIrisSupported;
	BOOL _hdrSupported;

}

@property (nonatomic,retain) NSNumber * clientPID;                                                               //@synthesize clientPID=_clientPID - In the implementation block
@property (nonatomic,retain) NSDictionary * stillImageColorInfoForFramesOriginatingFromVideoStream;              //@synthesize stillImageColorInfoForFramesOriginatingFromVideoStream=_stillImageColorInfoForFramesOriginatingFromVideoStream - In the implementation block
@property (assign,nonatomic) BOOL stillImageISPChromaNoiseReductionEnabled;                                      //@synthesize stillImageISPChromaNoiseReductionEnabled=_stillImageISPChromaNoiseReductionEnabled - In the implementation block
@property (assign,nonatomic) BOOL stereoFusionSupported;                                                         //@synthesize stereoFusionSupported=_stereoFusionSupported - In the implementation block
@property (assign,nonatomic) BOOL isIrisSupported;                                                               //@synthesize isIrisSupported=_isIrisSupported - In the implementation block
@property (assign,nonatomic) BOOL hdrSupported;                                                                  //@synthesize hdrSupported=_hdrSupported - In the implementation block
-(void)dealloc;
-(BOOL)isIrisSupported;
-(NSNumber *)clientPID;
-(void)setClientPID:(NSNumber *)arg1 ;
-(void)setStillImageISPChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setStereoFusionSupported:(BOOL)arg1 ;
-(void)setIsIrisSupported:(BOOL)arg1 ;
-(void)setHdrSupported:(BOOL)arg1 ;
-(void)setStillImageColorInfoForFramesOriginatingFromVideoStream:(NSDictionary *)arg1 ;
-(NSDictionary *)stillImageColorInfoForFramesOriginatingFromVideoStream;
-(BOOL)stillImageISPChromaNoiseReductionEnabled;
-(BOOL)stereoFusionSupported;
-(BOOL)hdrSupported;
@end

