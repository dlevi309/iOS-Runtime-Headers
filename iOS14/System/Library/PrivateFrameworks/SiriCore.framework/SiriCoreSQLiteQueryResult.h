/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@class SiriCoreSQLiteQuery, SiriCoreSQLiteStatement, NSArray, NSDictionary, NSError;

@interface SiriCoreSQLiteQueryResult : NSObject {

	SiriCoreSQLiteQuery* _query;
	unsigned long long _beginMachTime;
	unsigned long long _endMachTime;
	SiriCoreSQLiteStatement* _statement;
	NSArray* _columnNameTuple;
	NSArray* _columnValueTuples;
	NSDictionary* _columnValuesMap;
	NSArray* _rowValueTuples;
	NSArray* _rowValueMaps;
	NSArray* _records;
	NSError* _error;

}

@property (nonatomic,copy,readonly) SiriCoreSQLiteQuery * query;                 //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) unsigned long long beginMachTime;                 //@synthesize beginMachTime=_beginMachTime - In the implementation block
@property (nonatomic,readonly) unsigned long long endMachTime;                   //@synthesize endMachTime=_endMachTime - In the implementation block
@property (nonatomic,readonly) SiriCoreSQLiteStatement * statement;              //@synthesize statement=_statement - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columnNameTuple;                   //@synthesize columnNameTuple=_columnNameTuple - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columnValueTuples;                 //@synthesize columnValueTuples=_columnValueTuples - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * columnValuesMap;              //@synthesize columnValuesMap=_columnValuesMap - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rowValueTuples;                    //@synthesize rowValueTuples=_rowValueTuples - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rowValueMaps;                      //@synthesize rowValueMaps=_rowValueMaps - In the implementation block
@property (nonatomic,copy,readonly) NSArray * records;                           //@synthesize records=_records - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
-(SiriCoreSQLiteStatement *)statement;
-(SiriCoreSQLiteQuery *)query;
-(NSArray *)columnValueTuples;
-(NSArray *)columnNameTuple;
-(NSArray *)records;
-(unsigned long long)endMachTime;
-(NSError *)error;
-(unsigned long long)beginMachTime;
-(id)description;
-(NSArray *)rowValueMaps;
-(NSArray *)rowValueTuples;
-(id)initWithQuery:(id)arg1 beginMachTime:(unsigned long long)arg2 endMachTime:(unsigned long long)arg3 statement:(id)arg4 columnNameTuple:(id)arg5 columnValueTuples:(id)arg6 columnValuesMap:(id)arg7 rowValueTuples:(id)arg8 rowValueMaps:(id)arg9 records:(id)arg10 error:(id)arg11 ;
-(NSDictionary *)columnValuesMap;
@end

