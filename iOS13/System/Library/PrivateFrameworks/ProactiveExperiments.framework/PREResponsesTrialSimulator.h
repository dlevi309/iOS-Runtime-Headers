/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

#import <libobjc.A.dylib/PREResponsesTrialProtocol.h>
#import <libobjc.A.dylib/PREResponsesMetricsProtocol.h>

@class NSString;

@interface PREResponsesTrialSimulator : NSObject <PREResponsesTrialProtocol, PREResponsesMetricsProtocol> {

	NSString* _inferenceModelName;
	NSString* _inferenceModelFilePath;
	NSString* _inferenceModelConfigPath;
	NSString* _espressoBinFilePath;
	NSString* _espressoShapeFilePath;
	NSString* _lexiconFilePath;
	NSString* _experimentId;
	NSString* _treatmentId;

}

@property (nonatomic,readonly) NSString * inferenceModelName;                    //@synthesize inferenceModelName=_inferenceModelName - In the implementation block
@property (nonatomic,readonly) NSString * inferenceModelFilePath;                //@synthesize inferenceModelFilePath=_inferenceModelFilePath - In the implementation block
@property (nonatomic,readonly) NSString * inferenceModelConfigPath;              //@synthesize inferenceModelConfigPath=_inferenceModelConfigPath - In the implementation block
@property (nonatomic,readonly) NSString * espressoBinFilePath;                   //@synthesize espressoBinFilePath=_espressoBinFilePath - In the implementation block
@property (nonatomic,readonly) NSString * espressoShapeFilePath;                 //@synthesize espressoShapeFilePath=_espressoShapeFilePath - In the implementation block
@property (nonatomic,readonly) NSString * lexiconFilePath;                       //@synthesize lexiconFilePath=_lexiconFilePath - In the implementation block
@property (nonatomic,readonly) NSString * experimentId;                          //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) NSString * treatmentId;                           //@synthesize treatmentId=_treatmentId - In the implementation block
-(id)init;
-(NSString *)experimentId;
-(NSString *)treatmentId;
-(NSString *)espressoBinFilePath;
-(NSString *)inferenceModelFilePath;
-(NSString *)inferenceModelConfigPath;
-(NSString *)inferenceModelName;
-(NSString *)espressoShapeFilePath;
-(NSString *)lexiconFilePath;
-(void)registerResponsesGenerated:(id)arg1 ;
-(void)registerResponseTapped:(id)arg1 ;
@end

