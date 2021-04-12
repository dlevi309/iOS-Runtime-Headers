/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/_HKBinarySample.h>

@class NSString, _HKStringSampleType;

@interface _HKStringSample : HKSample <_HKBinarySample> {

	NSString* _stringValue;
	_HKStringSampleType* _stringType;

}

@property (readonly) _HKStringSampleType * stringType;              //@synthesize stringType=_stringType - In the implementation block
@property (readonly) NSString * stringValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isConcreteObjectClass;
+(id)stringSampleWithType:(id)arg1 stringValue:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)payload;
-(_HKStringSampleType *)stringType;
-(void)_setPayload:(id)arg1 ;
@end

