/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(CLPMeta *)meta;
-(void)setMeta:(CLPMeta *)arg1 ;
-(void)addWtwLocation:(id)arg1 ;
-(unsigned long long)wtwLocationsCount;
-(void)clearWtwLocations;
-(id)wtwLocationAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)wtwLocations;
-(void)setWtwLocations:(NSMutableArray *)arg1 ;
@end

