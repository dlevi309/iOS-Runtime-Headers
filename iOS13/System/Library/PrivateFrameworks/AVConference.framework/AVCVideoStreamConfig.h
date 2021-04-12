/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSString;

@interface AVCVideoStreamConfig : NSObject {

	long long _txCodecType;
	long long _rxCodecType;
	long long _videoResolution;
	unsigned long long _framerate;
	unsigned long long _txMaxBitrate;
	unsigned long long _txMinBitrate;
	unsigned long long _rxMaxBitrate;
	unsigned long long _rxMinBitrate;
	NSString* _txCodecFeatureListString;
	NSString* _rxCodecFeatureListString;
	unsigned long long _keyFrameInterval;
	int _remoteVideoInitialOrientation;
	BOOL _enableCVO;
	unsigned long long _cvoExtensionID;
	BOOL _isVideoProtected;
	long long _videoStreamMode;
	long long _captureSource;
	unsigned long long _screenDisplayID;
	unsigned long long _customWidth;
	unsigned long long _customHeight;
	unsigned long long _tilesPerFrame;

}

@property (assign,nonatomic) long long txCodecType;                            //@synthesize txCodecType=_txCodecType - In the implementation block
@property (assign,nonatomic) long long rxCodecType;                            //@synthesize rxCodecType=_rxCodecType - In the implementation block
@property (assign,nonatomic) long long videoResolution;                        //@synthesize videoResolution=_videoResolution - In the implementation block
@property (assign,nonatomic) unsigned long long framerate;                     //@synthesize framerate=_framerate - In the implementation block
@property (assign,nonatomic) unsigned long long txMaxBitrate;                  //@synthesize txMaxBitrate=_txMaxBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long txMinBitrate;                  //@synthesize txMinBitrate=_txMinBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long rxMaxBitrate;                  //@synthesize rxMaxBitrate=_rxMaxBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long rxMinBitrate;                  //@synthesize rxMinBitrate=_rxMinBitrate - In the implementation block
@property (nonatomic,retain) NSString * rxCodecFeatureListString;              //@synthesize rxCodecFeatureListString=_rxCodecFeatureListString - In the implementation block
@property (nonatomic,retain) NSString * txCodecFeatureListString;              //@synthesize txCodecFeatureListString=_txCodecFeatureListString - In the implementation block
@property (assign,nonatomic) unsigned long long keyFrameInterval;              //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (assign,nonatomic) int remoteVideoInitialOrientation;                //@synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation - In the implementation block
@property (assign,nonatomic) BOOL enableCVO;                                   //@synthesize enableCVO=_enableCVO - In the implementation block
@property (assign,nonatomic) unsigned long long cvoExtensionID;                //@synthesize cvoExtensionID=_cvoExtensionID - In the implementation block
@property (assign,nonatomic) BOOL isVideoProtected;                            //@synthesize isVideoProtected=_isVideoProtected - In the implementation block
@property (assign,nonatomic) long long videoStreamMode;                        //@synthesize videoStreamMode=_videoStreamMode - In the implementation block
@property (assign,nonatomic) long long captureSource;                          //@synthesize captureSource=_captureSource - In the implementation block
@property (assign,nonatomic) unsigned long long screenDisplayID;               //@synthesize screenDisplayID=_screenDisplayID - In the implementation block
@property (assign,nonatomic) unsigned long long customWidth;                   //@synthesize customWidth=_customWidth - In the implementation block
@property (assign,nonatomic) unsigned long long customHeight;                  //@synthesize customHeight=_customHeight - In the implementation block
@property (assign,nonatomic) unsigned long long tilesPerFrame;                 //@synthesize tilesPerFrame=_tilesPerFrame - In the implementation block
+(long long)clientCodecTypeWithCodecType:(long long)arg1 ;
+(long long)codecTypeWithClientCodecType:(long long)arg1 ;
+(long long)clientVideoResolutionFromResolution:(long long)arg1 ;
+(long long)clientVideoStreamModeFromVideoStreamType:(long long)arg1 ;
+(long long)clientVideoCaptureSourceFromCaptureSource:(int)arg1 ;
+(long long)videoResolutionFromClientResolution:(long long)arg1 ;
+(long long)videoStreamTypeFromClientVideoStreamMode:(long long)arg1 ;
+(int)videoCaptureSourceFromClientCaptureSource:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(id)dictionary;
-(long long)captureSource;
-(long long)videoResolution;
-(unsigned long long)framerate;
-(void)setFramerate:(unsigned long long)arg1 ;
-(unsigned long long)keyFrameInterval;
-(void)setKeyFrameInterval:(unsigned long long)arg1 ;
-(unsigned long long)txMaxBitrate;
-(unsigned long long)txMinBitrate;
-(unsigned long long)customWidth;
-(unsigned long long)customHeight;
-(BOOL)enableCVO;
-(unsigned long long)cvoExtensionID;
-(unsigned long long)tilesPerFrame;
-(void)setVideoResolution:(long long)arg1 ;
-(void)setRemoteVideoInitialOrientation:(int)arg1 ;
-(void)setRxMinBitrate:(unsigned long long)arg1 ;
-(void)setRxMaxBitrate:(unsigned long long)arg1 ;
-(void)setTxMinBitrate:(unsigned long long)arg1 ;
-(void)setTxMaxBitrate:(unsigned long long)arg1 ;
-(void)setTilesPerFrame:(unsigned long long)arg1 ;
-(unsigned long long)rxMinBitrate;
-(unsigned long long)rxMaxBitrate;
-(void)setCvoExtensionID:(unsigned long long)arg1 ;
-(void)setEnableCVO:(BOOL)arg1 ;
-(void)setCustomWidth:(unsigned long long)arg1 ;
-(void)setCustomHeight:(unsigned long long)arg1 ;
-(NSString *)txCodecFeatureListString;
-(void)setTxCodecFeatureListString:(NSString *)arg1 ;
-(NSString *)rxCodecFeatureListString;
-(void)setRxCodecFeatureListString:(NSString *)arg1 ;
-(int)remoteVideoInitialOrientation;
-(BOOL)isVideoProtected;
-(void)setIsVideoProtected:(BOOL)arg1 ;
-(void)setCaptureSource:(long long)arg1 ;
-(unsigned long long)screenDisplayID;
-(void)setScreenDisplayID:(unsigned long long)arg1 ;
-(void)setVideoStreamMode:(long long)arg1 ;
-(void)setTxCodecType:(long long)arg1 ;
-(void)setRxCodecType:(long long)arg1 ;
-(void)setUpWithDictionary:(id)arg1 ;
-(long long)txCodecType;
-(long long)rxCodecType;
-(long long)videoStreamMode;
@end

