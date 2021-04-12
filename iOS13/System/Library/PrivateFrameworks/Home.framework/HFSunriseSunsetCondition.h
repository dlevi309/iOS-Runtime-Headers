/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFTimeCondition.h>
#import <libobjc.A.dylib/HFPrimitiveTimeCondition.h>

@class NSString, NSDateComponents;

@interface HFSunriseSunsetCondition : HFTimeCondition <HFPrimitiveTimeCondition> {

	unsigned long long _comparisonType;
	NSString* _significantEvent;
	NSDateComponents* _offset;

}

@property (nonatomic,copy,readonly) NSString * significantEvent;               //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,readonly) NSDateComponents * offset;                      //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(NSDateComponents *)offset;
-(id)initWithPredicate:(id)arg1 ;
-(unsigned long long)comparisonType;
-(NSString *)significantEvent;
-(id)initWithSignificantEvent:(id)arg1 comparisonType:(unsigned long long)arg2 ;
-(id)initWithSignificantEvent:(id)arg1 offset:(id)arg2 comparisonType:(unsigned long long)arg3 ;
@end

