/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSIStatement : NSObject {

	sqlite3_stmtRef _stmt;

}

@property (readonly) sqlite3_stmtRef stmt;              //@synthesize stmt=_stmt - In the implementation block
-(sqlite3_stmtRef)stmt;
-(void)bindInt64:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindDouble:(double)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)int64AtColumn:(unsigned long long)arg1 ;
-(id)initWithSQLite3Stmt:(sqlite3_stmtRef)arg1 ;
-(void)bindText:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(double)doubleAtColumn:(unsigned long long)arg1 ;
-(void)finalizze;
-(id)textAtColumn:(unsigned long long)arg1 ;
-(void)dealloc;
@end

