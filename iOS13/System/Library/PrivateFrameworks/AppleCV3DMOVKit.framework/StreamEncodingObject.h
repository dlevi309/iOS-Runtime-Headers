/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/


@class NSDictionary;

@interface StreamEncodingObject : NSObject {

	BOOL _lossless;
	BOOL _forceH264;
	float _bitrate;
	float _expectedFPS;
	NSDictionary* _extraConfigs;

}

@property (assign) BOOL lossless;                                      //@synthesize lossless=_lossless - In the implementation block
@property (assign) float bitrate;                                      //@synthesize bitrate=_bitrate - In the implementation block
@property (assign) BOOL forceH264;                                     //@synthesize forceH264=_forceH264 - In the implementation block
@property (assign) float expectedFPS;                                  //@synthesize expectedFPS=_expectedFPS - In the implementation block
@property (nonatomic,retain) NSDictionary * extraConfigs;              //@synthesize extraConfigs=_extraConfigs - In the implementation block
-(id)init;
-(float)bitrate;
-(void)setBitrate:(float)arg1 ;
-(void)setLossless:(BOOL)arg1 ;
-(void)setForceH264:(BOOL)arg1 ;
-(void)setExpectedFPS:(float)arg1 ;
-(void)setExtraConfigs:(NSDictionary *)arg1 ;
-(id)initWithLossless:(BOOL)arg1 bitrate:(float)arg2 forceH264:(BOOL)arg3 expectedFPS:(float)arg4 extraConfigs:(id)arg5 ;
-(BOOL)lossless;
-(BOOL)forceH264;
-(float)expectedFPS;
-(NSDictionary *)extraConfigs;
@end

