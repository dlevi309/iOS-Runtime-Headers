/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSISVariable, NSString;

@interface NSLayoutAnchor : NSObject <NSCopying, NSCoding> {

	id _referenceItem;
	long long _attr;
	NSISVariable* _variable;
	NSString* _name;
	id _cachedReferenceItems;
	id _reserved;
	unsigned _type : 2;
	unsigned _reserved3 : 30;

}
+(id)_anchorForItem:(id)arg1 attribute:(long long)arg2 ;
+(id)anchorWithItem:(id)arg1 attribute:(long long)arg2 ;
+(id)anchorNamed:(id)arg1 inItem:(id)arg2 symbolicAttribute:(long long)arg3 ;
+(id)layoutAnchorWithItem:(id)arg1 attribute:(long long)arg2 ;
+(id)layoutAnchorWithName:(id)arg1 forReferenceView:(id)arg2 ;
+(id)anchorWithName:(id)arg1 forReferenceView:(id)arg2 ;
+(id)anchorWithName:(id)arg1 forReferenceView:(id)arg2 symbolicAttribute:(long long)arg3 ;
+(id)anchorNamed:(id)arg1 inItem:(id)arg2 ;
-(id)avkit_constraintEqualToAnchor:(id)arg1 priority:(float)arg2 ;
-(id)avkit_constraintGreaterThanOrEqualToAnchor:(id)arg1 priority:(float)arg2 ;
-(id)avkit_constraintLessThanOrEqualToAnchor:(id)arg1 priority:(float)arg2 ;
-(id)avkit_constraintEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 ;
-(id)avkit_constraintGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 ;
-(id)avkit_constraintLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 ;
-(id)init;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 ;
-(long long)_anchorType;
-(id)item;
-(id)initWithAnchor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)constraintLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 ;
-(id)_proxiedItem;
-(id)constraintLessThanOrEqualToAnchor:(id)arg1 ;
-(id)constraintEqualToAnchor:(id)arg1 constant:(double)arg2 ;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg1 ;
-(id)name;
-(BOOL)validateOtherAttribute:(long long)arg1 ;
-(id)description;
-(BOOL)hasAmbiguousLayout;
-(BOOL)isCompatibleWithAnchor:(id)arg1 ;
-(id)_variableName;
-(id)constraintEqualToAnchor:(id)arg1 ;
-(long long)_proxiedAttribute;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithItem:(id)arg1 attribute:(long long)arg2 ;
-(id)ruleEqualToAnchor:(id)arg1 ;
-(id)ruleEqualToAnchor:(id)arg1 constant:(double)arg2 ;
-(id)_equationDescriptionInParent;
-(id)_nearestAncestorLayoutItem;
-(id)ruleGreaterThanOrEqualToAnchor:(id)arg1 ;
-(id)ruleLessThanOrEqualToAnchor:(id)arg1 ;
-(id)ruleGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 ;
-(id)ruleLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 ;
-(id)ruleEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4 ;
-(double)valueInItem:(id)arg1 ;
-(id)ruleGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4 ;
-(id)ruleLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4 ;
-(id)observableValueInItem:(id)arg1 ;
-(void)_accumulateReferenceLayoutItemsIntoTable:(id)arg1 ;
-(id)_referenceView;
-(id)constraintsAffectingLayout;
-(double)_valueInEngine:(id)arg1 ;
-(id)_expressionInContext:(SCD_Struct_NS14)arg1 ;
-(id)equationDescription;
-(id)_constraintItem;
-(long long)_constraintAttribute;
-(id)_referencedLayoutItems;
-(id)_equationDescriptionLegendEntries;
-(BOOL)nsli_lowerIntoExpression:(id)arg1 withCoefficient:(double)arg2 forConstraint:(id)arg3 ;
-(id)initWithName:(id)arg1 referenceItem:(id)arg2 symbolicAttribute:(long long)arg3 ;
-(id)initWithIndependentVariableName:(id)arg1 item:(id)arg2 symbolicAttribute:(long long)arg3 ;
-(id)_referenceItem;
-(id)_constituentAnchors;
-(id)anchorWithName:(id)arg1 referenceItem:(id)arg2 symbolicAttribute:(long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_expressionInDefaultContextWithEngine:(id)arg1 ;
-(id)anchorWithName:(id)arg1 ;
-(id)_referencingConstraints;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

