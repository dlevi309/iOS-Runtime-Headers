/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPMotionActivity;

@interface CLPIndoorMotionActivity : PBCodable <NSCopying> {

	double _timestamp;
	CLPMotionActivity* _motionActivity;
	SCD_Struct_CL3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasMotionActivity; 
@property (nonatomic,retain) CLPMotionActivity * motionActivity;              //@synthesize motionActivity=_motionActivity - In the implementation block
-(id)dictionaryRepresentation;
-(CLPMotionActivity *)motionActivity;
-(BOOL)hasMotionActivity;
-(void)setMotionActivity:(CLPMotionActivity *)arg1 ;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

