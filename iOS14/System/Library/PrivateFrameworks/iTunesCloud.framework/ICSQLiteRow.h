/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSDictionary, ICSQLiteStatement;

@interface ICSQLiteRow : NSObject {

	NSDictionary* _columnIndexByName;
	sqlite3_stmtRef _statement;
	ICSQLiteStatement* _statementWrapper;

}

@property (nonatomic,readonly) long long numberOfColumns; 
-(id)initWithStatement:(id)arg1 ;
-(id)stringForColumnName:(id)arg1 ;
-(int)intForColumnIndex:(int)arg1 ;
-(id)numberForColumnName:(id)arg1 ;
-(long long)int64ForColumnName:(id)arg1 ;
-(double)doubleForColumnIndex:(int)arg1 ;
-(int)columnIndexForColumnName:(id)arg1 ;
-(long long)numberOfColumns;
-(id)dataForColumnIndex:(int)arg1 ;
-(int)intForColumnName:(id)arg1 ;
-(id)stringForColumnIndex:(int)arg1 ;
-(id)dataForColumnName:(id)arg1 ;
-(double)doubleForColumnName:(id)arg1 ;
-(long long)int64ForColumnIndex:(int)arg1 ;
-(id)numberForColumnIndex:(int)arg1 ;
@end

