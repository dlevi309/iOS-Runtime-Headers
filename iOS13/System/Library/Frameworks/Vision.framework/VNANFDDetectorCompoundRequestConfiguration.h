/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@class NSDictionary, NSMutableArray, NSString;

@interface VNANFDDetectorCompoundRequestConfiguration : VNRequestConfiguration {

	NSDictionary* _detectorConfigurationOptions;
	NSMutableArray* _originalRequests;
	NSString* _detectorType;

}

@property (nonatomic,copy) NSDictionary * detectorConfigurationOptions;              //@synthesize detectorConfigurationOptions=_detectorConfigurationOptions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * originalRequests;                    //@synthesize originalRequests=_originalRequests - In the implementation block
@property (nonatomic,copy) NSString * detectorType;                                  //@synthesize detectorType=_detectorType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)originalRequests;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2 ;
-(NSDictionary *)detectorConfigurationOptions;
-(NSString *)detectorType;
-(void)setDetectorType:(NSString *)arg1 ;
-(void)setDetectorConfigurationOptions:(NSDictionary *)arg1 ;
@end

