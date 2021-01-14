/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIDSGenericConnectionSetupDurationEvent : PBCodable <NSCopying> {

	unsigned long long _connectionSetupDuration;
	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _errorCode;
	unsigned _linkType;
	BOOL _success;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) unsigned linkType;                                       //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionSetupDuration; 
@property (assign,nonatomic) unsigned long long connectionSetupDuration;              //@synthesize connectionSetupDuration=_connectionSetupDuration - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                                            //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                                      //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                                 //@synthesize connectionType=_connectionType - In the implementation block
-(BOOL)success;
-(id)dictionaryRepresentation;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(unsigned)connectionType;
-(void)setLinkType:(unsigned)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(unsigned)linkType;
-(unsigned long long)timestamp;
-(BOOL)hasConnectionType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)errorCode;
-(BOOL)hasErrorCode;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasLinkType;
-(void)setHasLinkType:(BOOL)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConnectionSetupDuration:(unsigned long long)arg1 ;
-(void)setHasConnectionSetupDuration:(BOOL)arg1 ;
-(BOOL)hasConnectionSetupDuration;
-(unsigned long long)connectionSetupDuration;
@end

