/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PFLTaskLocalPrivacyParams, PFLTaskLocalTrainingParams;

@interface PFLTask : PBCodable <NSCopying> {

	long long _modelVersion;
	long long _updatableWeightsCount;
	NSString* _dataSourceId;
	PFLTaskLocalPrivacyParams* _localPrivacyParams;
	PFLTaskLocalTrainingParams* _localTrainingParams;
	NSString* _modelName;
	NSString* _taskId;
	SCD_Struct_PF1 _has;

}

@property (nonatomic,readonly) BOOL hasTaskId; 
@property (nonatomic,retain) NSString * taskId;                                             //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,readonly) BOOL hasDataSourceId; 
@property (nonatomic,retain) NSString * dataSourceId;                                       //@synthesize dataSourceId=_dataSourceId - In the implementation block
@property (nonatomic,readonly) BOOL hasModelName; 
@property (nonatomic,retain) NSString * modelName;                                          //@synthesize modelName=_modelName - In the implementation block
@property (assign,nonatomic) BOOL hasModelVersion; 
@property (assign,nonatomic) long long modelVersion;                                        //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalPrivacyParams; 
@property (nonatomic,retain) PFLTaskLocalPrivacyParams * localPrivacyParams;                //@synthesize localPrivacyParams=_localPrivacyParams - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalTrainingParams; 
@property (nonatomic,retain) PFLTaskLocalTrainingParams * localTrainingParams;              //@synthesize localTrainingParams=_localTrainingParams - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatableWeightsCount; 
@property (assign,nonatomic) long long updatableWeightsCount;                               //@synthesize updatableWeightsCount=_updatableWeightsCount - In the implementation block
-(id)dictionaryRepresentation;
-(long long)modelVersion;
-(NSString *)taskId;
-(BOOL)hasModelVersion;
-(void)setHasModelVersion:(BOOL)arg1 ;
-(void)setModelVersion:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)modelName;
-(id)description;
-(void)setTaskId:(NSString *)arg1 ;
-(void)setModelName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTaskId;
-(NSString *)dataSourceId;
-(PFLTaskLocalTrainingParams *)localTrainingParams;
-(PFLTaskLocalPrivacyParams *)localPrivacyParams;
-(void)setDataSourceId:(NSString *)arg1 ;
-(void)setLocalPrivacyParams:(PFLTaskLocalPrivacyParams *)arg1 ;
-(void)setLocalTrainingParams:(PFLTaskLocalTrainingParams *)arg1 ;
-(BOOL)hasDataSourceId;
-(BOOL)hasModelName;
-(BOOL)hasLocalPrivacyParams;
-(BOOL)hasLocalTrainingParams;
-(void)setUpdatableWeightsCount:(long long)arg1 ;
-(void)setHasUpdatableWeightsCount:(BOOL)arg1 ;
-(BOOL)hasUpdatableWeightsCount;
-(long long)updatableWeightsCount;
@end

