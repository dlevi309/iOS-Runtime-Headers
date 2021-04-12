/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(CLPPressure *)pressure;
-(void)setPressure:(CLPPressure *)arg1 ;
-(CLPMeta *)meta;
-(void)setMeta:(CLPMeta *)arg1 ;
-(void)setPressureLocation:(CLPLocation *)arg1 ;
-(CLPLocation *)pressureLocation;
@end

