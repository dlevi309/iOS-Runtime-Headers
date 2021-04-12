/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)isValid:(id)arg1 ;
+(Class)mapKitCountsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSMutableArray *)mapKitCounts;
-(void)setMapKitCounts:(NSMutableArray *)arg1 ;
-(void)addMapKitCounts:(id)arg1 ;
-(unsigned long long)mapKitCountsCount;
-(void)clearMapKitCounts;
-(id)mapKitCountsAtIndex:(unsigned long long)arg1 ;
@end

