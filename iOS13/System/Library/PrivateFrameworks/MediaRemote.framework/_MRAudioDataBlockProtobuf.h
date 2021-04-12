/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRAudioBufferProtobuf, _MRAudioTimeProtobuf;

@interface _MRAudioDataBlockProtobuf : PBCodable <NSCopying> {

	double _gain;
	_MRAudioBufferProtobuf* _buffer;
	_MRAudioTimeProtobuf* _time;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) BOOL hasBuffer; 
@property (nonatomic,retain) _MRAudioBufferProtobuf * buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) BOOL hasTime; 
@property (nonatomic,retain) _MRAudioTimeProtobuf * time;                  //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL hasGain; 
@property (assign,nonatomic) double gain;                                  //@synthesize gain=_gain - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(_MRAudioTimeProtobuf *)time;
-(void)writeTo:(id)arg1 ;
-(void)setBuffer:(_MRAudioBufferProtobuf *)arg1 ;
-(_MRAudioBufferProtobuf *)buffer;
-(void)setTime:(_MRAudioTimeProtobuf *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGain:(double)arg1 ;
-(double)gain;
-(BOOL)hasTime;
-(BOOL)hasBuffer;
-(void)setHasGain:(BOOL)arg1 ;
-(BOOL)hasGain;
@end

