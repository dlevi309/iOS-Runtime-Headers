/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString;

@interface NSSQLiteIndexStatistics : NSObject {

	NSString* _storeIdentifier;
	NSString* _indexName;
	long long _executionCount;
	long long _instructionCount;
	long long _rowCount;

}

@property (nonatomic,readonly) NSString * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * indexName;                    //@synthesize indexName=_indexName - In the implementation block
@property (nonatomic,readonly) long long executionCount;                //@synthesize executionCount=_executionCount - In the implementation block
@property (nonatomic,readonly) long long instructionCount;              //@synthesize instructionCount=_instructionCount - In the implementation block
@property (nonatomic,readonly) long long rowCount;                      //@synthesize rowCount=_rowCount - In the implementation block
-(id)init;
-(id)initWithResultDictionary:(id)arg1 storeID:(id)arg2 ;
-(void)addStatistics:(id)arg1 ;
-(long long)instructionCount;
-(id)initWithName:(id)arg1 storeID:(id)arg2 ;
-(void)incrementExecutionCountWithInstructionCount:(long long)arg1 rowCount:(long long)arg2 ;
-(long long)executionCount;
-(NSString *)indexName;
-(NSString *)storeIdentifier;
-(void)dealloc;
-(long long)rowCount;
@end

