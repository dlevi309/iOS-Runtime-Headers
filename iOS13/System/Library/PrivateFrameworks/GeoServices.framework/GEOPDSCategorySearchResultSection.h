/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDSCategorySearchResultSection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _sectionHeaderDisplayName;
	NSString* _sectionSubHeaderDisplayName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _categorySearchResultSectionCellType;
	struct {
		unsigned has_categorySearchResultSectionCellType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_sectionHeaderDisplayName : 1;
		unsigned read_sectionSubHeaderDisplayName : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_sectionHeaderDisplayName : 1;
		unsigned wrote_sectionSubHeaderDisplayName : 1;
		unsigned wrote_categorySearchResultSectionCellType : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSectionHeaderDisplayName; 
@property (nonatomic,retain) NSString * sectionHeaderDisplayName; 
@property (nonatomic,readonly) BOOL hasSectionSubHeaderDisplayName; 
@property (nonatomic,retain) NSString * sectionSubHeaderDisplayName; 
@property (assign,nonatomic) BOOL hasCategorySearchResultSectionCellType; 
@property (assign,nonatomic) int categorySearchResultSectionCellType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readSectionHeaderDisplayName;
-(void)_readSectionSubHeaderDisplayName;
-(NSString *)sectionHeaderDisplayName;
-(NSString *)sectionSubHeaderDisplayName;
-(void)setSectionHeaderDisplayName:(NSString *)arg1 ;
-(void)setSectionSubHeaderDisplayName:(NSString *)arg1 ;
-(BOOL)hasSectionHeaderDisplayName;
-(BOOL)hasSectionSubHeaderDisplayName;
-(int)categorySearchResultSectionCellType;
-(void)setCategorySearchResultSectionCellType:(int)arg1 ;
-(void)setHasCategorySearchResultSectionCellType:(BOOL)arg1 ;
-(BOOL)hasCategorySearchResultSectionCellType;
-(id)categorySearchResultSectionCellTypeAsString:(int)arg1 ;
-(int)StringAsCategorySearchResultSectionCellType:(id)arg1 ;
@end

