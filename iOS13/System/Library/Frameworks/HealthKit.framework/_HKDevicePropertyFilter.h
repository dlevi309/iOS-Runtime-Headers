/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSString, NSSet;

@interface _HKDevicePropertyFilter : _HKFilter {

	NSString* _keyPath;
	NSString* _propertyKey;
	NSSet* _allowedValues;

}

@property (nonatomic,readonly) NSString * keyPath;                  //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) NSString * propertyKey;              //@synthesize propertyKey=_propertyKey - In the implementation block
@property (nonatomic,readonly) NSSet * allowedValues;               //@synthesize allowedValues=_allowedValues - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_keyPathForProperty:(id)arg1 ;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(BOOL)_acceptsOperatorType:(unsigned long long)arg1 ;
+(id)filterWithDeviceProperty:(id)arg1 allowedValues:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(NSString *)propertyKey;
-(NSSet *)allowedValues;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(id)_initWithKey:(id)arg1 allowedValues:(id)arg2 ;
@end

