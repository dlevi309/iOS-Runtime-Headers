/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString;

@interface NSSQLAliasGenerator : NSObject {

	unsigned _nextTableAlias;
	unsigned _nextVariableAlias;
	unsigned _nextTempTableAlias;
	NSString* _tableBase;
	NSString* _variableBase;

}
-(id)init;
-(void)dealloc;
-(id)generateVariableAlias;
-(id)initWithNestingLevel:(unsigned)arg1 ;
-(id)generateTableAlias;
-(id)generateSubqueryVariableAlias;
-(id)generateTempTableName;
@end

