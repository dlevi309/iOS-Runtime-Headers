/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPMeta, NSData;

@interface CLPAppCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _appLocations;
	CLPMeta* _meta;
	NSData* _signature;

}

@property (nonatomic,retain) CLPMeta * meta;                             //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * appLocations;              //@synthesize appLocations=_appLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                         //@synthesize signature=_signature - In the implementation block
+(Class)appLocationType;
-(id)dictionaryRepresentation;
-(CLPMeta *)meta;
-(NSData *)signature;
-(Class)responseClass;
-(BOOL)hasSignature;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setAppLocations:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)appLocations;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMeta:(CLPMeta *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addAppLocation:(id)arg1 ;
-(unsigned long long)appLocationsCount;
-(void)clearAppLocations;
-(id)appLocationAtIndex:(unsigned long long)arg1 ;
@end

