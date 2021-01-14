/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <AppleMediaServices/AMSSQLitePropertyPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AMSSQLiteComparisonPredicate : AMSSQLitePropertyPredicate <NSCopying> {

	long long _comparisonType;
	id _value;

}

@property (nonatomic,readonly) long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (nonatomic,readonly) id value;                              //@synthesize value=_value - In the implementation block
+(id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2 ;
+(id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)_comparisonTypeString;
-(void)applyBinding:(id)arg1 atIndex:(inout int*)arg2 ;
-(unsigned long long)hash;
-(long long)comparisonType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

