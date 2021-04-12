/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRAudioTimeProtobuf : PBCodable <NSCopying> {

	double _sampleRate;
	double _timestamp;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSampleRate; 
@property (assign,nonatomic) double sampleRate;               //@synthesize sampleRate=_sampleRate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasSampleRate:(BOOL)arg1 ;
-(BOOL)hasSampleRate;
@end

