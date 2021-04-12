/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSAttributeDescription, NSExpression;

@interface NSSQLBoundedByIntermediate : NSSQLIntermediate {

	NSSQLEntity* _entity;
	NSAttributeDescription* _target;
	NSExpression* _bounds;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithWorkingEntity:(id)arg1 target:(id)arg2 bounds:(id)arg3 scope:(id)arg4 ;
-(void)dealloc;
@end

