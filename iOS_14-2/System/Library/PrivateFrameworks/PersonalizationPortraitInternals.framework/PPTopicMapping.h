/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSString, MLModel;

@interface PPTopicMapping : NSObject {

	NSString* _mappingId;
	MLModel* _topicModel;
	MLModel* _locationModel;
	MLModel* _entityModel;
	MLModel* _unmappingModel;
	MLModel* _activationModel;
	MLModel* _unmappingActivationModel;

}
+(id)_renamePreviousRecord:(id)arg1 ;
+(BOOL)_modelExists:(id)arg1 ;
+(id)_fetchNumberedListOfModels:(id)arg1 ;
-(id)_qidForInteger:(long long)arg1 ;
-(long long)_integerForQID:(id)arg1 ;
-(id)initWithMappingId:(id)arg1 ;
-(id)initWithModels:(id)arg1 entityModel:(id)arg2 locationModel:(id)arg3 unmappingModel:(id)arg4 activationModel:(id)arg5 unmappingActivationModel:(id)arg6 mappingId:(id)arg7 ;
-(id)_forwardMappingPass:(id)arg1 features:(id)arg2 record:(id)arg3 previousRecord:(id)arg4 stop:(BOOL*)arg5 error:(id*)arg6 ;
-(id)mappedTopics:(id*)arg1 ;
-(id)unmappedTopics:(id)arg1 ;
@end

