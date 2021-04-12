/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class HUIntrinsicSizeDescriptor;

@interface HUQuickControlStepperViewMetrics : NSObject {

	HUIntrinsicSizeDescriptor* _sizeDescriptor;
	unsigned long long _orientation;
	double _cornerRadius;

}

@property (nonatomic,readonly) HUIntrinsicSizeDescriptor * sizeDescriptor;              //@synthesize sizeDescriptor=_sizeDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long orientation;                          //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                                     //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(double)cornerRadius;
-(unsigned long long)orientation;
-(HUIntrinsicSizeDescriptor *)sizeDescriptor;
-(id)initWithSizeDescriptor:(id)arg1 orientation:(unsigned long long)arg2 cornerRadius:(double)arg3 ;
@end

