/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HDAWDHealthKitCoachingFeatureGroup : PBCodable <NSCopying> {

	NSMutableArray* _futures;
	NSMutableArray* _pasts;

}

@property (nonatomic,retain) NSMutableArray * pasts;                //@synthesize pasts=_pasts - In the implementation block
@property (nonatomic,retain) NSMutableArray * futures;              //@synthesize futures=_futures - In the implementation block
+(Class)pastType;
+(Class)futureType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)pasts;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSMutableArray *)futures;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addPast:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addFuture:(id)arg1 ;
-(unsigned long long)pastsCount;
-(void)clearPasts;
-(id)pastAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)futuresCount;
-(void)clearFutures;
-(id)futureAtIndex:(unsigned long long)arg1 ;
-(void)setPasts:(NSMutableArray *)arg1 ;
-(void)setFutures:(NSMutableArray *)arg1 ;
@end

