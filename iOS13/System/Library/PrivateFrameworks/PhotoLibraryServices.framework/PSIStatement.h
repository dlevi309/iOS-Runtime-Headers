/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSIStatement : NSObject {

	sqlite3_stmtRef _stmt;

}

@property (readonly) sqlite3_stmtRef stmt;              //@synthesize stmt=_stmt - In the implementation block
-(void)dealloc;
-(void)bindInt64:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindDouble:(double)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindText:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithSQLite3Stmt:(sqlite3_stmtRef)arg1 ;
-(void)finalizze;
-(id)textAtColumn:(unsigned long long)arg1 ;
-(double)doubleAtColumn:(unsigned long long)arg1 ;
-(long long)int64AtColumn:(unsigned long long)arg1 ;
-(sqlite3_stmtRef)stmt;
@end

