/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSString, HKConceptIdentifier;

@interface _HKConceptIdentifierFilter : _HKFilter {

	unsigned long long _operatorType;
	NSString* _keyPath;
	HKConceptIdentifier* _conceptIdentifier;

}

@property (nonatomic,readonly) unsigned long long operatorType;                           //@synthesize operatorType=_operatorType - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;                                   //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,copy,readonly) HKConceptIdentifier * conceptIdentifier;              //@synthesize conceptIdentifier=_conceptIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterWithOperatorType:(unsigned long long)arg1 keyPath:(id)arg2 conceptIdentifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)operatorType;
-(NSString *)keyPath;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(HKConceptIdentifier *)conceptIdentifier;
@end

