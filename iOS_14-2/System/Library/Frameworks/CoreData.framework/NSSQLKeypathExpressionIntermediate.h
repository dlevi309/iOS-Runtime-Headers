/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLExpressionIntermediate.h>

@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate {

	BOOL _substitutePK;

}

@property (assign,nonatomic) BOOL substitutePK;              //@synthesize substitutePK=_substitutePK - In the implementation block
-(id)_propertyDescriptionForKeypath:(id)arg1 startingAtEntity:(id)arg2 allowToMany:(BOOL)arg3 allowToOne:(BOOL)arg4 lastKeyVisited:(id*)arg5 inContext:(id)arg6 ;
-(void)setSubstitutePK:(BOOL)arg1 ;
-(BOOL)substitutePK;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForProperty:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 keypath:(id)arg4 inContext:(id)arg5 ;
-(id)_propertyDescriptionsForKeypath:(id)arg1 rootedAtEntity:(id)arg2 allowToMany:(BOOL)arg3 allowToOne:(BOOL)arg4 lastKeyVisited:(id*)arg5 inContext:(id)arg6 ;
@end

