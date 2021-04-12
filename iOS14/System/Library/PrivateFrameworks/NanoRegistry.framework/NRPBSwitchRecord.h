/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NRPBSwitchRecord : PBCodable <NSCopying> {

	double _dateTimeInterval;
	NSData* _deviceIDBytes;
	int _switchIndex;
	SCD_Struct_NR4 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceIDBytes; 
@property (nonatomic,retain) NSData * deviceIDBytes;                //@synthesize deviceIDBytes=_deviceIDBytes - In the implementation block
@property (assign,nonatomic) BOOL hasDateTimeInterval; 
@property (assign,nonatomic) double dateTimeInterval;               //@synthesize dateTimeInterval=_dateTimeInterval - In the implementation block
@property (assign,nonatomic) BOOL hasSwitchIndex; 
@property (assign,nonatomic) int switchIndex;                       //@synthesize switchIndex=_switchIndex - In the implementation block
-(id)dictionaryRepresentation;
-(int)switchIndex;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeviceIDBytes:(NSData *)arg1 ;
-(BOOL)hasDeviceIDBytes;
-(void)setDateTimeInterval:(double)arg1 ;
-(void)setHasDateTimeInterval:(BOOL)arg1 ;
-(BOOL)hasDateTimeInterval;
-(void)setSwitchIndex:(int)arg1 ;
-(void)setHasSwitchIndex:(BOOL)arg1 ;
-(BOOL)hasSwitchIndex;
-(NSData *)deviceIDBytes;
-(double)dateTimeInterval;
-(BOOL)isEqual:(id)arg1 ;
@end

