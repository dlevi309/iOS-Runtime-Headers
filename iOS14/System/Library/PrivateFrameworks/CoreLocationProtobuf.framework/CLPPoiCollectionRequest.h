/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPMeta;

@interface CLPPoiCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _harvests;
	CLPMeta* _meta;

}

@property (nonatomic,retain) CLPMeta * meta;                         //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * harvests;              //@synthesize harvests=_harvests - In the implementation block
+(Class)harvestsType;
-(id)dictionaryRepresentation;
-(CLPMeta *)meta;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMeta:(CLPMeta *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addHarvests:(id)arg1 ;
-(unsigned long long)harvestsCount;
-(void)clearHarvests;
-(id)harvestsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)harvests;
-(void)setHarvests:(NSMutableArray *)arg1 ;
@end

