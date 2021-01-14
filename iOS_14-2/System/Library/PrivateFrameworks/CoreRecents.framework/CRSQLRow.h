/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
*/


#import <CoreRecents/CoreRecents-Structs.h>
@interface CRSQLRow : NSObject {

	sqlite3_stmtRef _stmt;

}
+(id)numberWithDoubleAtIndex:(int)arg1 statement:(sqlite3_stmtRef)arg2 ;
+(id)stringAtIndex:(int)arg1 statement:(sqlite3_stmtRef)arg2 ;
+(id)numberWithIntegerAtIndex:(int)arg1 statement:(sqlite3_stmtRef)arg2 ;
+(id)dataAtIndex:(int)arg1 copyBytes:(BOOL)arg2 statement:(sqlite3_stmtRef)arg3 ;
+(int)step:(sqlite3_stmtRef)arg1 ;
+(id)objectAtIndex:(int)arg1 statement:(sqlite3_stmtRef)arg2 ;
+(id)rowWithStatement:(sqlite3_stmtRef)arg1 ;
+(int)enumerateRowsInStatement:(sqlite3_stmtRef)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)stringAtIndex:(int)arg1 ;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 ;
-(id)objectAtIndex:(int)arg1 ;
-(id)dataAtIndex:(int)arg1 copyBytes:(BOOL)arg2 ;
-(id)numberWithIntegerAtIndex:(int)arg1 ;
-(id)numberWithDoubleAtIndex:(int)arg1 ;
@end

