/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

