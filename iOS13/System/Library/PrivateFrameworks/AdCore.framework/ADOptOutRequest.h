/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ADOptOutRequest : PBRequest <NSCopying> {

	double _statusChangeTimestamp;
	double _transmitTimestamp;
	NSData* _dPID;
	NSData* _iAdID;
	float _timezone;
	BOOL _optedOutStatus;
	SCD_Struct_AD4 _has;

}

@property (nonatomic,readonly) BOOL hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                             //@synthesize iAdID=_iAdID - In the implementation block
@property (assign,nonatomic) BOOL hasOptedOutStatus; 
@property (assign,nonatomic) BOOL optedOutStatus;                        //@synthesize optedOutStatus=_optedOutStatus - In the implementation block
@property (assign,nonatomic) BOOL hasTransmitTimestamp; 
@property (assign,nonatomic) double transmitTimestamp;                   //@synthesize transmitTimestamp=_transmitTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatusChangeTimestamp; 
@property (assign,nonatomic) double statusChangeTimestamp;               //@synthesize statusChangeTimestamp=_statusChangeTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTimezone; 
@property (assign,nonatomic) float timezone;                             //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,readonly) BOOL hasDPID; 
@property (nonatomic,retain) NSData * dPID;                              //@synthesize dPID=_dPID - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)timezone;
-(void)setTimezone:(float)arg1 ;
-(BOOL)hasTimezone;
-(void)setHasTimezone:(BOOL)arg1 ;
-(void)setDPID:(NSData *)arg1 ;
-(void)setStatusChangeTimestamp:(double)arg1 ;
-(void)setTransmitTimestamp:(double)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(void)setOptedOutStatus:(BOOL)arg1 ;
-(BOOL)hasIAdID;
-(BOOL)hasDPID;
-(NSData *)iAdID;
-(NSData *)dPID;
-(void)setHasOptedOutStatus:(BOOL)arg1 ;
-(BOOL)hasOptedOutStatus;
-(void)setHasTransmitTimestamp:(BOOL)arg1 ;
-(BOOL)hasTransmitTimestamp;
-(void)setHasStatusChangeTimestamp:(BOOL)arg1 ;
-(BOOL)hasStatusChangeTimestamp;
-(BOOL)optedOutStatus;
-(double)transmitTimestamp;
-(double)statusChangeTimestamp;
@end

