/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
*/


#import <CoreRecents/CoreRecents-Structs.h>
@interface CRSQLRow : NSObject {

	sqlite3_stmtRef _stmt;

}
+(int)step:(sqlite3_stmtRef)arg1 ;
+(id)stringAtIndex:(int)arg1 statement:(sqlite3_stmtRef)arg2 ;
+(id)objectAtIndex:(int)arg1 statement:(sqlite3_stmtRef)arg2 ;
+(id)dataAtIndex:(int)arg1 copyBytes:(BOOL)arg2 statement:(sqlite3_stmtRef)arg3 ;
+(id)numberWithIntegerAtIndex:(int)arg1 statement:(sqlite3_stmtRef)arg2 ;
+(id)numberWithDoubleAtIndex:(int)arg1 statement:(sqlite3_stmtRef)arg2 ;
+(int)enumerateRowsInStatement:(sqlite3_stmtRef)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)rowWithStatement:(sqlite3_stmtRef)arg1 ;
-(id)objectAtIndex:(int)arg1 ;
-(id)stringAtIndex:(int)arg1 ;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 ;
-(id)dataAtIndex:(int)arg1 copyBytes:(BOOL)arg2 ;
-(id)numberWithIntegerAtIndex:(int)arg1 ;
-(id)numberWithDoubleAtIndex:(int)arg1 ;
@end

