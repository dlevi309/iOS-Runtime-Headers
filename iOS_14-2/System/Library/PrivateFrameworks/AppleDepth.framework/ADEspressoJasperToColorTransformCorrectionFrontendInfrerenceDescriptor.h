/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/ADEspressoInferenceDescriptor.h>

@class ADEspressoImageDescriptor;

@interface ADEspressoJasperToColorTransformCorrectionFrontendInfrerenceDescriptor : ADEspressoInferenceDescriptor {

	ADEspressoImageDescriptor* _featuresInput;
	ADEspressoImageDescriptor* _anglesOutput;
	ADEspressoImageDescriptor* _errorsOutput;

}

@property (nonatomic,readonly) ADEspressoImageDescriptor * featuresInput;              //@synthesize featuresInput=_featuresInput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * anglesOutput;               //@synthesize anglesOutput=_anglesOutput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * errorsOutput;               //@synthesize errorsOutput=_errorsOutput - In the implementation block
-(id)initWithNetworkProvider:(id)arg1 ;
-(ADEspressoImageDescriptor *)featuresInput;
-(ADEspressoImageDescriptor *)anglesOutput;
-(ADEspressoImageDescriptor *)errorsOutput;
@end

