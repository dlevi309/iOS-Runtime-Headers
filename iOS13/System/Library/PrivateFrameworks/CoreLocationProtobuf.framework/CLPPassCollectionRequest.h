/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPMeta, NSMutableArray, NSData;

@interface CLPPassCollectionRequest : PBRequest <NSCopying> {

	CLPMeta* _meta;
	NSMutableArray* _passLocations;
	NSData* _signature;

}

@property (nonatomic,retain) CLPMeta * meta;                              //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * passLocations;              //@synthesize passLocations=_passLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                          //@synthesize signature=_signature - In the implementation block
+(Class)passLocationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)signature;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setSignature:(NSData *)arg1 ;
-(BOOL)hasSignature;
-(CLPMeta *)meta;
-(void)setMeta:(CLPMeta *)arg1 ;
-(void)addPassLocation:(id)arg1 ;
-(unsigned long long)passLocationsCount;
-(void)clearPassLocations;
-(id)passLocationAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)passLocations;
-(void)setPassLocations:(NSMutableArray *)arg1 ;
@end

