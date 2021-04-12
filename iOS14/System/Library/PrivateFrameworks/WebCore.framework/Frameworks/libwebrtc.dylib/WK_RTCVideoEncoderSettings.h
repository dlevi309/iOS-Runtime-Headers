/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/


#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
@class NSString;

@interface WK_RTCVideoEncoderSettings : NSObject {

	unsigned short _width;
	unsigned short _height;
	unsigned _startBitrate;
	unsigned _maxBitrate;
	unsigned _minBitrate;
	unsigned _maxFramerate;
	unsigned _qpMax;
	NSString* _name;
	unsigned long long _mode;

}

@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned short width;                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned short height;                //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned startBitrate;                //@synthesize startBitrate=_startBitrate - In the implementation block
@property (assign,nonatomic) unsigned maxBitrate;                  //@synthesize maxBitrate=_maxBitrate - In the implementation block
@property (assign,nonatomic) unsigned minBitrate;                  //@synthesize minBitrate=_minBitrate - In the implementation block
@property (assign,nonatomic) unsigned maxFramerate;                //@synthesize maxFramerate=_maxFramerate - In the implementation block
@property (assign,nonatomic) unsigned qpMax;                       //@synthesize qpMax=_qpMax - In the implementation block
@property (assign,nonatomic) unsigned long long mode;              //@synthesize mode=_mode - In the implementation block
-(void)setHeight:(unsigned short)arg1 ;
-(unsigned long long)mode;
-(unsigned short)width;
-(void)setMaxBitrate:(unsigned)arg1 ;
-(void)setWidth:(unsigned short)arg1 ;
-(unsigned short)height;
-(unsigned)qpMax;
-(void)setMode:(unsigned long long)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned)maxBitrate;
-(unsigned)maxFramerate;
-(void)setMaxFramerate:(unsigned)arg1 ;
-(unsigned)minBitrate;
-(id)initWithNativeVideoCodec:(const VideoCodec*)arg1 ;
-(unsigned)startBitrate;
-(void)setStartBitrate:(unsigned)arg1 ;
-(void)setMinBitrate:(unsigned)arg1 ;
-(void)setQpMax:(unsigned)arg1 ;
-(VideoCodec)nativeVideoCodec;
@end

