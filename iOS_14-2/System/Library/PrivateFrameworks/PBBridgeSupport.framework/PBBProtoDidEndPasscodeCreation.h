/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoDidEndPasscodeCreation : PBCodable <NSCopying> {

	BOOL _isLong;
	BOOL _success;
	SCD_Struct_PB2 _has;

}

@property (assign,nonatomic) BOOL success;                //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasIsLong; 
@property (assign,nonatomic) BOOL isLong;                 //@synthesize isLong=_isLong - In the implementation block
-(BOOL)success;
-(id)dictionaryRepresentation;
-(void)setSuccess:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)isLong;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIsLong:(BOOL)arg1 ;
-(void)setHasIsLong:(BOOL)arg1 ;
-(BOOL)hasIsLong;
@end

