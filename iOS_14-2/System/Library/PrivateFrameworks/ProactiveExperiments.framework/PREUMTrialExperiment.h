/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

#import <ProactiveExperiments/ProactiveExperiments-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PREUMTrialExperiment : PBCodable <NSCopying> {

	NSString* _experimentId;
	NSString* _treatmentId;
	NSString* _treatmentModelName;

}

@property (nonatomic,readonly) BOOL hasExperimentId; 
@property (nonatomic,retain) NSString * experimentId;                    //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) BOOL hasTreatmentId; 
@property (nonatomic,retain) NSString * treatmentId;                     //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) BOOL hasTreatmentModelName; 
@property (nonatomic,retain) NSString * treatmentModelName;              //@synthesize treatmentModelName=_treatmentModelName - In the implementation block
-(id)dictionaryRepresentation;
-(void)setExperimentId:(NSString *)arg1 ;
-(BOOL)hasExperimentId;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)treatmentId;
-(void)setTreatmentId:(NSString *)arg1 ;
-(id)description;
-(NSString *)experimentId;
-(BOOL)hasTreatmentId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTreatmentModelName;
-(NSString *)treatmentModelName;
-(void)setTreatmentModelName:(NSString *)arg1 ;
@end

