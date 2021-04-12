/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNEspressoModelFileBasedDetector : VNDetector {

	void* _espressoContext;
	void* _espressoPlan;
	SCD_Struct_VN43* _espressoNetwork;
	unsigned long long _networkRequiredInputImageWidth;
	unsigned long long _networkRequiredInputImageHeight;

}

@property (nonatomic,readonly) void* espressoContext;                                           //@synthesize espressoContext=_espressoContext - In the implementation block
@property (nonatomic,readonly) void* espressoPlan;                                              //@synthesize espressoPlan=_espressoPlan - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VN43* espressoNetwork;                                //@synthesize espressoNetwork=_espressoNetwork - In the implementation block
@property (nonatomic,readonly) unsigned long long networkRequiredInputImageWidth;               //@synthesize networkRequiredInputImageWidth=_networkRequiredInputImageWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long networkRequiredInputImageHeight;              //@synthesize networkRequiredInputImageHeight=_networkRequiredInputImageHeight - In the implementation block
+(id)configurationOptionKeysForDetectorKey;
-(void)dealloc;
-(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(BOOL)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id*)arg2 ;
-(int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1 ;
-(BOOL)getWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 ofEspressoModelNetworkBlobNamed:(id)arg3 error:(id*)arg4 ;
-(void*)espressoContext;
-(void*)espressoPlan;
-(SCD_Struct_VN43*)espressoNetwork;
-(unsigned long long)networkRequiredInputImageWidth;
-(unsigned long long)networkRequiredInputImageHeight;
@end

