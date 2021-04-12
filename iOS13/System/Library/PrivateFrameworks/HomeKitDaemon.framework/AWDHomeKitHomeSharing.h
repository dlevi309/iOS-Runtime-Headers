/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitHomeSharing : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _errorCode;
	int _responseType;
	int _stage;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasResponseType; 
@property (assign,nonatomic) int responseType;                          //@synthesize responseType=_responseType - In the implementation block
@property (assign,nonatomic) BOOL hasStage; 
@property (assign,nonatomic) int stage;                                 //@synthesize stage=_stage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)stage;
-(void)setStage:(int)arg1 ;
-(int)errorCode;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)responseType;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setResponseType:(int)arg1 ;
-(void)setHasResponseType:(BOOL)arg1 ;
-(BOOL)hasResponseType;
-(id)responseTypeAsString:(int)arg1 ;
-(int)StringAsResponseType:(id)arg1 ;
-(void)setHasStage:(BOOL)arg1 ;
-(BOOL)hasStage;
-(id)stageAsString:(int)arg1 ;
-(int)StringAsStage:(id)arg1 ;
@end

