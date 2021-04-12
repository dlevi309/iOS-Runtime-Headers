/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {

	NSSQLUpdateColumnsIntermediate* _updateColumns;

}
-(void)setUpdateColumnsIntermediate:(id)arg1 ;
-(BOOL)isUpdateScoped;
-(id)updateColumnsIntermediate;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3 ;
-(void)dealloc;
@end

