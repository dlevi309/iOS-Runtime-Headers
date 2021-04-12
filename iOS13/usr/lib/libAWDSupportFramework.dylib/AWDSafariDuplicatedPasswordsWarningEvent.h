/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariDuplicatedPasswordsWarningEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _duplicatedPasswordsWarningInteractionType;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuplicatedPasswordsWarningInteractionType; 
@property (assign,nonatomic) int duplicatedPasswordsWarningInteractionType;                  //@synthesize duplicatedPasswordsWarningInteractionType=_duplicatedPasswordsWarningInteractionType - In the implementation block
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
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)duplicatedPasswordsWarningInteractionType;
-(void)setDuplicatedPasswordsWarningInteractionType:(int)arg1 ;
-(void)setHasDuplicatedPasswordsWarningInteractionType:(BOOL)arg1 ;
-(BOOL)hasDuplicatedPasswordsWarningInteractionType;
-(id)duplicatedPasswordsWarningInteractionTypeAsString:(int)arg1 ;
-(int)StringAsDuplicatedPasswordsWarningInteractionType:(id)arg1 ;
@end

