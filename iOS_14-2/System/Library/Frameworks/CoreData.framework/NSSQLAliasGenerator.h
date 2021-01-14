/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithNestingLevel:(unsigned)arg1 ;
-(id)generateTableAlias;
-(id)generateTempTableName;
-(id)generateVariableAlias;
-(id)generateSubqueryVariableAlias;
-(void)dealloc;
@end

