/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSAttributeDescription, NSExpression;

@interface NSSQLBoundedByIntermediate : NSSQLIntermediate {

	NSSQLEntity* _entity;
	NSAttributeDescription* _target;
	NSExpression* _bounds;

}
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithWorkingEntity:(id)arg1 target:(id)arg2 bounds:(id)arg3 scope:(id)arg4 ;
@end

