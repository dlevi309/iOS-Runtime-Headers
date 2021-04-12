/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/ADEspressoInferenceDescriptor.h>

@class ADEspressoImageDescriptor;

@interface ADEspressoJasperToColorTransformCorrectionBackendInfrerenceDescriptor : ADEspressoInferenceDescriptor {

	ADEspressoImageDescriptor* _colorInput;
	ADEspressoImageDescriptor* _jasperInput;
	ADEspressoImageDescriptor* _featuresOutput;

}

@property (nonatomic,readonly) ADEspressoImageDescriptor * colorInput;                  //@synthesize colorInput=_colorInput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * jasperInput;                 //@synthesize jasperInput=_jasperInput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * featuresOutput;              //@synthesize featuresOutput=_featuresOutput - In the implementation block
-(ADEspressoImageDescriptor *)colorInput;
-(ADEspressoImageDescriptor *)jasperInput;
-(id)initWithNetworkProvider:(id)arg1 ;
-(ADEspressoImageDescriptor *)featuresOutput;
@end

