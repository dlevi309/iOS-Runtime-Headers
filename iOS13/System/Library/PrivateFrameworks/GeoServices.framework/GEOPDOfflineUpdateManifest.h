/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDOfflineUpdateManifest : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _datas;
	NSMutableArray* _patchs;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_datas : 1;
		unsigned read_patchs : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_datas : 1;
		unsigned wrote_patchs : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * patchs; 
@property (nonatomic,retain) NSMutableArray * datas; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)dataType;
+(BOOL)isValid:(id)arg1 ;
+(Class)patchType;
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
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readPatchs;
-(void)_addNoFlagsPatch:(id)arg1 ;
-(void)_readDatas;
-(void)_addNoFlagsData:(id)arg1 ;
-(unsigned long long)patchsCount;
-(void)clearPatchs;
-(id)patchAtIndex:(unsigned long long)arg1 ;
-(void)addPatch:(id)arg1 ;
-(unsigned long long)datasCount;
-(void)clearDatas;
-(void)addData:(id)arg1 ;
-(NSMutableArray *)patchs;
-(void)setPatchs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)datas;
-(void)setDatas:(NSMutableArray *)arg1 ;
@end

