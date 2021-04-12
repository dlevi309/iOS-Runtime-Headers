/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/ADEspressoInferenceDescriptor.h>

@class ADEspressoImageDescriptor;

@interface ADEspressoJasperColorInferenceDescriptor : ADEspressoInferenceDescriptor {

	ADEspressoImageDescriptor* _colorInput;
	ADEspressoImageDescriptor* _jasperInput;
	ADEspressoImageDescriptor* _depthOutput;
	ADEspressoImageDescriptor* _confidenceOutput;
	ADEspressoImageDescriptor* _alphaMapOutput;
	ADEspressoImageDescriptor* _normalsOutput;

}

@property (nonatomic,readonly) ADEspressoImageDescriptor * colorInput;                    //@synthesize colorInput=_colorInput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * jasperInput;                   //@synthesize jasperInput=_jasperInput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * depthOutput;                   //@synthesize depthOutput=_depthOutput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * confidenceOutput;              //@synthesize confidenceOutput=_confidenceOutput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * alphaMapOutput;                //@synthesize alphaMapOutput=_alphaMapOutput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * normalsOutput;                 //@synthesize normalsOutput=_normalsOutput - In the implementation block
-(ADEspressoImageDescriptor *)depthOutput;
-(ADEspressoImageDescriptor *)colorInput;
-(ADEspressoImageDescriptor *)jasperInput;
-(ADEspressoImageDescriptor *)confidenceOutput;
-(ADEspressoImageDescriptor *)alphaMapOutput;
-(id)initWithNetworkProvider:(id)arg1 ;
-(ADEspressoImageDescriptor *)normalsOutput;
@end

