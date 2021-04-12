/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, TRISubject, TRISystemDimensions;

@interface TRIDenormalizedEvent : PBCodable <NSCopying> {

	NSMutableArray* _metrics;
	TRISubject* _subject;
	TRISystemDimensions* _systemDimensions;
	NSMutableArray* _treatments;
	NSMutableArray* _userDimensions;

}

@property (nonatomic,readonly) BOOL hasSubject; 
@property (nonatomic,retain) TRISubject * subject;                                //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSMutableArray * treatments;                         //@synthesize treatments=_treatments - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemDimensions; 
@property (nonatomic,retain) TRISystemDimensions * systemDimensions;              //@synthesize systemDimensions=_systemDimensions - In the implementation block
@property (nonatomic,retain) NSMutableArray * userDimensions;                     //@synthesize userDimensions=_userDimensions - In the implementation block
@property (nonatomic,retain) NSMutableArray * metrics;                            //@synthesize metrics=_metrics - In the implementation block
+(Class)metricType;
+(Class)treatmentType;
+(Class)userDimensionType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)metrics;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(TRISubject *)subject;
-(void)setSubject:(TRISubject *)arg1 ;
-(void)setMetrics:(NSMutableArray *)arg1 ;
-(void)addMetric:(id)arg1 ;
-(void)clearMetrics;
-(unsigned long long)metricsCount;
-(id)metricAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)treatments;
-(TRISystemDimensions *)systemDimensions;
-(void)setUserDimensions:(NSMutableArray *)arg1 ;
-(void)setSystemDimensions:(TRISystemDimensions *)arg1 ;
-(void)addUserDimension:(id)arg1 ;
-(void)setTreatments:(NSMutableArray *)arg1 ;
-(void)addTreatment:(id)arg1 ;
-(unsigned long long)treatmentsCount;
-(void)clearTreatments;
-(id)treatmentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)userDimensionsCount;
-(void)clearUserDimensions;
-(id)userDimensionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSubject;
-(BOOL)hasSystemDimensions;
-(NSMutableArray *)userDimensions;
@end

