/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFTimeCondition.h>
#import <libobjc.A.dylib/HFPrimitiveTimeCondition.h>

@class NSDateComponents, NSString;

@interface HFDateComponentsCondition : HFTimeCondition <HFPrimitiveTimeCondition> {

	unsigned long long _comparisonType;
	NSDateComponents* _dateComponents;

}

@property (nonatomic,readonly) NSDateComponents * dateComponents;              //@synthesize dateComponents=_dateComponents - In the implementation block
@property (nonatomic,readonly) BOOL isTimeOfDayCondition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(NSDateComponents *)dateComponents;
-(unsigned long long)comparisonType;
-(BOOL)isTimeOfDayCondition;
-(id)initWithDateComponents:(id)arg1 comparisonType:(unsigned long long)arg2 ;
@end

