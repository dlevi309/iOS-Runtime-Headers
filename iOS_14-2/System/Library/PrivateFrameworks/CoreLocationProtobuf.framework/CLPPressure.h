/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPPressure : PBCodable <NSCopying> {

	double _std;
	double _timestamp;
	double _value;

}

@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double value;                  //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double std;                    //@synthesize std=_std - In the implementation block
-(id)dictionaryRepresentation;
-(double)std;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(double)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setStd:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(double)value;
-(BOOL)isEqual:(id)arg1 ;
@end

