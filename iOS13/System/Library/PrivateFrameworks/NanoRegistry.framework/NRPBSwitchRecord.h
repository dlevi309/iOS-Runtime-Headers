/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)switchIndex;
-(void)setSwitchIndex:(int)arg1 ;
-(void)setDeviceIDBytes:(NSData *)arg1 ;
-(BOOL)hasDeviceIDBytes;
-(void)setDateTimeInterval:(double)arg1 ;
-(void)setHasDateTimeInterval:(BOOL)arg1 ;
-(BOOL)hasDateTimeInterval;
-(void)setHasSwitchIndex:(BOOL)arg1 ;
-(BOOL)hasSwitchIndex;
-(NSData *)deviceIDBytes;
-(double)dateTimeInterval;
@end

