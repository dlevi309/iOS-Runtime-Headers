/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNDetector.h>

@class VNEspressoResources;

@interface VNEspressoModelFileBasedDetector : VNDetector {

	VNEspressoResources* _espressoResources;
	unsigned long long _networkRequiredInputImageWidth;
	unsigned long long _networkRequiredInputImageHeight;

}

@property (nonatomic,readonly) VNEspressoResources * espressoResources;                         //@synthesize espressoResources=_espressoResources - In the implementation block
@property (nonatomic,readonly) unsigned long long networkRequiredInputImageWidth;               //@synthesize networkRequiredInputImageWidth=_networkRequiredInputImageWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long networkRequiredInputImageHeight;              //@synthesize networkRequiredInputImageHeight=_networkRequiredInputImageHeight - In the implementation block
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(id)keyForDetectorWithConfigurationOptions:(id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(BOOL)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1 ;
-(BOOL)getWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 ofEspressoModelNetworkBlobNamed:(id)arg3 error:(id*)arg4 ;
-(VNEspressoResources *)espressoResources;
-(unsigned long long)networkRequiredInputImageWidth;
-(unsigned long long)networkRequiredInputImageHeight;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
@end

