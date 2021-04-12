/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthRecordsSelectedSortDate : PBCodable <NSCopying> {

	unsigned long long _count;
	unsigned long long _extractionRulesVersion;
	int _resourceType;
	int _selectedSortDate;
	SCD_Struct_HD6 _has;

}

@property (assign,nonatomic) BOOL hasExtractionRulesVersion; 
@property (assign,nonatomic) unsigned long long extractionRulesVersion;              //@synthesize extractionRulesVersion=_extractionRulesVersion - In the implementation block
@property (assign,nonatomic) BOOL hasResourceType; 
@property (assign,nonatomic) int resourceType;                                       //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedSortDate; 
@property (assign,nonatomic) int selectedSortDate;                                   //@synthesize selectedSortDate=_selectedSortDate - In the implementation block
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
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(int)resourceType;
-(void)setResourceType:(int)arg1 ;
-(void)setHasResourceType:(BOOL)arg1 ;
-(BOOL)hasResourceType;
-(id)resourceTypeAsString:(int)arg1 ;
-(int)StringAsResourceType:(id)arg1 ;
-(void)setExtractionRulesVersion:(unsigned long long)arg1 ;
-(void)setHasExtractionRulesVersion:(BOOL)arg1 ;
-(BOOL)hasExtractionRulesVersion;
-(unsigned long long)extractionRulesVersion;
-(int)selectedSortDate;
-(void)setSelectedSortDate:(int)arg1 ;
-(void)setHasSelectedSortDate:(BOOL)arg1 ;
-(BOOL)hasSelectedSortDate;
-(id)selectedSortDateAsString:(int)arg1 ;
-(int)StringAsSelectedSortDate:(id)arg1 ;
@end

