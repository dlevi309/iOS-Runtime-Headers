/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class ML3DatabaseStatement, ML3DatabaseConnection, NSDictionary, NSString;

@interface ML3DatabaseResult : NSObject {

	ML3DatabaseStatement* _statement;
	ML3DatabaseConnection* _connection;
	NSDictionary* _columnNameIndexMap;
	unsigned long long _limitIndex;
	NSString* _limitProperty;
	long long _limitValue;

}

@property (nonatomic,copy) NSString * limitProperty;              //@synthesize limitProperty=_limitProperty - In the implementation block
@property (assign,nonatomic) long long limitValue;                //@synthesize limitValue=_limitValue - In the implementation block
-(id)init;
-(id)stringValueForFirstRowAndColumn;
-(id)rows;
-(void)enumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(long long)limitValue;
-(void)setLimitValue:(long long)arg1 ;
-(id)objectForFirstRowAndColumn;
-(void)setLimitProperty:(NSString *)arg1 ;
-(long long)int64ValueForFirstRowAndColumn;
-(unsigned long long)indexForColumnName:(id)arg1 ;
-(id)columnNameIndexMap;
-(BOOL)hasAtLeastOneRow;
-(id)objectsInColumn:(unsigned long long)arg1 ;
-(id)initWithStatement:(id)arg1 connection:(id)arg2 ;
-(id)_statement;
-(NSString *)limitProperty;
-(void)setLimitProperty:(id)arg1 limitValue:(long long)arg2 ;
@end

