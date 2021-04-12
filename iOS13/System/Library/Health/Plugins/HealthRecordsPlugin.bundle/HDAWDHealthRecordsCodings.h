/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDAWDHealthRecordsCodings : PBCodable <NSCopying> {

	unsigned long long _count;
	unsigned long long _extractionRulesVersion;
	int _property;
	int _resourceType;
	int _subProperty;
	int _system;
	NSString* _version;
	BOOL _hasCode;
	BOOL _hasDisplayString;
	SCD_Struct_HD5 _has;

}

@property (assign,nonatomic) BOOL hasExtractionRulesVersion; 
@property (assign,nonatomic) unsigned long long extractionRulesVersion;              //@synthesize extractionRulesVersion=_extractionRulesVersion - In the implementation block
@property (assign,nonatomic) BOOL hasResourceType; 
@property (assign,nonatomic) int resourceType;                                       //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) BOOL hasProperty; 
@property (assign,nonatomic) int property;                                           //@synthesize property=_property - In the implementation block
@property (assign,nonatomic) BOOL hasSubProperty; 
@property (assign,nonatomic) int subProperty;                                        //@synthesize subProperty=_subProperty - In the implementation block
@property (assign,nonatomic) BOOL hasSystem; 
@property (assign,nonatomic) int system;                                             //@synthesize system=_system - In the implementation block
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;                                     //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasHasCode; 
@property (assign,nonatomic) BOOL hasCode;                                           //@synthesize hasCode=_hasCode - In the implementation block
@property (assign,nonatomic) BOOL hasHasDisplayString; 
@property (assign,nonatomic) BOOL hasDisplayString;                                  //@synthesize hasDisplayString=_hasDisplayString - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned long long count;                               //@synthesize count=_count - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)system;
-(void)setSystem:(int)arg1 ;
-(int)property;
-(void)setProperty:(int)arg1 ;
-(BOOL)hasVersion;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(int)resourceType;
-(void)setResourceType:(int)arg1 ;
-(void)setHasResourceType:(BOOL)arg1 ;
-(BOOL)hasResourceType;
-(id)resourceTypeAsString:(int)arg1 ;
-(int)StringAsResourceType:(id)arg1 ;
-(BOOL)hasDisplayString;
-(BOOL)hasProperty;
-(BOOL)hasSystem;
-(BOOL)hasCode;
-(void)setHasCode:(BOOL)arg1 ;
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
-(void)setHasSystem:(BOOL)arg1 ;
-(id)systemAsString:(int)arg1 ;
-(int)StringAsSystem:(id)arg1 ;
-(void)setHasHasCode:(BOOL)arg1 ;
-(BOOL)hasHasCode;
-(void)setHasDisplayString:(BOOL)arg1 ;
-(void)setHasHasDisplayString:(BOOL)arg1 ;
-(BOOL)hasHasDisplayString;
@end

