/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictionsInternals.framework/ProactiveInputPredictionsInternals
*/

#import <libobjc.A.dylib/PSGResponseSuggestionsExpConfigProtocol.h>

@class NSString, TRIClient;

@interface PSGResponseSuggestionsExpConfig : NSObject <PSGResponseSuggestionsExpConfigProtocol> {

	TRIClient* _trialClient;
	NSString* _namespaceName;
	BOOL _isMLModelEnabled;
	NSString* _treatmentName;
	NSString* _experimentId;
	NSString* _treatmentId;
	NSString* _inferenceModelFilePath;
	NSString* _inferenceModelConfigPath;
	NSString* _espressoBinFilePath;

}

@property (nonatomic,readonly) NSString * treatmentName;                         //@synthesize treatmentName=_treatmentName - In the implementation block
@property (nonatomic,readonly) NSString * experimentId;                          //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) NSString * treatmentId;                           //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) BOOL isMLModelEnabled;                            //@synthesize isMLModelEnabled=_isMLModelEnabled - In the implementation block
@property (nonatomic,readonly) NSString * inferenceModelFilePath;                //@synthesize inferenceModelFilePath=_inferenceModelFilePath - In the implementation block
@property (nonatomic,readonly) NSString * inferenceModelConfigPath;              //@synthesize inferenceModelConfigPath=_inferenceModelConfigPath - In the implementation block
@property (nonatomic,readonly) NSString * espressoBinFilePath;                   //@synthesize espressoBinFilePath=_espressoBinFilePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)treatmentId;
-(NSString *)experimentId;
-(BOOL)isMLModelEnabled;
-(NSString *)inferenceModelConfigPath;
-(NSString *)espressoBinFilePath;
-(NSString *)treatmentName;
-(id)initWithNamespaceName:(id)arg1 ;
-(void)_updateFactorLevels;
-(void)_setDefaultValuesForFactors;
-(NSString *)inferenceModelFilePath;
@end

