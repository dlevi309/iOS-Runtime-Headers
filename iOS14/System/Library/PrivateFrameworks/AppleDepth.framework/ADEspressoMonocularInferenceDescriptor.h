/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/ADEspressoInferenceDescriptor.h>

@class ADEspressoImageDescriptor;

@interface ADEspressoMonocularInferenceDescriptor : ADEspressoInferenceDescriptor {

	ADEspressoImageDescriptor* _colorInput;
	ADEspressoImageDescriptor* _depthOutput;

}

@property (nonatomic,readonly) ADEspressoImageDescriptor * colorInput;               //@synthesize colorInput=_colorInput - In the implementation block
@property (nonatomic,readonly) ADEspressoImageDescriptor * depthOutput;              //@synthesize depthOutput=_depthOutput - In the implementation block
-(ADEspressoImageDescriptor *)depthOutput;
-(ADEspressoImageDescriptor *)colorInput;
-(id)initWithNetworkProvider:(id)arg1 ;
@end

