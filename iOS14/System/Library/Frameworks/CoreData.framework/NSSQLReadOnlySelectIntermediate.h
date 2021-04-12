/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLSelectIntermediate.h>

@class NSMutableDictionary;

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {

	BOOL _onlyFetchesAggregates;
	NSMutableDictionary* _variableToAliasMappings;
	NSMutableDictionary* _propertyToAliasMappings;

}
-(BOOL)onlyFetchesAggregates;
-(id)resolveVariableExpression:(id)arg1 inContext:(id)arg2 ;
-(id)initWithScope:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(void)dealloc;
@end

