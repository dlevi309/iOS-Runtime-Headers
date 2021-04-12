/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCohorts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)cohorts;
-(void)addCohorts:(id)arg1 ;
-(unsigned long long)cohortsCount;
-(void)clearCohorts;
-(id)cohortsAtIndex:(unsigned long long)arg1 ;
@end

