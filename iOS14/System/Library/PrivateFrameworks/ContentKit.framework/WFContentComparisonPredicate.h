/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentPredicate.h>
#import <libobjc.A.dylib/WFContentPropertyContainer.h>

@protocol NSCopying;
@class WFContentProperty, NSSet;

@interface WFContentComparisonPredicate : WFContentPredicate <WFContentPropertyContainer> {

	WFContentProperty* _property;
	id<NSCopying> _value;
	/*^block*/id _valueBlock;
	unsigned long long _comparisonType;

}

@property (nonatomic,readonly) WFContentProperty * property;                   //@synthesize property=_property - In the implementation block
@property (nonatomic,copy,readonly) id<NSCopying> value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) id valueBlock;                             //@synthesize valueBlock=_valueBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (nonatomic,readonly) NSSet * containedProperties; 
+(void)initialize;
+(id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(unsigned long long)arg3 ;
+(id)predicateWithValueBlock:(/*^block*/id)arg1 forProperty:(id)arg2 ;
+(void)registerValueMapping:(/*^block*/id)arg1 ;
-(WFContentProperty *)property;
-(NSSet *)containedProperties;
-(id)description;
-(id)valueBlock;
-(unsigned long long)comparisonType;
-(id<NSCopying>)value;
-(BOOL)evaluateWithValues:(id)arg1 ;
-(void)evaluateWithObject:(id)arg1 propertySubstitutor:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithValue:(id)arg1 valueBlock:(/*^block*/id)arg2 property:(id)arg3 comparisonType:(unsigned long long)arg4 ;
-(id)comparableValueForValue:(id)arg1 ;
@end

