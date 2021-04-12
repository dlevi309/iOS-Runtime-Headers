/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)orientation;
-(double)cornerRadius;
-(HUIntrinsicSizeDescriptor *)sizeDescriptor;
-(id)initWithSizeDescriptor:(id)arg1 orientation:(unsigned long long)arg2 cornerRadius:(double)arg3 ;
@end

