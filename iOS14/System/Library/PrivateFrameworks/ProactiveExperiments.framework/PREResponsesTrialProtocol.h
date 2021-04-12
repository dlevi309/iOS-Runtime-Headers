/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

@class NSString;


@protocol PREResponsesTrialProtocol
@property (readonly) NSString * inferenceModelName; 
@property (readonly) NSString * inferenceModelFilePath; 
@property (readonly) NSString * inferenceModelConfigPath; 
@property (readonly) NSString * espressoBinFilePath; 
@property (readonly) NSString * lexiconFilePath; 
@property (readonly) NSString * experimentId; 
@property (readonly) NSString * treatmentId; 
@required
-(NSString *)treatmentId;
-(NSString *)experimentId;
-(NSString *)inferenceModelConfigPath;
-(NSString *)espressoBinFilePath;
-(NSString *)inferenceModelFilePath;
-(NSString *)inferenceModelName;
-(NSString *)lexiconFilePath;

@end

