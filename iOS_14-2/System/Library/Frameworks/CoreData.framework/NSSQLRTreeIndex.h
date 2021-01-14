/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLIndex.h>

@class NSString;

@interface NSSQLRTreeIndex : NSSQLIndex {

	NSString* _tableName;

}

@property (nonatomic,retain,readonly) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(NSString *)tableName;
-(id)dropStatementsForStore:(id)arg1 ;
-(id)bulkUpdateStatementsForStore:(id)arg1 ;
-(id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2 ;
-(void)generateSQLStrings;
-(id)generateStatementsForStore:(id)arg1 ;
-(void)dealloc;
@end

