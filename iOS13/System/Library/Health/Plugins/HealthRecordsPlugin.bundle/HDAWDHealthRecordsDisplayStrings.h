/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthRecordsDisplayStrings : PBCodable <NSCopying> {

	unsigned long long _count;
	unsigned long long _extractionRulesVersion;
	float _avgLength;
	float _maxLength;
	int _property;
	int _resourceType;
	float _stdLength;
	int _subProperty;
	BOOL _containsNoLowercaseCharacter;
	BOOL _containsSpecialCharacter;
	SCD_Struct_HD2 _has;

}

@property (assign,nonatomic) BOOL hasExtractionRulesVersion; 
@property (assign,nonatomic) unsigned long long extractionRulesVersion;              //@synthesize extractionRulesVersion=_extractionRulesVersion - In the implementation block
@property (assign,nonatomic) BOOL hasResourceType; 
@property (assign,nonatomic) int resourceType;                                       //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) BOOL hasProperty; 
@property (assign,nonatomic) int property;                                           //@synthesize property=_property - In the implementation block
@property (assign,nonatomic) BOOL hasSubProperty; 
@property (assign,nonatomic) int subProperty;                                        //@synthesize subProperty=_subProperty - In the implementation block
@property (assign,nonatomic) BOOL hasContainsSpecialCharacter; 
@property (assign,nonatomic) BOOL containsSpecialCharacter;                          //@synthesize containsSpecialCharacter=_containsSpecialCharacter - In the implementation block
@property (assign,nonatomic) BOOL hasContainsNoLowercaseCharacter; 
@property (assign,nonatomic) BOOL containsNoLowercaseCharacter;                      //@synthesize containsNoLowercaseCharacter=_containsNoLowercaseCharacter - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned long long count;                               //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasAvgLength; 
@property (assign,nonatomic) float avgLength;                                        //@synthesize avgLength=_avgLength - In the implementation block
@property (assign,nonatomic) BOOL hasStdLength; 
@property (assign,nonatomic) float stdLength;                                        //@synthesize stdLength=_stdLength - In the implementation block
@property (assign,nonatomic) BOOL hasMaxLength; 
@property (assign,nonatomic) float maxLength;                                        //@synthesize maxLength=_maxLength - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)maxLength;
-(void)setMaxLength:(float)arg1 ;
-(int)property;
-(void)setProperty:(int)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(int)resourceType;
-(void)setResourceType:(int)arg1 ;
-(void)setHasResourceType:(BOOL)arg1 ;
-(BOOL)hasResourceType;
-(id)resourceTypeAsString:(int)arg1 ;
-(int)StringAsResourceType:(id)arg1 ;
-(BOOL)hasProperty;
-(void)setExtractionRulesVersion:(unsigned long long)arg1 ;
-(void)setHasExtractionRulesVersion:(BOOL)arg1 ;
-(BOOL)hasExtractionRulesVersion;
-(void)setHasProperty:(BOOL)arg1 ;
-(id)propertyAsString:(int)arg1 ;
-(int)StringAsProperty:(id)arg1 ;
-(int)subProperty;
-(void)setSubProperty:(int)arg1 ;
-(void)setHasSubProperty:(BOOL)arg1 ;
-(BOOL)hasSubProperty;
-(id)subPropertyAsString:(int)arg1 ;
-(int)StringAsSubProperty:(id)arg1 ;
-(void)setContainsSpecialCharacter:(BOOL)arg1 ;
-(void)setHasContainsSpecialCharacter:(BOOL)arg1 ;
-(BOOL)hasContainsSpecialCharacter;
-(void)setContainsNoLowercaseCharacter:(BOOL)arg1 ;
-(void)setHasContainsNoLowercaseCharacter:(BOOL)arg1 ;
-(BOOL)hasContainsNoLowercaseCharacter;
-(void)setAvgLength:(float)arg1 ;
-(void)setHasAvgLength:(BOOL)arg1 ;
-(BOOL)hasAvgLength;
-(void)setStdLength:(float)arg1 ;
-(void)setHasStdLength:(BOOL)arg1 ;
-(BOOL)hasStdLength;
-(void)setHasMaxLength:(BOOL)arg1 ;
-(BOOL)hasMaxLength;
-(unsigned long long)extractionRulesVersion;
-(BOOL)containsSpecialCharacter;
-(BOOL)containsNoLowercaseCharacter;
-(float)avgLength;
-(float)stdLength;
@end

