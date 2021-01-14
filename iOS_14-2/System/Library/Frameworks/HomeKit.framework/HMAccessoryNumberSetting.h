/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMAccessorySetting.h>

@class NSNumber;

@interface HMAccessoryNumberSetting : HMAccessorySetting

@property (readonly) NSNumber * minimumValue; 
@property (readonly) NSNumber * maximumValue; 
@property (readonly) NSNumber * stepValue; 
-(NSNumber *)stepValue;
-(NSNumber *)maximumValue;
-(Class)valueClass;
-(NSNumber *)minimumValue;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 ;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 stepValue:(id)arg6 ;
@end

