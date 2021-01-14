/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictionsInternals.framework/ProactiveInputPredictionsInternals
*/

#import <libobjc.A.dylib/PSGResponseSuggestionsExpConfigProtocol.h>

@class NSString;

@interface PSGResponseSuggestionsExpConfigDefaults : NSObject <PSGResponseSuggestionsExpConfigProtocol> {

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
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isMLModelEnabled;
-(NSString *)inferenceModelConfigPath;
-(NSString *)espressoBinFilePath;
-(NSString *)treatmentName;
-(BOOL)isEqualToConfig:(id)arg1 ;
-(NSString *)inferenceModelFilePath;
@end

