/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPMeta, CLPPressure, CLPLocation;

@interface CLPPressureCollectionRequest : PBRequest <NSCopying> {

	CLPMeta* _meta;
	CLPPressure* _pressure;
	CLPLocation* _pressureLocation;

}

@property (nonatomic,retain) CLPMeta * meta;                              //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) CLPPressure * pressure;                      //@synthesize pressure=_pressure - In the implementation block
@property (nonatomic,retain) CLPLocation * pressureLocation;              //@synthesize pressureLocation=_pressureLocation - In the implementation block
-(id)dictionaryRepresentation;
-(CLPMeta *)meta;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(CLPPressure *)pressure;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setPressure:(CLPPressure *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMeta:(CLPMeta *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPressureLocation:(CLPLocation *)arg1 ;
-(CLPLocation *)pressureLocation;
@end

