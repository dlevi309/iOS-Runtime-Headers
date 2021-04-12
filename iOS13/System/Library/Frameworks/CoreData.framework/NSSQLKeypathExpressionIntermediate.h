/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLExpressionIntermediate.h>

@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate {

	BOOL _substitutePK;

}

@property (assign,nonatomic) BOOL substitutePK;              //@synthesize substitutePK=_substitutePK - In the implementation block
-(id)generateSQLStringInContext:(id)arg1 ;
-(void)setSubstitutePK:(BOOL)arg1 ;
-(id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_propertyDescriptionForKeypath:(id)arg1 startingAtEntity:(id)arg2 allowToMany:(BOOL)arg3 lastKeyVisited:(id*)arg4 inContext:(id)arg5 ;
-(id)_propertyDescriptionsForKeypath:(id)arg1 rootedAtEntity:(id)arg2 allowToMany:(BOOL)arg3 lastKeyVisited:(id*)arg4 inContext:(id)arg5 ;
-(id)_generateSQLForProperty:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 keypath:(id)arg4 inContext:(id)arg5 ;
-(BOOL)substitutePK;
@end

