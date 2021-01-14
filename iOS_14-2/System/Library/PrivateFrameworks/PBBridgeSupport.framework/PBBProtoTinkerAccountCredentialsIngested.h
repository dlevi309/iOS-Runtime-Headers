/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface PBBProtoTinkerAccountCredentialsIngested : PBCodable <NSCopying> {

	unsigned _cdpStatus;
	NSData* _detailedError;
	NSString* _errorDescription;
	BOOL _success;
	SCD_Struct_PB1 _has;

}

@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                             //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
@property (assign,nonatomic) BOOL hasCdpStatus; 
@property (assign,nonatomic) unsigned cdpStatus;                       //@synthesize cdpStatus=_cdpStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasDetailedError; 
@property (nonatomic,retain) NSData * detailedError;                   //@synthesize detailedError=_detailedError - In the implementation block
-(BOOL)success;
-(id)dictionaryRepresentation;
-(void)setSuccess:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasErrorDescription;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(id)description;
-(NSString *)errorDescription;
-(unsigned long long)hash;
-(void)setErrorDescription:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDetailedError:(NSData *)arg1 ;
-(void)setCdpStatus:(unsigned)arg1 ;
-(void)setHasCdpStatus:(BOOL)arg1 ;
-(BOOL)hasCdpStatus;
-(BOOL)hasDetailedError;
-(unsigned)cdpStatus;
-(NSData *)detailedError;
@end

