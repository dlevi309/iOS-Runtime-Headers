/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMTriggerCondition : PBCodable <NSCopying> {

	NSString* _bundleIdentifier;
	int _comparisonType;
	int _dataType;
	NSString* _identifier;
	int _kind;
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
@property (assign,nonatomic) BOOL hasKind; 
@property (assign,nonatomic) int kind;                                  //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(int)dataType;
-(id)dictionaryRepresentation;
-(BOOL)hasIdentifier;
-(void)setDataType:(int)arg1 ;
-(NSString *)bundleIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasComparisonType:(BOOL)arg1 ;
-(BOOL)hasComparisonType;
-(int)kind;
-(BOOL)hasKind;
-(BOOL)hasDataType;
-(void)setHasKind:(BOOL)arg1 ;
-(void)setTriggerValue:(NSString *)arg1 ;
-(void)setHasDataType:(BOOL)arg1 ;
-(id)dataTypeAsString:(int)arg1 ;
-(int)StringAsDataType:(id)arg1 ;
-(id)comparisonTypeAsString:(int)arg1 ;
-(int)StringAsComparisonType:(id)arg1 ;
-(id)kindAsString:(int)arg1 ;
-(BOOL)hasTriggerValue;
-(int)triggerConditionType;
-(void)setTriggerConditionType:(int)arg1 ;
-(void)setHasTriggerConditionType:(BOOL)arg1 ;
-(BOOL)hasTriggerConditionType;
-(id)triggerConditionTypeAsString:(int)arg1 ;
-(int)StringAsTriggerConditionType:(id)arg1 ;
-(int)StringAsKind:(id)arg1 ;
-(NSString *)triggerValue;
-(id)description;
-(void)setKind:(int)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setComparisonType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)comparisonType;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasBundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

