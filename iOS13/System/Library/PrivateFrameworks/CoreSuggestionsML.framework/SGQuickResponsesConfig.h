/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class SGModelHyperparameters, NSArray, SGQuickResponsesReplies, SGQuickResponsesClassificationParameters, SGQuickResponsesPredictionParameters, SGCustomResponsesParameters, NSString, PMLSessionDescriptor;

@interface SGQuickResponsesConfig : NSObject {

	SGModelHyperparameters* _modelHyperparameters;
	NSArray* _preprocessingMethods;
	NSArray* _labels;
	SGQuickResponsesReplies* _replies;
	SGQuickResponsesClassificationParameters* _classificationParams;
	SGQuickResponsesPredictionParameters* _predictionParams;
	SGCustomResponsesParameters* _customResponsesParameters;
	NSString* _language;
	unsigned long long _mode;
	PMLSessionDescriptor* _sessionDescriptor;

}

@property (nonatomic,readonly) SGModelHyperparameters * modelHyperparameters;                                //@synthesize modelHyperparameters=_modelHyperparameters - In the implementation block
@property (nonatomic,readonly) NSArray * preprocessingMethods;                                               //@synthesize preprocessingMethods=_preprocessingMethods - In the implementation block
@property (nonatomic,readonly) NSArray * labels;                                                             //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) SGQuickResponsesReplies * replies;                                            //@synthesize replies=_replies - In the implementation block
@property (nonatomic,readonly) SGQuickResponsesClassificationParameters * classificationParams;              //@synthesize classificationParams=_classificationParams - In the implementation block
@property (nonatomic,readonly) SGQuickResponsesPredictionParameters * predictionParams;                      //@synthesize predictionParams=_predictionParams - In the implementation block
@property (nonatomic,readonly) SGCustomResponsesParameters * customResponsesParameters;                      //@synthesize customResponsesParameters=_customResponsesParameters - In the implementation block
@property (nonatomic,copy,readonly) NSString * language;                                                     //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                      //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) PMLSessionDescriptor * sessionDescriptor;                                     //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
-(unsigned long long)mode;
-(SGQuickResponsesReplies *)replies;
-(NSArray *)labels;
-(NSString *)language;
-(PMLSessionDescriptor *)sessionDescriptor;
-(id)initWithLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3 ;
-(SGQuickResponsesPredictionParameters *)predictionParams;
-(SGCustomResponsesParameters *)customResponsesParameters;
-(SGQuickResponsesClassificationParameters *)classificationParams;
-(id)initWithLanguage:(id)arg1 mode:(unsigned long long)arg2 dictionary:(id)arg3 ;
-(SGModelHyperparameters *)modelHyperparameters;
-(NSArray *)preprocessingMethods;
@end

