/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

#import <libobjc.A.dylib/PREResponsesTrialProtocol.h>

@class NSString, TRIClient;

@interface PREResponsesTrial : NSObject <PREResponsesTrialProtocol> {

	TRIClient* _trialClient;
	NSString* _inferenceModelName;
	NSString* _inferenceModelFilePath;
	NSString* _inferenceModelConfigPath;
	NSString* _espressoBinFilePath;
	NSString* _lexiconFilePath;
	NSString* _experimentId;
	NSString* _treatmentId;

}

@property (nonatomic,readonly) NSString * inferenceModelName;                    //@synthesize inferenceModelName=_inferenceModelName - In the implementation block
@property (nonatomic,readonly) NSString * inferenceModelFilePath;                //@synthesize inferenceModelFilePath=_inferenceModelFilePath - In the implementation block
@property (nonatomic,readonly) NSString * inferenceModelConfigPath;              //@synthesize inferenceModelConfigPath=_inferenceModelConfigPath - In the implementation block
@property (nonatomic,readonly) NSString * espressoBinFilePath;                   //@synthesize espressoBinFilePath=_espressoBinFilePath - In the implementation block
@property (nonatomic,readonly) NSString * lexiconFilePath;                       //@synthesize lexiconFilePath=_lexiconFilePath - In the implementation block
@property (nonatomic,readonly) NSString * experimentId;                          //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) NSString * treatmentId;                           //@synthesize treatmentId=_treatmentId - In the implementation block
-(id)init;
-(void)updateFactorLevels;
-(NSString *)treatmentId;
-(NSString *)experimentId;
-(NSString *)inferenceModelConfigPath;
-(NSString *)espressoBinFilePath;
-(NSString *)inferenceModelFilePath;
-(NSString *)inferenceModelName;
-(NSString *)lexiconFilePath;
@end

