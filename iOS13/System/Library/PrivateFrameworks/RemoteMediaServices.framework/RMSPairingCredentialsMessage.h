/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)characterCount;
-(void)setCharacterCount:(unsigned)arg1 ;
-(void)setHasCharacterCount:(BOOL)arg1 ;
-(BOOL)hasCharacterCount;
-(void)setRequirementType:(int)arg1 ;
-(void)setHasRequirementType:(BOOL)arg1 ;
-(BOOL)hasRequirementType;
-(int)requirementType;
@end

