/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@class NSString, NSDictionary, NSArray;

@interface VNImageAnalyzerCompoundRequestConfiguration : VNRequestConfiguration {

	NSString* _detectorType;
	NSDictionary* _detectorConfigurationOptions;
	NSArray* _originalRequestConfigurations;

}

@property (nonatomic,copy) NSString * detectorType;                                  //@synthesize detectorType=_detectorType - In the implementation block
@property (nonatomic,copy) NSDictionary * detectorConfigurationOptions;              //@synthesize detectorConfigurationOptions=_detectorConfigurationOptions - In the implementation block
@property (nonatomic,copy) NSArray * originalRequestConfigurations;                  //@synthesize originalRequestConfigurations=_originalRequestConfigurations - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)detectorConfigurationOptions;
-(NSString *)detectorType;
-(void)setDetectorType:(NSString *)arg1 ;
-(void)setDetectorConfigurationOptions:(NSDictionary *)arg1 ;
-(NSArray *)originalRequestConfigurations;
-(void)setOriginalRequestConfigurations:(NSArray *)arg1 ;
@end

