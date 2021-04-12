/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSString, _DPValueRange, NSNumber, _DPPrivacyBudget, NSDictionary;

@interface _DPKeyProperties : NSObject {

	BOOL _keyPatternsAllowed;
	NSString* _propertiesName;
	_DPValueRange* _possibleRange;
	NSNumber* _acceptableError;
	_DPValueRange* _trimmedScale;
	NSString* _noiseDistribution;
	_DPPrivacyBudget* _budget;
	NSNumber* _privacyParameter;
	unsigned long long _fragmentWidth;
	unsigned long long _fragmentCount;
	NSString* _serverAlgorithmString;
	NSDictionary* _parameterDictionary;
	unsigned long long _submissionPriority;
	unsigned long long _dataAlgorithm;
	unsigned long long _privatizationAlgorithm;
	unsigned long long _transport;

}

@property (nonatomic,readonly) unsigned long long dataAlgorithm;                       //@synthesize dataAlgorithm=_dataAlgorithm - In the implementation block
@property (nonatomic,readonly) unsigned long long privatizationAlgorithm;              //@synthesize privatizationAlgorithm=_privatizationAlgorithm - In the implementation block
@property (nonatomic,readonly) unsigned long long transport;                           //@synthesize transport=_transport - In the implementation block
@property (nonatomic,copy,readonly) NSString * propertiesName;                         //@synthesize propertiesName=_propertiesName - In the implementation block
@property (nonatomic,readonly) _DPValueRange * possibleRange;                          //@synthesize possibleRange=_possibleRange - In the implementation block
@property (nonatomic,readonly) NSNumber * acceptableError;                             //@synthesize acceptableError=_acceptableError - In the implementation block
@property (nonatomic,readonly) _DPValueRange * trimmedScale;                           //@synthesize trimmedScale=_trimmedScale - In the implementation block
@property (nonatomic,copy,readonly) NSString * noiseDistribution;                      //@synthesize noiseDistribution=_noiseDistribution - In the implementation block
@property (nonatomic,readonly) _DPPrivacyBudget * budget;                              //@synthesize budget=_budget - In the implementation block
@property (nonatomic,readonly) NSNumber * privacyParameter;                            //@synthesize privacyParameter=_privacyParameter - In the implementation block
@property (nonatomic,readonly) unsigned long long fragmentWidth;                       //@synthesize fragmentWidth=_fragmentWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long fragmentCount;                       //@synthesize fragmentCount=_fragmentCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverAlgorithmString;                  //@synthesize serverAlgorithmString=_serverAlgorithmString - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameterDictionary;                     //@synthesize parameterDictionary=_parameterDictionary - In the implementation block
@property (nonatomic,readonly) BOOL keyPatternsAllowed;                                //@synthesize keyPatternsAllowed=_keyPatternsAllowed - In the implementation block
@property (nonatomic,readonly) unsigned long long submissionPriority;                  //@synthesize submissionPriority=_submissionPriority - In the implementation block
+(void)initialize;
+(id)keyPropertiesForName:(id)arg1 ;
+(id)propertiesFromFile:(id)arg1 ;
+(id)keyPropertiesFromDictionary:(id)arg1 ;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)transport;
-(_DPPrivacyBudget *)budget;
-(unsigned long long)fragmentCount;
-(_DPValueRange *)possibleRange;
-(NSNumber *)privacyParameter;
-(unsigned long long)fragmentWidth;
-(unsigned long long)dataAlgorithm;
-(unsigned long long)privatizationAlgorithm;
-(NSDictionary *)parameterDictionary;
-(BOOL)keyPatternsAllowed;
-(NSString *)propertiesName;
-(NSString *)serverAlgorithmString;
-(unsigned long long)submissionPriority;
-(id)privatizationAlgorithmString;
-(NSNumber *)acceptableError;
-(_DPValueRange *)trimmedScale;
-(NSString *)noiseDistribution;
@end

