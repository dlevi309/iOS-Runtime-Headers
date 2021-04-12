/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineRankRoutesRequestedInstance : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _highestRankedRouteScore;
	int _numberOfInputRoutes;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfInputRoutes; 
@property (assign,nonatomic) int numberOfInputRoutes;                      //@synthesize numberOfInputRoutes=_numberOfInputRoutes - In the implementation block
@property (assign,nonatomic) BOOL hasHighestRankedRouteScore; 
@property (assign,nonatomic) int highestRankedRouteScore;                  //@synthesize highestRankedRouteScore=_highestRankedRouteScore - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNumberOfInputRoutes:(int)arg1 ;
-(void)setHasNumberOfInputRoutes:(BOOL)arg1 ;
-(BOOL)hasNumberOfInputRoutes;
-(void)setHighestRankedRouteScore:(int)arg1 ;
-(void)setHasHighestRankedRouteScore:(BOOL)arg1 ;
-(BOOL)hasHighestRankedRouteScore;
-(int)numberOfInputRoutes;
-(int)highestRankedRouteScore;
@end

