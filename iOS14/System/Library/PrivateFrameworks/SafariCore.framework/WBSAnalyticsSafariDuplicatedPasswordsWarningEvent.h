/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariDuplicatedPasswordsWarningEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _duplicatedPasswordsWarningInteractionType;
	SCD_Struct_WB1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuplicatedPasswordsWarningInteractionType; 
@property (assign,nonatomic) int duplicatedPasswordsWarningInteractionType;                  //@synthesize duplicatedPasswordsWarningInteractionType=_duplicatedPasswordsWarningInteractionType - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)duplicatedPasswordsWarningInteractionType;
-(void)setDuplicatedPasswordsWarningInteractionType:(int)arg1 ;
-(void)setHasDuplicatedPasswordsWarningInteractionType:(BOOL)arg1 ;
-(BOOL)hasDuplicatedPasswordsWarningInteractionType;
-(id)duplicatedPasswordsWarningInteractionTypeAsString:(int)arg1 ;
-(unsigned long long)hash;
-(int)StringAsDuplicatedPasswordsWarningInteractionType:(id)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

