/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)stepValue;
-(NSNumber *)maximumValue;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)internalValue;
-(NSNumber *)minimumValue;
-(id)valueForUpdate:(id)arg1 ;
@end

