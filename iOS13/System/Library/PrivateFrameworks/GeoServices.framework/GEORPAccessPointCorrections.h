/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEORPAccessPointCorrections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _addeds;
	NSMutableArray* _editeds;
	NSMutableArray* _removeds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_addeds : 1;
		unsigned read_editeds : 1;
		unsigned read_removeds : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_addeds : 1;
		unsigned wrote_editeds : 1;
		unsigned wrote_removeds : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * addeds; 
@property (nonatomic,retain) NSMutableArray * removeds; 
@property (nonatomic,retain) NSMutableArray * editeds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)addedType;
+(Class)removedType;
+(Class)editedType;
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
-(void)_readAddeds;
-(void)_addNoFlagsAdded:(id)arg1 ;
-(void)_readRemoveds;
-(void)_addNoFlagsRemoved:(id)arg1 ;
-(NSMutableArray *)addeds;
-(NSMutableArray *)removeds;
-(unsigned long long)addedsCount;
-(void)clearAddeds;
-(id)addedAtIndex:(unsigned long long)arg1 ;
-(void)addAdded:(id)arg1 ;
-(unsigned long long)removedsCount;
-(void)clearRemoveds;
-(id)removedAtIndex:(unsigned long long)arg1 ;
-(void)addRemoved:(id)arg1 ;
-(void)setAddeds:(NSMutableArray *)arg1 ;
-(void)setRemoveds:(NSMutableArray *)arg1 ;
-(void)_readEditeds;
-(void)_addNoFlagsEdited:(id)arg1 ;
-(unsigned long long)editedsCount;
-(void)clearEditeds;
-(id)editedAtIndex:(unsigned long long)arg1 ;
-(void)addEdited:(id)arg1 ;
-(NSMutableArray *)editeds;
-(void)setEditeds:(NSMutableArray *)arg1 ;
@end

