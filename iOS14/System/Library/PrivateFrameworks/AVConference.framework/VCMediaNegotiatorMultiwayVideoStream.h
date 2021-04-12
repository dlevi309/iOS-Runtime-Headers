/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPayload:(int)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(int)payload;
-(unsigned)frameRate;
-(void)setFrameRate:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)keyFrameInterval;
-(void)setKeyFrameInterval:(unsigned)arg1 ;
@end

