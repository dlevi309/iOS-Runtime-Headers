/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKMetadataFilter.h>

@class NSSet;

@interface _HKContainsMetadataFilter : _HKMetadataFilter {

	NSSet* _allowedValues;

}

@property (nonatomic,readonly) NSSet * allowedValues;              //@synthesize allowedValues=_allowedValues - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_acceptsOperatorType:(unsigned long long)arg1 ;
+(id)filterWithKey:(id)arg1 operatorType:(unsigned long long)arg2 values:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)allowedValues;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(id)_initWithKey:(id)arg1 values:(id)arg2 operatorType:(unsigned long long)arg3 ;
@end

