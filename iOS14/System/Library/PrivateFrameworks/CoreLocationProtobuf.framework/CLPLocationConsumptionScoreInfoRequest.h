/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CLPLocationConsumptionScoreInfoRequest : PBRequest <NSCopying> {

	NSMutableArray* _locationConsumptionScoreInfos;

}

@property (nonatomic,retain) NSMutableArray * locationConsumptionScoreInfos;              //@synthesize locationConsumptionScoreInfos=_locationConsumptionScoreInfos - In the implementation block
+(Class)locationConsumptionScoreInfoType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addLocationConsumptionScoreInfo:(id)arg1 ;
-(unsigned long long)locationConsumptionScoreInfosCount;
-(void)clearLocationConsumptionScoreInfos;
-(id)locationConsumptionScoreInfoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)locationConsumptionScoreInfos;
-(void)setLocationConsumptionScoreInfos:(NSMutableArray *)arg1 ;
@end

