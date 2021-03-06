/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addPredictedLocationsOfInterest:(id)arg1 ;
-(unsigned long long)predictedLocationsOfInterestsCount;
-(void)clearPredictedLocationsOfInterests;
-(id)predictedLocationsOfInterestAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)predictedLocationsOfInterests;
-(void)setPredictedLocationsOfInterests:(NSMutableArray *)arg1 ;
@end

