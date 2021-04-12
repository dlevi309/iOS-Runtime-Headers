/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLiteStatement, NSSQLiteAdapter, NSMutableString;

@interface _NSSQLGenerator : NSObject {

	NSSQLiteStatement* _statement;
	NSSQLiteAdapter* _adapter;
	NSMutableString* _sqlString;
	NSMutableString* _whereClause;
	NSMutableString* _selectList;

}
+(void)initialize;
-(void)dealloc;
@end

