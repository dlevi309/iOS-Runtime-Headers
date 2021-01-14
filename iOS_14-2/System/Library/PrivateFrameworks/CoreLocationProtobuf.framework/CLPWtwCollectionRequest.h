/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPMeta, NSMutableArray;

@interface CLPWtwCollectionRequest : PBRequest <NSCopying> {

	CLPMeta* _meta;
	NSMutableArray* _wtwLocations;

}

@property (nonatomic,retain) CLPMeta * meta;                             //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * wtwLocations;              //@synthesize wtwLocations=_wtwLocations - In the implementation block
+(Class)wtwLocationType;
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
-(void)addWtwLocation:(id)arg1 ;
-(unsigned long long)wtwLocationsCount;
-(void)clearWtwLocations;
-(id)wtwLocationAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)wtwLocations;
-(void)setWtwLocations:(NSMutableArray *)arg1 ;
@end

