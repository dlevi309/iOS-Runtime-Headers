/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSMutableArray, NSString, NSArray, NSNumber;

@interface TIUserModelIndexedCounter : NSObject {

	NSMutableArray* _persisted;
	NSMutableArray* _current;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int bucketCount; 
@property (nonatomic,readonly) NSArray * counts; 
@property (nonatomic,readonly) NSArray * currentCounts; 
@property (nonatomic,readonly) NSNumber * count; 
-(NSString *)name;
-(NSNumber *)count;
-(id)initWithName:(id)arg1 ;
-(NSArray *)counts;
-(int)bucketCount;
-(void)setupBuckets;
-(void)doPersist:(id)arg1 forDate:(id)arg2 forInputMode:(id)arg3 forContext:(id)arg4 ;
-(NSArray *)currentCounts;
-(void)update:(int)arg1 forIndex:(int)arg2 ;
-(void)updateWithNumber:(id)arg1 forIndex:(int)arg2 ;
-(void)updateWithLoadedValue:(int)arg1 forIndex:(int)arg2 ;
-(void)updateWithLoadedNumber:(id)arg1 forIndex:(int)arg2 ;
@end

