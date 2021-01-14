/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariInteractedWithGeneratedPasswordEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _generatedPasswordInteractionType;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasGeneratedPasswordInteractionType; 
@property (assign,nonatomic) int generatedPasswordInteractionType;                  //@synthesize generatedPasswordInteractionType=_generatedPasswordInteractionType - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasGeneratedPasswordInteractionType:(BOOL)arg1 ;
-(BOOL)hasGeneratedPasswordInteractionType;
-(id)generatedPasswordInteractionTypeAsString:(int)arg1 ;
-(int)StringAsGeneratedPasswordInteractionType:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setGeneratedPasswordInteractionType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)generatedPasswordInteractionType;
-(BOOL)isEqual:(id)arg1 ;
@end

