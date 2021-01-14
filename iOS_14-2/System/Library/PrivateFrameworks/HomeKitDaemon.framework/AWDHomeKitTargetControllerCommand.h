/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitVendorInformation;

@interface AWDHomeKitTargetControllerCommand : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _certified;
	int _command;
	int _transportType;
	AWDHomeKitVendorInformation* _vendorDetails;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) int command;                                              //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BOOL hasVendorDetails; 
@property (nonatomic,retain) AWDHomeKitVendorInformation * vendorDetails;              //@synthesize vendorDetails=_vendorDetails - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                        //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasCertified; 
@property (assign,nonatomic) int certified;                                            //@synthesize certified=_certified - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)hasCommand;
-(void)setTransportType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(id)commandAsString:(int)arg1 ;
-(int)StringAsCommand:(id)arg1 ;
-(int)transportType;
-(id)transportTypeAsString:(int)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)command;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCommand:(int)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(AWDHomeKitVendorInformation *)vendorDetails;
-(void)setVendorDetails:(AWDHomeKitVendorInformation *)arg1 ;
-(BOOL)hasVendorDetails;
-(int)certified;
-(void)setCertified:(int)arg1 ;
-(void)setHasCertified:(BOOL)arg1 ;
-(BOOL)hasCertified;
-(id)certifiedAsString:(int)arg1 ;
-(int)StringAsCertified:(id)arg1 ;
@end

