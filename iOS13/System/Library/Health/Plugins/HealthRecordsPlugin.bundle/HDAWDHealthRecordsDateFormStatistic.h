/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthRecordsDateFormStatistic : PBCodable <NSCopying> {

	unsigned long long _count;
	unsigned long long _extractionRulesVersion;
	int _dateForm;
	int _property;
	int _resourceType;
	int _subProperty;
	SCD_Struct_HD4 _has;

}

@property (assign,nonatomic) BOOL hasExtractionRulesVersion; 
@property (assign,nonatomic) unsigned long long extractionRulesVersion;              //@synthesize extractionRulesVersion=_extractionRulesVersion - In the implementation block
@property (assign,nonatomic) BOOL hasResourceType; 
@property (assign,nonatomic) int resourceType;                                       //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) BOOL hasProperty; 
@property (assign,nonatomic) int property;                                           //@synthesize property=_property - In the implementation block
@property (assign,nonatomic) BOOL hasSubProperty; 
@property (assign,nonatomic) int subProperty;                                        //@synthesize subProperty=_subProperty - In the implementation block
@property (assign,nonatomic) BOOL hasDateForm; 
@property (assign,nonatomic) int dateForm;                                           //@synthesize dateForm=_dateForm - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned long long count;                               //@synthesize count=_count - In the implementation block
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
-(unsigned long long)extractionRulesVersion;
-(int)dateForm;
-(void)setDateForm:(int)arg1 ;
-(void)setHasDateForm:(BOOL)arg1 ;
-(BOOL)hasDateForm;
-(id)dateFormAsString:(int)arg1 ;
-(int)StringAsDateForm:(id)arg1 ;
@end

