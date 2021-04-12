/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLIndex.h>

@class NSString;

@interface NSSQLRTreeIndex : NSSQLIndex {

	NSString* _tableName;

}

@property (nonatomic,retain,readonly) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(void)dealloc;
-(NSString *)tableName;
-(id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2 ;
-(void)generateSQLStrings;
-(id)generateStatementsForStore:(id)arg1 ;
-(id)dropStatementsForStore:(id)arg1 ;
-(id)bulkUpdateStatementsForStore:(id)arg1 ;
@end

