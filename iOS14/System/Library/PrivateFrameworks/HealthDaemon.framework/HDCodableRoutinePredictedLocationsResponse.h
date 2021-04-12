/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HDCodableRoutinePredictedLocationsResponse : PBCodable <NSCopying> {

	NSMutableArray* _predictedLocationsOfInterests;

}

@property (nonatomic,retain) NSMutableArray * predictedLocationsOfInterests;              //@synthesize predictedLocationsOfInterests=_predictedLocationsOfInterests - In the implementation block
+(Class)predictedLocationsOfInterestType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addPredictedLocationsOfInterest:(id)arg1 ;
-(unsigned long long)predictedLocationsOfInterestsCount;
-(void)clearPredictedLocationsOfInterests;
-(id)predictedLocationsOfInterestAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)predictedLocationsOfInterests;
-(void)setPredictedLocationsOfInterests:(NSMutableArray *)arg1 ;
@end

