/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSMutableArray, NSString, NSArray, NSNumber;

@interface TIUserModelIndexedCounter : NSObject {

	NSMutableArray* _persisted;
	NSMutableArray* _current;
	int _dataType;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int dataType;                            //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) int bucketCount; 
@property (nonatomic,readonly) NSArray * currentCounts; 
@property (nonatomic,readonly) NSArray * counts; 
@property (nonatomic,readonly) NSNumber * aggregatedCount; 
@property (nonatomic,readonly) int days; 
-(int)dataType;
-(int)days;
-(NSArray *)counts;
-(int)bucketCount;
-(void)prepareBuckets;
-(NSArray *)currentCounts;
-(id)countsForNumberOfDays:(int)arg1 ;
-(NSNumber *)aggregatedCount;
-(void)extendToNumberOfDays:(int)arg1 ;
-(id)aggregatedCountForNumberOfDays:(int)arg1 ;
-(void)updateWithInteger:(int)arg1 forIndex:(int)arg2 ;
-(void)updateWithDouble:(double)arg1 forIndex:(int)arg2 ;
-(id)_createEmptyCountsArray;
-(void)updateWithLoadedInteger:(int)arg1 andDouble:(double)arg2 forIndex:(int)arg3 andDaysPrior:(int)arg4 ;
-(void)doPersist:(id)arg1 forDate:(id)arg2 forContext:(id)arg3 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
@end

