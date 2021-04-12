/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMTriggerCondition : PBCodable <NSCopying> {

	int _comparisonType;
	int _dataType;
	NSString* _identifier;
	int _triggerConditionType;
	NSString* _triggerValue;
	SCD_Struct_IC15 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasDataType; 
@property (assign,nonatomic) int dataType;                              //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) BOOL hasComparisonType; 
@property (assign,nonatomic) int comparisonType;                        //@synthesize comparisonType=_comparisonType - In the implementation block
@property (nonatomic,readonly) BOOL hasTriggerValue; 
@property (nonatomic,retain) NSString * triggerValue;                   //@synthesize triggerValue=_triggerValue - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerConditionType; 
@property (assign,nonatomic) int triggerConditionType;                  //@synthesize triggerConditionType=_triggerConditionType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)dataType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setDataType:(int)arg1 ;
-(int)comparisonType;
-(void)setComparisonType:(int)arg1 ;
-(void)setHasComparisonType:(BOOL)arg1 ;
-(BOOL)hasComparisonType;
-(void)setTriggerValue:(NSString *)arg1 ;
-(void)setHasDataType:(BOOL)arg1 ;
-(BOOL)hasDataType;
-(id)dataTypeAsString:(int)arg1 ;
-(int)StringAsDataType:(id)arg1 ;
-(id)comparisonTypeAsString:(int)arg1 ;
-(int)StringAsComparisonType:(id)arg1 ;
-(BOOL)hasTriggerValue;
-(int)triggerConditionType;
-(void)setTriggerConditionType:(int)arg1 ;
-(void)setHasTriggerConditionType:(BOOL)arg1 ;
-(BOOL)hasTriggerConditionType;
-(id)triggerConditionTypeAsString:(int)arg1 ;
-(int)StringAsTriggerConditionType:(id)arg1 ;
-(NSString *)triggerValue;
@end

