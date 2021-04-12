/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/

#import <libobjc.A.dylib/CHHapticParameterAttributes.h>

@class NSString;

@interface CHHapticParameterAttributesImpl : NSObject <CHHapticParameterAttributes> {

	float _minValue;
	float _maxValue;
	float _defaultValue;

}

@property (readonly) float minValue;                                //@synthesize minValue=_minValue - In the implementation block
@property (readonly) float maxValue;                                //@synthesize maxValue=_maxValue - In the implementation block
@property (readonly) float defaultValue;                            //@synthesize defaultValue=_defaultValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(float)defaultValue;
-(id)initWithMinValue:(float)arg1 maxValue:(float)arg2 defaultValue:(float)arg3 ;
-(float)maxValue;
-(float)minValue;
@end

