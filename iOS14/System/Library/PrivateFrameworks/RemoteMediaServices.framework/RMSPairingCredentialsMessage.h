/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMSPairingCredentialsMessage : PBCodable <NSCopying> {

	unsigned _characterCount;
	int _requirementType;
	SCD_Struct_RM4 _has;

}

@property (assign,nonatomic) BOOL hasRequirementType; 
@property (assign,nonatomic) int requirementType;                  //@synthesize requirementType=_requirementType - In the implementation block
@property (assign,nonatomic) BOOL hasCharacterCount; 
@property (assign,nonatomic) unsigned characterCount;              //@synthesize characterCount=_characterCount - In the implementation block
-(unsigned)characterCount;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setCharacterCount:(unsigned)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasCharacterCount;
-(void)setHasCharacterCount:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRequirementType:(int)arg1 ;
-(void)setHasRequirementType:(BOOL)arg1 ;
-(BOOL)hasRequirementType;
-(int)requirementType;
@end

