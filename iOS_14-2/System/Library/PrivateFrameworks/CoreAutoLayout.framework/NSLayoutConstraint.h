/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSISConstraint.h>

@class _NSLayoutConstraintConstant, _NSConstraintDescriptionLayoutRuleNode, NSLayoutAnchor, NSString, NSSet;

@interface NSLayoutConstraint : NSObject <NSISConstraint> {

	id _container;
	id _firstAnchor;
	id _secondAnchor;
	double _constant;
	double _loweredConstant;
	id _markerAndPositiveExtraVar;
	id _negativeExtraVar;
	unsigned long long _layoutConstraintFlags;
	float _coefficient;
	float _priority;

}

@property (setter=_setEncodedConstant:,getter=_encodedConstant) _NSLayoutConstraintConstant * encodedConstant; 
@property (setter=_setAssociatedRuleNode:) _NSConstraintDescriptionLayoutRuleNode * _associatedRuleNode; 
@property (setter=_setFirstAnchor:,copy) NSLayoutAnchor * firstAnchor;                                                                               //@synthesize firstAnchor=_firstAnchor - In the implementation block
@property (setter=_setRelation:) long long relation; 
@property (setter=_setMultiplier:) double multiplier; 
@property (setter=_setSecondAnchor:,copy) NSLayoutAnchor * secondAnchor;                                                                             //@synthesize secondAnchor=_secondAnchor - In the implementation block
@property (copy) NSString * identifier; 
@property (readonly) BOOL hasBeenLowered; 
@property (assign) id container; 
@property (setter=_setContainerDeclaredConstraint:) BOOL _containerDeclaredConstraint; 
@property (readonly) double unsatisfaction; 
@property (copy) NSString * symbolicConstant; 
@property (assign) double symbolicConstantMultiplier; 
@property (assign,setter=_setLoweredConstantNeedsUpdate:,getter=_loweredConstantNeedsUpdate,nonatomic) BOOL loweredConstantNeedsUpdate; 
@property (copy,readonly) NSSet * _referencedLayoutItems; 
@property (assign) float priority; 
@property (assign) BOOL shouldBeArchived; 
@property (readonly) id firstItem; 
@property (readonly) long long firstAttribute; 
@property (readonly) id secondItem; 
@property (readonly) long long secondAttribute; 
@property (assign) double constant; 
@property (getter=isActive) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ax_constraintsToMakeItem:(id)arg1 sameDimensionsAsItem:(id)arg2 ;
+(id)ax_constraintsToMakeView:(id)arg1 sameDimensionsAsView:(id)arg2 ;
+(void)_sf_setConstraints:(id)arg1 active:(BOOL)arg2 ;
+(id)ak_constraintsForView:(id)arg1 equalToView:(id)arg2 ;
+(id)ak_constraintsForView:(id)arg1 equalToLayoutGuide:(id)arg2 ;
+(id)avkit_constraintsFromEdgesOfItem:(id)arg1 toLeadingAnchor:(id)arg2 topAnchor:(id)arg3 trailingAnchor:(id)arg4 bottomAnchor:(id)arg5 priority:(float)arg6 ;
+(id)avkit_constraintsFromEdgesOfItem:(id)arg1 toEdgesOfItem:(id)arg2 ;
+(id)avkit_constraintsFromLeadingAndTrailingEdgesOfItem:(id)arg1 toEdgesOfItem:(id)arg2 ;
+(id)avkit_constraintsFromTopAndBottomEdgesOfItem:(id)arg1 toEdgesOfItem:(id)arg2 ;
+(id)PG_constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 priority:(float)arg8 ;
+(double)_constraintConstantLimit;
+(BOOL)_UIWantsMarginAttributeSupport;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 symbolicConstantMultiplier:(double)arg8 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 ;
+(id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4 ;
+(void)activateConstraints:(id)arg1 ;
+(id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 multiplier:(double)arg4 constant:(double)arg5 ;
+(double)_constraintConstantLimit;
+(void)deactivateConstraints:(id)arg1 ;
+(id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 ;
+(void)_setLegacyDecodingOnly:(BOOL)arg1 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8 ;
+(id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 constant:(double)arg3 ;
-(id)ax_copyWithPriority:(float)arg1 ;
-(void)ax_removeFromContainer;
-(id)ql_activatedConstraint;
-(id)_ola_dimensionRefItem;
-(id)_ola_dimensionItem;
-(void)_setBaselineLoweringInfo:(id)arg1 forFirstItem:(BOOL)arg2 ;
-(id)_baselineLoweringInfoForFirstItem:(BOOL)arg1 ;
-(id)_uiFirstRefView;
-(id)_encodedConstant;
-(void)_setEncodedConstant:(id)arg1 ;
-(id)_uiSecondRefView;
-(id)_debuggableEquationBaseDescription;
-(id)_debuggableEquationLegendDescription;
-(id)_debuggableEquationDescriptionWithoutLegend;
-(id)_ui_constraintWithPriority:(float)arg1 ;
-(double)constant;
-(id)firstItem;
-(id)animations;
-(id)_priorityDescription;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)_isEqualToConstraintValue:(id)arg1 includingConstant:(BOOL)arg2 includeOtherMutableProperties:(BOOL)arg3 ;
-(void)setActive:(BOOL)arg1 ;
-(int)_constraintType;
-(id)init;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id*)arg3 ;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(double)multiplier;
-(void)_addToEngine:(id)arg1 ;
-(void)setContainer:(id)arg1 ;
-(id)secondItem;
-(void)_removeFromEngine:(id)arg1 ;
-(BOOL)hasBeenLowered;
-(void)setConstant:(double)arg1 ;
-(NSString *)description;
-(BOOL)_nsib_isRedundant;
-(id)_identifier;
-(void)setAnimations:(id)arg1 ;
-(BOOL)shouldBeArchived;
-(BOOL)_loweredConstantIsRounded;
-(id)descriptionAccessory;
-(void)setSymbolicConstant:(NSString *)arg1 ;
-(long long)secondAttribute;
-(NSString *)symbolicConstant;
-(long long)firstAttribute;
-(id)initWithCoder:(id)arg1 ;
-(void)setShouldBeArchived:(BOOL)arg1 ;
-(void)_setMultiplier:(double)arg1 ;
-(void)setSymbolicConstantMultiplier:(double)arg1 ;
-(double)symbolicConstantMultiplier;
-(id)_markerAndPositiveExtraVar;
-(BOOL)_referencesLayoutItem:(id)arg1 ;
-(void)_containerGeometryDidChange;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(double)priorityForVariable:(id)arg1 ;
-(BOOL)_addToEngine:(id)arg1 mutuallyExclusiveConstraints:(id*)arg2 ;
-(double)unsatisfaction;
-(long long)relation;
-(_NSConstraintDescriptionLayoutRuleNode *)_associatedRuleNode;
-(void)_setAssociatedRuleNode:(id)arg1 ;
-(void)_setContainerDeclaredConstraint:(BOOL)arg1 ;
-(void)_setFirstAnchor:(id)arg1 ;
-(void)_setSecondAnchor:(id)arg1 ;
-(id)_constantDescriptionForDTrace;
-(NSLayoutAnchor *)firstAnchor;
-(BOOL)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(BOOL*)arg2 ;
-(id)_symbolicConstant;
-(NSSet *)_referencedLayoutItems;
-(void)_setSymbolicConstant:(id)arg1 ;
-(BOOL)_effectiveConstant:(double*)arg1 error:(id*)arg2 ;
-(id)_descriptionforSymbolicConstant;
-(id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2 ;
-(void)_setRelation:(long long)arg1 ;
-(void)_setActive:(BOOL)arg1 mutuallyExclusiveConstraints:(id*)arg2 ;
-(void)_tryToActivateMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2 ;
-(BOOL)_isFudgeable;
-(BOOL)_nsib_isRedundantInEngine:(id)arg1 ;
-(void)_setFirstItem:(id)arg1 attribute:(long long)arg2 ;
-(void)_setSecondItem:(id)arg1 attribute:(long long)arg2 ;
-(void)_setLoweredConstantNeedsUpdate:(BOOL)arg1 ;
-(BOOL)_loweredConstantNeedsUpdate;
-(BOOL)_isIBPrototypingLayoutConstraint;
-(BOOL)_existsInEngine:(id)arg1 ;
-(double)_fudgeIncrement;
-(double)_allowedMagnitudeForIntegralizationAdjustment;
-(void)_clearWeakContainerReference;
-(BOOL)_containerDeclaredConstraint;
-(id)_constraintByReplacingView:(id)arg1 withView:(id)arg2 ;
-(BOOL)_describesSameRestrictionAsConstraint:(id)arg1 ;
-(id)_loweredExpression;
-(unsigned long long)_constraintValueHashIncludingConstant:(BOOL)arg1 includeOtherMutableProperties:(BOOL)arg2 ;
-(void)_setMutablePropertiesFromConstraint:(id)arg1 ;
-(id)_constraintValueCopy;
-(CGSize)_engineToContainerScalingCoefficients;
-(id)_explainUnsatisfaction;
-(float)priority;
-(id)container;
-(void)_forceSatisfactionMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2 ;
-(void)setPriority:(float)arg1 ;
-(NSLayoutAnchor *)secondAnchor;
-(void)dealloc;
@end

