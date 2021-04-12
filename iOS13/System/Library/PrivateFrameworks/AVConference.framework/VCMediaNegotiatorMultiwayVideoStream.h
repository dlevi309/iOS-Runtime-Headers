/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaNegotiatorMultiwayMediaStream.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiatorMultiwayVideoStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying> {

	CGSize _size;
	unsigned _frameRate;
	unsigned _keyFrameInterval;
	int _payload;

}

@property (assign,nonatomic) CGSize size;                            //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned frameRate;                     //@synthesize frameRate=_frameRate - In the implementation block
@property (assign,nonatomic) unsigned keyFrameInterval;              //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (assign,nonatomic) int payload;                            //@synthesize payload=_payload - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setPayload:(int)arg1 ;
-(int)payload;
-(void)setFrameRate:(unsigned)arg1 ;
-(unsigned)frameRate;
-(unsigned)keyFrameInterval;
-(void)setKeyFrameInterval:(unsigned)arg1 ;
@end

