/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMetrics:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)treatments;
-(NSMutableArray *)metrics;
-(TRISubject *)subject;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addTreatment:(id)arg1 ;
-(unsigned long long)treatmentsCount;
-(unsigned long long)hash;
-(TRISystemDimensions *)systemDimensions;
-(void)setUserDimensions:(NSMutableArray *)arg1 ;
-(void)setSystemDimensions:(TRISystemDimensions *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addUserDimension:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addMetric:(id)arg1 ;
-(void)setSubject:(TRISubject *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)metricsCount;
-(void)clearMetrics;
-(id)metricAtIndex:(unsigned long long)arg1 ;
-(void)clearTreatments;
-(id)treatmentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)userDimensionsCount;
-(void)clearUserDimensions;
-(id)userDimensionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSubject;
-(BOOL)hasSystemDimensions;
-(void)setTreatments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)userDimensions;
@end

