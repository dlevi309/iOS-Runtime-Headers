/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@class NSDictionary, NSMutableArray, NSString;

@interface VNFaceAnalyzerCompoundRequestConfiguration : VNRequestConfiguration {

	NSDictionary* _detectorConfigurationOptions;
	NSMutableArray* _originalRequests;
	NSString* _detectorType;

}

@property (nonatomic,copy) NSDictionary * detectorConfigurationOptions;              //@synthesize detectorConfigurationOptions=_detectorConfigurationOptions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * originalRequests;                    //@synthesize originalRequests=_originalRequests - In the implementation block
@property (nonatomic,copy) NSString * detectorType;                                  //@synthesize detectorType=_detectorType - In the implementation block
-(void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2 ;
-(NSDictionary *)detectorConfigurationOptions;
-(NSString *)detectorType;
-(void)setDetectorType:(NSString *)arg1 ;
-(void)setDetectorConfigurationOptions:(NSDictionary *)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setResolvedRevision:(unsigned long long)arg1 ;
-(NSMutableArray *)originalRequests;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

