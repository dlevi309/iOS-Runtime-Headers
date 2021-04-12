/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {

	NSSQLUpdateColumnsIntermediate* _updateColumns;

}
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isUpdateScoped;
-(id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3 ;
-(void)setUpdateColumnsIntermediate:(id)arg1 ;
-(id)updateColumnsIntermediate;
@end

