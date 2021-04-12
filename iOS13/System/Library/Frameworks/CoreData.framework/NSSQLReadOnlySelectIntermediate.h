/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLSelectIntermediate.h>

@class NSMutableDictionary;

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {

	BOOL _onlyFetchesAggregates;
	NSMutableDictionary* _variableToAliasMappings;
	NSMutableDictionary* _propertyToAliasMappings;

}
-(void)dealloc;
-(id)initWithScope:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)onlyFetchesAggregates;
-(id)resolveVariableExpression:(id)arg1 inContext:(id)arg2 ;
@end

