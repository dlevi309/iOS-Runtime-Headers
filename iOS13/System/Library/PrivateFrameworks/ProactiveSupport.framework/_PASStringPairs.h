/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class NSArray;

@interface _PASStringPairs : NSObject {

	NSArray* _keys;
	NSArray* _values;

}

@property (nonatomic,readonly) NSArray * keys;                        //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSArray * values;                      //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(NSArray *)values;
-(NSArray *)keys;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(id)initWithKeys:(id)arg1 values:(id)arg2 ;
@end

