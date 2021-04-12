/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDStorefront : PBCodable <NSCopying> {

	NSMutableArray* _bundleIds;

}

@property (nonatomic,retain) NSMutableArray * bundleIds; 
+(BOOL)isValid:(id)arg1 ;
+(Class)bundleIdType;
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
-(NSMutableArray *)bundleIds;
-(void)addBundleId:(id)arg1 ;
-(unsigned long long)bundleIdsCount;
-(void)clearBundleIds;
-(id)bundleIdAtIndex:(unsigned long long)arg1 ;
-(void)setBundleIds:(NSMutableArray *)arg1 ;
@end

