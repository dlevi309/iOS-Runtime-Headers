/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMSetting.h>

@class NSNumber;

@interface HMNumberSetting : HMSetting {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;

}

@property (readonly) NSNumber * minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (readonly) NSNumber * maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (readonly) NSNumber * stepValue;                 //@synthesize stepValue=_stepValue - In the implementation block
-(BOOL)isKindOfClass:(Class)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(NSNumber *)stepValue;
-(id)valueForUpdate:(id)arg1 ;
-(id)internalValue;
@end

