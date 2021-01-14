/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList : PBCodable <NSCopying> {

	NSMutableArray* _cohorts;

}

@property (nonatomic,retain) NSMutableArray * cohorts;              //@synthesize cohorts=_cohorts - In the implementation block
+(Class)cohortsType;
-(id)cohortWithPreferredType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setCohorts:(NSMutableArray *)arg1 ;
-(id)description;
-(NSMutableArray *)cohorts;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addCohorts:(id)arg1 ;
-(unsigned long long)cohortsCount;
-(void)clearCohorts;
-(id)cohortsAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

