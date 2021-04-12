/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariParticipatedInPasswordAutoFill : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _autoFillInteractionType;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAutoFillInteractionType; 
@property (assign,nonatomic) int autoFillInteractionType;                  //@synthesize autoFillInteractionType=_autoFillInteractionType - In the implementation block
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
-(void)setAutoFillInteractionType:(int)arg1 ;
-(int)autoFillInteractionType;
-(void)setHasAutoFillInteractionType:(BOOL)arg1 ;
-(BOOL)hasAutoFillInteractionType;
-(id)autoFillInteractionTypeAsString:(int)arg1 ;
-(int)StringAsAutoFillInteractionType:(id)arg1 ;
@end

