/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/ADEspressoInferenceDescriptor.h>

@class ADEspressoImageDescriptor;

@interface ADEspressoPearlColorInferenceDescriptor : ADEspressoInferenceDescriptor {

	ADEspressoImageDescriptor* _colorInput;
	ADEspressoImageDescriptor* _disparityInput;
	ADEspressoImageDescriptor* _disparityOutput;

}

@property (nonatomic,readonly) ADEspressoImageDescriptor * colorInput;                   //@synthesize colorInput=_colorInput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * disparityInput;               //@synthesize disparityInput=_disparityInput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * disparityOutput;              //@synthesize disparityOutput=_disparityOutput - In the implementation block
-(ADEspressoImageDescriptor *)disparityOutput;
-(ADEspressoImageDescriptor *)colorInput;
-(id)initWithNetworkProvider:(id)arg1 inputColorFormat:(unsigned)arg2 disparityFormat:(unsigned)arg3 ;
-(ADEspressoImageDescriptor *)disparityInput;
@end

