/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/

#import <libobjc.A.dylib/CHHapticParameterAttributes.h>

@class NSString;

@interface CHHapticParameterAttributesImpl : NSObject <CHHapticParameterAttributes> {

	float _minValue;
	float _maxValue;
	float _defaultValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) float minValue;                                //@synthesize minValue=_minValue - In the implementation block
@property (readonly) float maxValue;                                //@synthesize maxValue=_maxValue - In the implementation block
@property (readonly) float defaultValue;                            //@synthesize defaultValue=_defaultValue - In the implementation block
-(id)init;
-(float)defaultValue;
-(float)maxValue;
-(float)minValue;
-(id)initWithMinValue:(float)arg1 maxValue:(float)arg2 defaultValue:(float)arg3 ;
@end

