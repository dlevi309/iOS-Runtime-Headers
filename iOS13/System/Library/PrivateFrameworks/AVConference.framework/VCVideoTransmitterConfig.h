/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class AVCStatisticsCollector, NSMutableDictionary, NSDictionary;

@interface VCVideoTransmitterConfig : NSObject {

	long long _videoResolution;
	int _videoSource;
	long long _codecType;
	opaqueRTCReportingRef _reportingAgent;
	int _reportingParentID;
	unsigned long long _framerate;
	unsigned long long _txMaxBitrate;
	unsigned long long _txMinBitrate;
	unsigned long long _keyFrameInterval;
	unsigned long long _recommendedMTU;
	unsigned long long _cvoExtensionID;
	BOOL _enableCVO;
	int _videoPayload;
	int _encodingMode;
	AC* _videoPriorityPointer;
	unsigned long long _customWidth;
	unsigned long long _customHeight;
	int _mode;
	AVCStatisticsCollector* _statisticsCollector;
	tagVCVideoTransmitterStreamConfig* _streamConfigs;
	int _streamCount;
	int _tilesPerFrame;
	BOOL _useRateControl;
	unsigned _pixelFormat;
	NSMutableDictionary* _customFeatureListStrings;

}

@property (assign,nonatomic) long long videoResolution;                                       //@synthesize videoResolution=_videoResolution - In the implementation block
@property (assign,nonatomic) int videoSource;                                                 //@synthesize videoSource=_videoSource - In the implementation block
@property (assign,nonatomic) long long codecType;                                             //@synthesize codecType=_codecType - In the implementation block
@property (assign,nonatomic) unsigned long long framerate;                                    //@synthesize framerate=_framerate - In the implementation block
@property (assign,nonatomic) unsigned long long txMaxBitrate;                                 //@synthesize txMaxBitrate=_txMaxBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long txMinBitrate;                                 //@synthesize txMinBitrate=_txMinBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long keyFrameInterval;                             //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (assign,nonatomic) BOOL enableCVO;                                                  //@synthesize enableCVO=_enableCVO - In the implementation block
@property (assign,nonatomic) unsigned long long cvoExtensionID;                               //@synthesize cvoExtensionID=_cvoExtensionID - In the implementation block
@property (assign,nonatomic) unsigned long long recommendedMTU;                               //@synthesize recommendedMTU=_recommendedMTU - In the implementation block
@property (assign,nonatomic) opaqueRTCReportingRef reportingAgent;                            //@synthesize reportingAgent=_reportingAgent - In the implementation block
@property (assign,nonatomic) int reportingParentID;                                           //@synthesize reportingParentID=_reportingParentID - In the implementation block
@property (assign,nonatomic) int videoPayload;                                                //@synthesize videoPayload=_videoPayload - In the implementation block
@property (assign,nonatomic) int encodingMode;                                                //@synthesize encodingMode=_encodingMode - In the implementation block
@property (assign,nonatomic) AC* videoPriorityPointer;                                        //@synthesize videoPriorityPointer=_videoPriorityPointer - In the implementation block
@property (assign,nonatomic) unsigned long long customWidth;                                  //@synthesize customWidth=_customWidth - In the implementation block
@property (assign,nonatomic) unsigned long long customHeight;                                 //@synthesize customHeight=_customHeight - In the implementation block
@property (assign,nonatomic) int mode;                                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) AVCStatisticsCollector * statisticsCollector;                    //@synthesize statisticsCollector=_statisticsCollector - In the implementation block
@property (nonatomic,readonly) tagVCVideoTransmitterStreamConfig* streamConfigs;              //@synthesize streamConfigs=_streamConfigs - In the implementation block
@property (assign,nonatomic) int streamCount;                                                 //@synthesize streamCount=_streamCount - In the implementation block
@property (assign,nonatomic) int tilesPerFrame;                                               //@synthesize tilesPerFrame=_tilesPerFrame - In the implementation block
@property (assign,nonatomic) BOOL useRateControl;                                             //@synthesize useRateControl=_useRateControl - In the implementation block
@property (assign,nonatomic) unsigned pixelFormat;                                            //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,readonly) NSDictionary * customFeatureListStrings;                       //@synthesize customFeatureListStrings=_customFeatureListStrings - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(unsigned)pixelFormat;
-(void)setPixelFormat:(unsigned)arg1 ;
-(long long)codecType;
-(void)setCodecType:(long long)arg1 ;
-(long long)videoResolution;
-(int)streamCount;
-(unsigned long long)framerate;
-(void)setFramerate:(unsigned long long)arg1 ;
-(unsigned long long)keyFrameInterval;
-(void)setKeyFrameInterval:(unsigned long long)arg1 ;
-(void)setStatisticsCollector:(AVCStatisticsCollector *)arg1 ;
-(opaqueRTCReportingRef)reportingAgent;
-(AVCStatisticsCollector *)statisticsCollector;
-(int)videoPayload;
-(int)videoSource;
-(unsigned long long)txMaxBitrate;
-(unsigned long long)txMinBitrate;
-(unsigned long long)customWidth;
-(unsigned long long)customHeight;
-(unsigned long long)recommendedMTU;
-(int)reportingParentID;
-(BOOL)enableCVO;
-(unsigned long long)cvoExtensionID;
-(tagVCVideoTransmitterStreamConfig*)streamConfigs;
-(int)tilesPerFrame;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(void)setUseRateControl:(BOOL)arg1 ;
-(void)setReportingParentID:(int)arg1 ;
-(void)setVideoResolution:(long long)arg1 ;
-(void)setTxMinBitrate:(unsigned long long)arg1 ;
-(void)setTxMaxBitrate:(unsigned long long)arg1 ;
-(void)setTilesPerFrame:(int)arg1 ;
-(void)setVideoPayload:(int)arg1 ;
-(BOOL)useRateControl;
-(NSDictionary *)customFeatureListStrings;
-(int)encodingMode;
-(AC*)videoPriorityPointer:(SEL)arg1 ;
-(void)setEncodingMode:(int)arg1 ;
-(void)setVideoPriorityPointer:(A*)arg1 :(unsigned char)arg2 ;
-(void)addCustomFeatureListString:(id)arg1 payload:(int)arg2 ;
-(void)setRecommendedMTU:(unsigned long long)arg1 ;
-(void)setCvoExtensionID:(unsigned long long)arg1 ;
-(void)setEnableCVO:(BOOL)arg1 ;
-(void)setVideoSource:(int)arg1 ;
-(void)setCustomWidth:(unsigned long long)arg1 ;
-(void)setCustomHeight:(unsigned long long)arg1 ;
-(void)setStreamCount:(int)arg1 ;
@end

