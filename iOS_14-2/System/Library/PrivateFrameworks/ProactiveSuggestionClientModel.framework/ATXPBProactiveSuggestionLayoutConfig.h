/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXPBProactiveSuggestionLayoutConfig : PBCodable <NSCopying> {

	int _applicableLayoutType;
	SCD_Struct_AT1 _has;

}

@property (assign,nonatomic) BOOL hasApplicableLayoutType; 
@property (assign,nonatomic) int applicableLayoutType;                  //@synthesize applicableLayoutType=_applicableLayoutType - In the implementation block
-(id)dictionaryRepresentation;
-(int)applicableLayoutType;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasApplicableLayoutType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setApplicableLayoutType:(int)arg1 ;
-(void)setHasApplicableLayoutType:(BOOL)arg1 ;
-(id)applicableLayoutTypeAsString:(int)arg1 ;
-(int)StringAsApplicableLayoutType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

