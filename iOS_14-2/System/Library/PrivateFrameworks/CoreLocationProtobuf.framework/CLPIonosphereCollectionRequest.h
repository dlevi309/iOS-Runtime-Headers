/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPMeta;

@interface CLPIonosphereCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _ionoDatas;
	CLPMeta* _meta;

}

@property (nonatomic,readonly) BOOL hasMeta; 
@property (nonatomic,retain) CLPMeta * meta;                          //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * ionoDatas;              //@synthesize ionoDatas=_ionoDatas - In the implementation block
+(Class)ionoDataType;
-(id)dictionaryRepresentation;
-(CLPMeta *)meta;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasMeta;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMeta:(CLPMeta *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addIonoData:(id)arg1 ;
-(unsigned long long)ionoDatasCount;
-(void)clearIonoDatas;
-(id)ionoDataAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)ionoDatas;
-(void)setIonoDatas:(NSMutableArray *)arg1 ;
@end

