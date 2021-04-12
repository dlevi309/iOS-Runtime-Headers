/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


#import <EmailFoundation/EmailFoundation-Structs.h>
@class NSString, NSData, NSNumber, NSDate;

@interface EFSQLColumn : NSObject {

	long long _index;
	sqlite3_stmtRef _statement;

}

@property (nonatomic,readonly) sqlite3_stmtRef statement;                //@synthesize statement=_statement - In the implementation block
@property (nonatomic,readonly) long long index;                          //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) id objectValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSData * dataValue; 
@property (nonatomic,readonly) NSNumber * numberValue; 
@property (nonatomic,readonly) long long databaseIDValue; 
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,readonly) long long int64Value; 
@property (nonatomic,readonly) long long integerValue; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,readonly) NSDate * dateValue; 
-(double)doubleValue;
-(id)debugDescription;
-(NSString *)name;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(long long)integerValue;
-(long long)index;
-(NSDate *)dateValue;
-(long long)int64Value;
-(id)objectValue;
-(NSData *)dataValue;
-(sqlite3_stmtRef)statement;
-(NSNumber *)numberValue;
-(long long)databaseIDValue;
-(id)initWithSQLiteStatement:(sqlite3_stmtRef)arg1 index:(long long)arg2 ;
-(id)initWithPreparedStatement:(id)arg1 index:(long long)arg2 ;
@end

