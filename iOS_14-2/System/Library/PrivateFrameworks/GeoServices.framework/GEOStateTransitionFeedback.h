/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOStateTransitionFeedback : PBCodable <NSCopying> {

	int _newValue;
	int _oldValue;
	int _stateType;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasStateType; 
@property (assign,nonatomic) int stateType; 
@property (assign,nonatomic) BOOL hasOldValue; 
@property (assign,nonatomic) int oldValue; 
@property (assign,nonatomic) BOOL hasNewValue; 
@property (assign,nonatomic) int newValue; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasStateType:(BOOL)arg1 ;
-(int)StringAsStateType:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)oldValue;
-(int)newValue;
-(int)stateType;
-(BOOL)hasOldValue;
-(void)setOldValue:(int)arg1 ;
-(void)setNewValue:(int)arg1 ;
-(void)setHasOldValue:(BOOL)arg1 ;
-(id)oldValueAsString:(int)arg1 ;
-(int)StringAsOldValue:(id)arg1 ;
-(void)setHasNewValue:(BOOL)arg1 ;
-(BOOL)hasNewValue;
-(id)newValueAsString:(int)arg1 ;
-(int)StringAsNewValue:(id)arg1 ;
-(unsigned long long)hash;
-(void)setStateType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasStateType;
-(id)stateTypeAsString:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

