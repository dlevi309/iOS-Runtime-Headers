/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CLPCellNeighborsGroup : PBCodable <NSCopying> {

	NSMutableArray* _cdmaNeighbors;
	NSMutableArray* _gsmNeighbors;
	NSMutableArray* _lteNeighbors;
	NSMutableArray* _nrNeighbors;
	NSMutableArray* _scdmaNeighbors;

}

@property (nonatomic,retain) NSMutableArray * gsmNeighbors;                //@synthesize gsmNeighbors=_gsmNeighbors - In the implementation block
@property (nonatomic,retain) NSMutableArray * scdmaNeighbors;              //@synthesize scdmaNeighbors=_scdmaNeighbors - In the implementation block
@property (nonatomic,retain) NSMutableArray * cdmaNeighbors;               //@synthesize cdmaNeighbors=_cdmaNeighbors - In the implementation block
@property (nonatomic,retain) NSMutableArray * lteNeighbors;                //@synthesize lteNeighbors=_lteNeighbors - In the implementation block
@property (nonatomic,retain) NSMutableArray * nrNeighbors;                 //@synthesize nrNeighbors=_nrNeighbors - In the implementation block
+(Class)gsmNeighborsType;
+(Class)scdmaNeighborsType;
+(Class)cdmaNeighborsType;
+(Class)lteNeighborsType;
+(Class)nrNeighborsType;
-(id)dictionaryRepresentation;
-(void)clearCdmaNeighbors;
-(unsigned long long)scdmaNeighborsCount;
-(id)lteNeighborsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)gsmNeighborsCount;
-(void)clearScdmaNeighbors;
-(unsigned long long)nrNeighborsCount;
-(void)addLteNeighbors:(id)arg1 ;
-(void)setCdmaNeighbors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)nrNeighbors;
-(unsigned long long)lteNeighborsCount;
-(void)addScdmaNeighbors:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addNrNeighbors:(id)arg1 ;
-(void)clearLteNeighbors;
-(void)setScdmaNeighbors:(NSMutableArray *)arg1 ;
-(void)clearNrNeighbors;
-(void)addCdmaNeighbors:(id)arg1 ;
-(id)description;
-(void)setNrNeighbors:(NSMutableArray *)arg1 ;
-(id)nrNeighborsAtIndex:(unsigned long long)arg1 ;
-(void)setLteNeighbors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)cdmaNeighbors;
-(void)setGsmNeighbors:(NSMutableArray *)arg1 ;
-(void)addGsmNeighbors:(id)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)scdmaNeighbors;
-(BOOL)readFrom:(id)arg1 ;
-(void)clearGsmNeighbors;
-(id)gsmNeighborsAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)cdmaNeighborsCount;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)lteNeighbors;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cdmaNeighborsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)scdmaNeighborsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)gsmNeighbors;
@end

