/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKCodeRecordTransport, NSString;

@interface PFLUploadDataPointRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying> {

	double _accuracy;
	long long _flattenedPrivatizedWeightCount;
	double _loss;
	long long _modelVersion;
	CKCodeRecordTransport* _flattenedPrivatizedWeightData;
	NSString* _flattenedPrivatizedWeightType;
	NSString* _taskId;
	SCD_Struct_PF2 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasFlattenedPrivatizedWeightData; 
@property (nonatomic,retain) CKCodeRecordTransport * flattenedPrivatizedWeightData;              //@synthesize flattenedPrivatizedWeightData=_flattenedPrivatizedWeightData - In the implementation block
@property (assign,nonatomic) BOOL hasFlattenedPrivatizedWeightCount; 
@property (assign,nonatomic) long long flattenedPrivatizedWeightCount;                           //@synthesize flattenedPrivatizedWeightCount=_flattenedPrivatizedWeightCount - In the implementation block
@property (nonatomic,readonly) BOOL hasFlattenedPrivatizedWeightType; 
@property (nonatomic,retain) NSString * flattenedPrivatizedWeightType;                           //@synthesize flattenedPrivatizedWeightType=_flattenedPrivatizedWeightType - In the implementation block
@property (assign,nonatomic) BOOL hasAccuracy; 
@property (assign,nonatomic) double accuracy;                                                    //@synthesize accuracy=_accuracy - In the implementation block
@property (assign,nonatomic) BOOL hasLoss; 
@property (assign,nonatomic) double loss;                                                        //@synthesize loss=_loss - In the implementation block
@property (nonatomic,readonly) BOOL hasTaskId; 
@property (nonatomic,retain) NSString * taskId;                                                  //@synthesize taskId=_taskId - In the implementation block
@property (assign,nonatomic) BOOL hasModelVersion; 
@property (assign,nonatomic) long long modelVersion;                                             //@synthesize modelVersion=_modelVersion - In the implementation block
-(id)dictionaryRepresentation;
-(long long)modelVersion;
-(id)extractRecordTransports;
-(void)substituteRecordTransports:(id)arg1 ;
-(NSString *)taskId;
-(BOOL)hasModelVersion;
-(double)loss;
-(void)setHasModelVersion:(BOOL)arg1 ;
-(void)setModelVersion:(long long)arg1 ;
-(void)setAccuracy:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(void)setTaskId:(NSString *)arg1 ;
-(double)accuracy;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasLoss;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasAccuracy:(BOOL)arg1 ;
-(BOOL)hasAccuracy;
-(CKCodeRecordTransport *)flattenedPrivatizedWeightData;
-(void)setFlattenedPrivatizedWeightData:(CKCodeRecordTransport *)arg1 ;
-(long long)flattenedPrivatizedWeightCount;
-(void)setFlattenedPrivatizedWeightCount:(long long)arg1 ;
-(NSString *)flattenedPrivatizedWeightType;
-(void)setFlattenedPrivatizedWeightType:(NSString *)arg1 ;
-(void)setLoss:(double)arg1 ;
-(BOOL)hasFlattenedPrivatizedWeightData;
-(void)setHasFlattenedPrivatizedWeightCount:(BOOL)arg1 ;
-(BOOL)hasFlattenedPrivatizedWeightCount;
-(BOOL)hasFlattenedPrivatizedWeightType;
-(void)setHasLoss:(BOOL)arg1 ;
-(BOOL)hasTaskId;
@end

