/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


#import <SafariCore/SafariCore-Structs.h>
@class WBSSQLiteDatabase, NSDictionary, NSArray;

@interface WBSSQLiteStatement : NSObject {

	WBSSQLiteDatabase* _database;
	sqlite3_stmtRef _handle;
	NSDictionary* _columnNamesToIndexes;
	NSArray* _columnNames;

}

@property (nonatomic,readonly) NSArray * columnNames; 
@property (nonatomic,readonly) NSDictionary * columnNamesToIndexes; 
@property (nonatomic,readonly) sqlite3_stmtRef handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) WBSSQLiteDatabase * database;                     //@synthesize database=_database - In the implementation block
-(int)execute;
-(BOOL)execute:(id*)arg1 ;
-(NSArray *)columnNames;
-(id)fetch;
-(NSDictionary *)columnNamesToIndexes;
-(sqlite3_stmtRef)handle;
-(id)init;
-(BOOL)_isValid;
-(id)initWithDatabase:(id)arg1 query:(id)arg2 error:(id*)arg3 ;
-(void)bindString:(id)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindNullAtParameterIndex:(unsigned long long)arg1 ;
-(void)bindData:(id)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindDouble:(double)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(BOOL)fetchWithEnumerationBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)reset;
-(void)invalidate;
-(WBSSQLiteDatabase *)database;
-(void)bindInt:(int)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindInt64:(long long)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(id)initWithDatabase:(id)arg1 query:(id)arg2 ;
-(void)dealloc;
@end

