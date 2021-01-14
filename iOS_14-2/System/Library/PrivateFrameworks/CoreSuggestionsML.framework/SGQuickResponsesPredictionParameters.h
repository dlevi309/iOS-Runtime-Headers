/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class NSString;

@interface SGQuickResponsesPredictionParameters : NSObject {

	BOOL _isPersonalizationDisabled;
	BOOL _isReplyTextRandomized;
	BOOL _isPerCategory;
	BOOL _dynamicLabelsEnabled;
	BOOL _hasNegativeClass;
	double _weightForCategoryAverage;
	double _weightForCategoryMax;
	double _weightForIndividualModel;
	double _classDiscount;
	double _responsesBonus;
	double _minToShowThreshold;
	unsigned long long _defaultResponsesToReturn;
	unsigned long long _responsesToShowAtTopForDiversity;
	double _personalizationExplorationFactor;
	double _personalizationDisplayedPseudocount;
	double _personalizationSelectedPseudocountPerSemanticClass;
	unsigned long long _maxPromptLength;
	double _maxPromptWindowSeconds;
	NSString* _promptJoiningString;
	NSString* _modelTypeName;
	NSString* _subModelKeyString;
	double _negativeClassMaximumToPredict;

}

@property (nonatomic,readonly) BOOL isPersonalizationDisabled;                                         //@synthesize isPersonalizationDisabled=_isPersonalizationDisabled - In the implementation block
@property (nonatomic,readonly) BOOL isReplyTextRandomized;                                             //@synthesize isReplyTextRandomized=_isReplyTextRandomized - In the implementation block
@property (nonatomic,readonly) BOOL isPerCategory;                                                     //@synthesize isPerCategory=_isPerCategory - In the implementation block
@property (nonatomic,readonly) double weightForCategoryAverage;                                        //@synthesize weightForCategoryAverage=_weightForCategoryAverage - In the implementation block
@property (nonatomic,readonly) double weightForCategoryMax;                                            //@synthesize weightForCategoryMax=_weightForCategoryMax - In the implementation block
@property (nonatomic,readonly) double weightForIndividualModel;                                        //@synthesize weightForIndividualModel=_weightForIndividualModel - In the implementation block
@property (nonatomic,readonly) double classDiscount;                                                   //@synthesize classDiscount=_classDiscount - In the implementation block
@property (nonatomic,readonly) double responsesBonus;                                                  //@synthesize responsesBonus=_responsesBonus - In the implementation block
@property (nonatomic,readonly) double minToShowThreshold;                                              //@synthesize minToShowThreshold=_minToShowThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long defaultResponsesToReturn;                            //@synthesize defaultResponsesToReturn=_defaultResponsesToReturn - In the implementation block
@property (nonatomic,readonly) unsigned long long responsesToShowAtTopForDiversity;                    //@synthesize responsesToShowAtTopForDiversity=_responsesToShowAtTopForDiversity - In the implementation block
@property (nonatomic,readonly) double personalizationExplorationFactor;                                //@synthesize personalizationExplorationFactor=_personalizationExplorationFactor - In the implementation block
@property (nonatomic,readonly) double personalizationDisplayedPseudocount;                             //@synthesize personalizationDisplayedPseudocount=_personalizationDisplayedPseudocount - In the implementation block
@property (nonatomic,readonly) double personalizationSelectedPseudocountPerSemanticClass;              //@synthesize personalizationSelectedPseudocountPerSemanticClass=_personalizationSelectedPseudocountPerSemanticClass - In the implementation block
@property (nonatomic,readonly) unsigned long long maxPromptLength;                                     //@synthesize maxPromptLength=_maxPromptLength - In the implementation block
@property (nonatomic,readonly) double maxPromptWindowSeconds;                                          //@synthesize maxPromptWindowSeconds=_maxPromptWindowSeconds - In the implementation block
@property (nonatomic,readonly) NSString * promptJoiningString;                                         //@synthesize promptJoiningString=_promptJoiningString - In the implementation block
@property (nonatomic,readonly) NSString * modelTypeName;                                               //@synthesize modelTypeName=_modelTypeName - In the implementation block
@property (nonatomic,readonly) NSString * subModelKeyString;                                           //@synthesize subModelKeyString=_subModelKeyString - In the implementation block
@property (nonatomic,readonly) BOOL dynamicLabelsEnabled;                                              //@synthesize dynamicLabelsEnabled=_dynamicLabelsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasNegativeClass;                                                  //@synthesize hasNegativeClass=_hasNegativeClass - In the implementation block
@property (nonatomic,readonly) double negativeClassMaximumToPredict;                                   //@synthesize negativeClassMaximumToPredict=_negativeClassMaximumToPredict - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)maxPromptLength;
-(NSString *)promptJoiningString;
-(double)maxPromptWindowSeconds;
-(BOOL)hasNegativeClass;
-(NSString *)modelTypeName;
-(BOOL)isPersonalizationDisabled;
-(BOOL)isReplyTextRandomized;
-(BOOL)isPerCategory;
-(double)weightForCategoryAverage;
-(double)weightForCategoryMax;
-(double)weightForIndividualModel;
-(double)classDiscount;
-(double)responsesBonus;
-(double)minToShowThreshold;
-(unsigned long long)defaultResponsesToReturn;
-(unsigned long long)responsesToShowAtTopForDiversity;
-(double)personalizationExplorationFactor;
-(double)personalizationDisplayedPseudocount;
-(double)personalizationSelectedPseudocountPerSemanticClass;
-(NSString *)subModelKeyString;
-(BOOL)dynamicLabelsEnabled;
-(double)negativeClassMaximumToPredict;
@end
