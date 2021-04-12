/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HKCodableQuantitySeriesEnumerationResultCollection : PBCodable <NSCopying> {

	double _latestSampleStartTime;
	NSMutableArray* _results;
	SCD_Struct_HK11 _has;

}

@property (nonatomic,retain) NSMutableArray * results;                   //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) BOOL hasLatestSampleStartTime; 
@property (assign,nonatomic) double latestSampleStartTime;               //@synthesize latestSampleStartTime=_latestSampleStartTime - In the implementation block
+(Class)resultsType;
-(void)setResults:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)results;
-(void)clearResults;
-(void)mergeFrom:(id)arg1 ;
-(void)setLatestSampleStartTime:(double)arg1 ;
-(void)setHasLatestSampleStartTime:(BOOL)arg1 ;
-(BOOL)hasLatestSampleStartTime;
-(double)latestSampleStartTime;
-(void)addResults:(id)arg1 ;
-(id)description;
-(unsigned long long)resultsCount;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)resultsAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

