/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(sqlite3_stmtRef)statement;
-(NSDate *)dateValue;
-(long long)index;
-(NSNumber *)numberValue;
-(long long)integerValue;
-(id)objectValue;
-(double)doubleValue;
-(BOOL)boolValue;
-(long long)int64Value;
-(NSData *)dataValue;
-(id)initWithSQLiteStatement:(sqlite3_stmtRef)arg1 index:(long long)arg2 ;
-(id)debugDescription;
-(NSString *)stringValue;
-(NSString *)name;
-(id)initWithPreparedStatement:(id)arg1 index:(long long)arg2 ;
-(long long)databaseIDValue;
@end

