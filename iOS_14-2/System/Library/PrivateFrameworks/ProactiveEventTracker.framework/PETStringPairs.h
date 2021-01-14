/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(NSArray *)keys;
-(NSArray *)values;
-(unsigned long long)count;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(id)initWithKeys:(id)arg1 values:(id)arg2 ;
-(id)subsetForKeys:(id)arg1 ;
@end

