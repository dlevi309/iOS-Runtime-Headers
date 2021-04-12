/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOMapQueryCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _requestElements;

}

@property (nonatomic,retain) NSMutableArray * requestElements; 
+(BOOL)isValid:(id)arg1 ;
+(Class)requestElementsType;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSMutableArray *)requestElements;
-(void)addRequestElements:(id)arg1 ;
-(unsigned long long)requestElementsCount;
-(void)clearRequestElements;
-(id)requestElementsAtIndex:(unsigned long long)arg1 ;
-(void)setRequestElements:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

