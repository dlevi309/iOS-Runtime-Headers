/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@interface NSSQLDerivedAttributeSQLGenerator : NSObject
+(id)_parameterPropertyTokenForDerivedAttribute:(id)arg1 andKeypath:(id)arg2 onEntity:(id)arg3 ;
+(id)_computeNewColumnTokenForKeypathExpression:(id)arg1 governingEntity:(id)arg2 ;
+(id)_computeSingleParameterTokenForFunctionAttribute:(id)arg1 functionName:(id)arg2 ;
+(id)_computeNowTokenForFunctionAttribute:(id)arg1 ;
+(id)_triggerColumnListComponentForAttributeKeypaths:(id)arg1 startingAt:(id)arg2 ;
+(id)_triggerColumnWhereComponentForAttributeKeypaths:(id)arg1 startingAt:(id)arg2 ;
+(id)_computeNewColumnTokenForKeypathAttribute:(id)arg1 ;
+(id)_generateTriggerForAttribute:(id)arg1 newToken:(id)arg2 triggerColumnListComponent:(id)arg3 triggerColumnWhereComponent:(id)arg4 ;
+(id)_generateSQLForToOneDerivationForDerivedAttribute:(id)arg1 toOneKeypath:(id)arg2 ;
+(id)_computeNewColumnTokenForFunctionAttribute:(id)arg1 ;
+(id)_generateIncrementDecrementTriggersForDerivedAttribute:(id)arg1 toManyKeypath:(id)arg2 ;
+(id)_generateMinMaxTriggersForDerivedAttribute:(id)arg1 toManyKeypath:(id)arg2 ;
+(id)_generateIncrementDecrementTriggersForDerivedAttribute:(id)arg1 manyToManyKeypath:(id)arg2 ;
+(id)_generateSQLForAttributeKeypathDerivationForDerivedAttribute:(id)arg1 keypaths:(id)arg2 ;
+(id)_generateSQLForToOneKeypathDerivationForDerivedAttribute:(id)arg1 keypaths:(id)arg2 ;
+(id)_generateSQLForAttributeFunctionDerivationForDerivedAttribute:(id)arg1 keypaths:(id)arg2 ;
+(id)_generateSQLForToManyFunctionDerivationForDerivedAttribute:(id)arg1 keypaths:(id)arg2 ;
+(id)_generateSQLForManyToManyFunctionDerivationForDerivedAttribute:(id)arg1 keypaths:(id)arg2 ;
+(id)_generateSQLForToOneFunctionDerivationForDerivedAttribute:(id)arg1 keypaths:(id)arg2 ;
+(id)_generateSQLForDerivedAttributeWithOneParameterKeypath:(id)arg1 keypaths:(id)arg2 ;
+(id)generateSQLForDerivedAttribute:(id)arg1 keypaths:(id)arg2 ;
@end

