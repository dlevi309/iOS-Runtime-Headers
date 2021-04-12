/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSArray;

@interface NSSQLOrderIntermediate : NSSQLIntermediate {

	NSArray* _sortDescriptors;

}
-(id)_generateSQLForOrderedManyToManyInverse:(id)arg1 inContext:(id)arg2 ;
-(id)initWithSortDescriptors:(id)arg1 inScope:(id)arg2 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)_generateSQLForOrderedToManyInverse:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
@end

