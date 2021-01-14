/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDCoreRoutineFMCDailyAssessments : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _assessments;
	SCD_Struct_AW5 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * assessments;              //@synthesize assessments=_assessments - In the implementation block
+(Class)assessmentType;
-(BOOL)valid:(id*)arg1 ;
-(NSString *)description;
-(id)_init;
-(long long)metricId;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)assessmentsCount;
-(id)assessmentAtIndex:(unsigned long long)arg1 ;
-(void)addAssessment:(id)arg1 ;
-(void)setAssessments:(NSMutableArray *)arg1 ;
-(void)clearAssessments;
-(NSMutableArray *)assessments;
@end

