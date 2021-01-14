/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictionsInternals.framework/ProactiveInputPredictionsInternals
*/

@class NSString;


@protocol PSGWordBoundarySuggestionsExpConfigProtocol <PSGExpConfigProtocol>
@property (nonatomic,readonly) BOOL isMLModelEnabled; 
@property (nonatomic,readonly) NSString * inferenceModelConfigPath; 
@property (nonatomic,readonly) NSString * espressoBinFilePath; 
@required
-(BOOL)isMLModelEnabled;
-(NSString *)inferenceModelConfigPath;
-(NSString *)espressoBinFilePath;

@end

