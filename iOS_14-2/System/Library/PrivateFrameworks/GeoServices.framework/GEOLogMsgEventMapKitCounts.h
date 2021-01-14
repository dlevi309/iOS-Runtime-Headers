/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventMapKitCounts : PBCodable <NSCopying> {

	NSMutableArray* _mapKitCounts;

}

@property (nonatomic,retain) NSMutableArray * mapKitCounts; 
+(Class)mapKitCountsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMapKitCounts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mapKitCounts;
-(void)readAll:(BOOL)arg1 ;
-(id)mapKitCountsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)mapKitCountsCount;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addMapKitCounts:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)clearMapKitCounts;
-(BOOL)isEqual:(id)arg1 ;
@end

