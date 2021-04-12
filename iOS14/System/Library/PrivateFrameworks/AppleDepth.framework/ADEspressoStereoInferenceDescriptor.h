/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/ADEspressoInferenceDescriptor.h>

@class ADEspressoImageDescriptor;

@interface ADEspressoStereoInferenceDescriptor : ADEspressoInferenceDescriptor {

	ADEspressoImageDescriptor* _referenceInput;
	ADEspressoImageDescriptor* _auxiliaryInput;
	ADEspressoImageDescriptor* _referenceNoiseSigmaInput;
	ADEspressoImageDescriptor* _auxiliaryNoiseSigmaInput;
	ADEspressoImageDescriptor* _disparityOutput;

}

@property (nonatomic,readonly) ADEspressoImageDescriptor * referenceInput;                        //@synthesize referenceInput=_referenceInput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * auxiliaryInput;                        //@synthesize auxiliaryInput=_auxiliaryInput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * referenceNoiseSigmaInput;              //@synthesize referenceNoiseSigmaInput=_referenceNoiseSigmaInput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * auxiliaryNoiseSigmaInput;              //@synthesize auxiliaryNoiseSigmaInput=_auxiliaryNoiseSigmaInput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * disparityOutput;                       //@synthesize disparityOutput=_disparityOutput - In the implementation block
-(ADEspressoImageDescriptor *)referenceInput;
-(ADEspressoImageDescriptor *)auxiliaryInput;
-(ADEspressoImageDescriptor *)disparityOutput;
-(id)initWithNetworkProvider:(id)arg1 inputColorFormat:(unsigned)arg2 outputDisparityFormat:(unsigned)arg3 ;
-(ADEspressoImageDescriptor *)referenceNoiseSigmaInput;
-(ADEspressoImageDescriptor *)auxiliaryNoiseSigmaInput;
@end

