/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorConfiguration.h>

@class NSArray;

@interface BWIntelligentDistortionCorrectionProcessorControllerConfiguration : BWStillImageProcessorConfiguration {

	BOOL _intelligentDistortionCorrectionEnabled;
	NSArray* _portTypesWithGeometricDistortionCorrectionEnabled;
	int _intelligentDistortionCorrectionVersion;
	SCD_Struct_BW154 _processorConfig;

}

@property (assign,nonatomic) BOOL intelligentDistortionCorrectionEnabled;                              //@synthesize intelligentDistortionCorrectionEnabled=_intelligentDistortionCorrectionEnabled - In the implementation block
@property (nonatomic,retain) NSArray * portTypesWithGeometricDistortionCorrectionEnabled;              //@synthesize portTypesWithGeometricDistortionCorrectionEnabled=_portTypesWithGeometricDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) int intelligentDistortionCorrectionVersion;                               //@synthesize intelligentDistortionCorrectionVersion=_intelligentDistortionCorrectionVersion - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW154 processorConfig;                                         //@synthesize processorConfig=_processorConfig - In the implementation block
-(SCD_Struct_BW154)processorConfig;
-(void)setIntelligentDistortionCorrectionEnabled:(BOOL)arg1 ;
-(int)intelligentDistortionCorrectionVersion;
-(void)setPortTypesWithGeometricDistortionCorrectionEnabled:(NSArray *)arg1 ;
-(NSArray *)portTypesWithGeometricDistortionCorrectionEnabled;
-(BOOL)intelligentDistortionCorrectionEnabled;
-(void)setIntelligentDistortionCorrectionVersion:(int)arg1 ;
-(void)setProcessorConfig:(SCD_Struct_BW154)arg1 ;
-(void)dealloc;
@end

