/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDMiniBrowseCategories : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _miniBrowseCategorys;
	NSMutableArray* _topChildNames;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_miniBrowseCategorys : 1;
		unsigned read_topChildNames : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * miniBrowseCategorys; 
@property (nonatomic,retain) NSMutableArray * topChildNames; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)miniBrowseCategoryType;
+(Class)topChildNameType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSMutableArray *)topChildNames;
-(void)addMiniBrowseCategory:(id)arg1 ;
-(void)addTopChildName:(id)arg1 ;
-(unsigned long long)miniBrowseCategorysCount;
-(void)clearMiniBrowseCategorys;
-(id)miniBrowseCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)topChildNamesCount;
-(void)clearTopChildNames;
-(id)topChildNameAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)miniBrowseCategorys;
-(void)setMiniBrowseCategorys:(NSMutableArray *)arg1 ;
-(void)setTopChildNames:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

