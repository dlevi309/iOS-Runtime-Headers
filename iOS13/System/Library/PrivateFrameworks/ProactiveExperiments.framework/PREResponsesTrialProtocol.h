/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

@class NSString;


@protocol PREResponsesTrialProtocol
@property (readonly) NSString * inferenceModelName; 
@property (readonly) NSString * inferenceModelFilePath; 
@property (readonly) NSString * inferenceModelConfigPath; 
@property (readonly) NSString * espressoBinFilePath; 
@property (readonly) NSString * espressoShapeFilePath; 
@property (readonly) NSString * lexiconFilePath; 
@property (readonly) NSString * experimentId; 
@property (readonly) NSString * treatmentId; 
@required
-(NSString *)experimentId;
-(NSString *)treatmentId;
-(NSString *)espressoBinFilePath;
-(NSString *)inferenceModelFilePath;
-(NSString *)inferenceModelConfigPath;
-(NSString *)inferenceModelName;
-(NSString *)espressoShapeFilePath;
-(NSString *)lexiconFilePath;

@end

