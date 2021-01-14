/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/


#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
@class NSData, NSNumber;

@interface WK_RTCEncodedImage : NSObject {

	unsigned char _flags;
	BOOL _completeFrame;
	int _encodedWidth;
	int _encodedHeight;
	unsigned _timeStamp;
	NSData* _buffer;
	long long _captureTimeMs;
	long long _ntpTimeMs;
	long long _encodeStartMs;
	long long _encodeFinishMs;
	unsigned long long _frameType;
	long long _rotation;
	NSNumber* _qp;
	unsigned long long _contentType;

}

@property (nonatomic,retain) NSData * buffer;                             //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) int encodedWidth;                            //@synthesize encodedWidth=_encodedWidth - In the implementation block
@property (assign,nonatomic) int encodedHeight;                           //@synthesize encodedHeight=_encodedHeight - In the implementation block
@property (assign,nonatomic) unsigned timeStamp;                          //@synthesize timeStamp=_timeStamp - In the implementation block
@property (assign,nonatomic) long long captureTimeMs;                     //@synthesize captureTimeMs=_captureTimeMs - In the implementation block
@property (assign,nonatomic) long long ntpTimeMs;                         //@synthesize ntpTimeMs=_ntpTimeMs - In the implementation block
@property (assign,nonatomic) unsigned char flags;                         //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long encodeStartMs;                     //@synthesize encodeStartMs=_encodeStartMs - In the implementation block
@property (assign,nonatomic) long long encodeFinishMs;                    //@synthesize encodeFinishMs=_encodeFinishMs - In the implementation block
@property (assign,nonatomic) unsigned long long frameType;                //@synthesize frameType=_frameType - In the implementation block
@property (assign,nonatomic) long long rotation;                          //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) BOOL completeFrame;                          //@synthesize completeFrame=_completeFrame - In the implementation block
@property (nonatomic,retain) NSNumber * qp;                               //@synthesize qp=_qp - In the implementation block
@property (assign,nonatomic) unsigned long long contentType;              //@synthesize contentType=_contentType - In the implementation block
-(NSNumber *)qp;
-(void)setBuffer:(NSData *)arg1 ;
-(void)setRotation:(long long)arg1 ;
-(void)setFrameType:(unsigned long long)arg1 ;
-(long long)rotation;
-(unsigned long long)contentType;
-(unsigned char)flags;
-(unsigned)timeStamp;
-(scoped_refptr<webrtc::EncodedImageBufferInterface>*)encodedData;
-(NSData *)buffer;
-(void)setQp:(NSNumber *)arg1 ;
-(void)setTimeStamp:(unsigned)arg1 ;
-(void)setFlags:(unsigned char)arg1 ;
-(void)setContentType:(unsigned long long)arg1 ;
-(unsigned long long)frameType;
-(id)initWithNativeEncodedImage:(const EncodedImage*)arg1 ;
-(EncodedImage*)nativeEncodedImage;
-(void)setEncodedData:(scoped_refptr<webrtc::EncodedImageBufferInterface>*)arg1 ;
-(void)setEncodedWidth:(int)arg1 ;
-(void)setEncodedHeight:(int)arg1 ;
-(void)setCaptureTimeMs:(long long)arg1 ;
-(void)setNtpTimeMs:(long long)arg1 ;
-(void)setEncodeStartMs:(long long)arg1 ;
-(void)setEncodeFinishMs:(long long)arg1 ;
-(void)setCompleteFrame:(BOOL)arg1 ;
-(int)encodedWidth;
-(int)encodedHeight;
-(long long)captureTimeMs;
-(long long)ntpTimeMs;
-(long long)encodeStartMs;
-(long long)encodeFinishMs;
-(BOOL)completeFrame;
@end

