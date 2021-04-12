/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/


@class NSArray;

@interface PETStringPairs : NSObject {

	NSArray* _keys;
	NSArray* _values;

}

@property (nonatomic,readonly) NSArray * keys;                        //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSArray * values;                      //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(NSArray *)values;
-(NSArray *)keys;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(id)initWithKeys:(id)arg1 values:(id)arg2 ;
-(id)subsetForKeys:(id)arg1 ;
@end

