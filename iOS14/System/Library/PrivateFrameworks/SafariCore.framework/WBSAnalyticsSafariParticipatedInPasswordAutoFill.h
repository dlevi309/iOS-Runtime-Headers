/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariParticipatedInPasswordAutoFill : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _autoFillInteractionType;
	SCD_Struct_WB1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAutoFillInteractionType; 
@property (assign,nonatomic) int autoFillInteractionType;                  //@synthesize autoFillInteractionType=_autoFillInteractionType - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setAutoFillInteractionType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)autoFillInteractionType;
-(void)setHasAutoFillInteractionType:(BOOL)arg1 ;
-(BOOL)hasAutoFillInteractionType;
-(id)autoFillInteractionTypeAsString:(int)arg1 ;
-(int)StringAsAutoFillInteractionType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

