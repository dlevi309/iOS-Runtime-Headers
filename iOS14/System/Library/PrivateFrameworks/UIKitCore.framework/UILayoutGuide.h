/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UILayoutItem_Internal.h>
#import <UIKitCore/_UILayoutItem.h>
#import <libobjc.A.dylib/NSISVariableDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSLayoutDimension, NSLayoutRect, NSMutableArray, UIView, NSString, NSISVariable, NSArray, NSMapTable, UITraitCollection;

@interface UILayoutGuide : NSObject <UILayoutItem_Internal, _UILayoutItem, NSISVariableDelegate, NSCoding> {

	NSLayoutRect* _layoutRect;
	CGRect _layoutFrame;
	BOOL _isLayoutFrameValid;
	NSMutableArray* _constraintsToBeProcessedAfterDecoding;
	UIView* _unsafeUnretainedOwningView;
	BOOL _allowOwningViewSetting;
	BOOL _isLockedToOwningView;
	BOOL _useManualLayoutFrame;
	BOOL __allowsNegativeDimensions;
	BOOL __shouldBeArchived;
	UIView* _owningView;
	NSString* _identifier;
	NSISVariable* _minXVariable;
	NSISVariable* _minYVariable;
	NSISVariable* _boundsWidthVariable;
	NSISVariable* _boundsHeightVariable;
	NSArray* _systemConstraints;
	NSMapTable* _stashedLayoutVariableObservations;
	NSLayoutXAxisAnchor* _leadingAnchor;
	NSLayoutXAxisAnchor* _trailingAnchor;
	NSLayoutXAxisAnchor* _leftAnchor;
	NSLayoutXAxisAnchor* _rightAnchor;
	NSLayoutYAxisAnchor* _topAnchor;
	NSLayoutYAxisAnchor* _bottomAnchor;
	NSLayoutDimension* _widthAnchor;
	NSLayoutDimension* _heightAnchor;
	NSLayoutXAxisAnchor* _centerXAnchor;
	NSLayoutYAxisAnchor* _centerYAnchor;

}

@property (nonatomic,readonly) CGRect _ui_bounds; 
@property (assign,nonatomic) CGRect _ui_frame; 
@property (nonatomic,readonly) UIView * _ui_superview; 
@property (nonatomic,readonly) UIView * _ui_view; 
@property (assign,nonatomic) BOOL _ui_usesManualLayout; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * leadingAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * trailingAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * leftAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * rightAnchor; 
@property (nonatomic,readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (nonatomic,readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (nonatomic,readonly) NSLayoutDimension * widthAnchor; 
@property (nonatomic,readonly) NSLayoutDimension * heightAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * centerXAnchor; 
@property (nonatomic,readonly) NSLayoutYAxisAnchor * centerYAnchor; 
@property (nonatomic,readonly) NSLayoutYAxisAnchor * firstBaselineAnchor; 
@property (nonatomic,readonly) NSLayoutYAxisAnchor * lastBaselineAnchor; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasAmbiguousLayout; 
@property (nonatomic,retain,readonly) NSISVariable * _minXVariable;                                                             //@synthesize minXVariable=_minXVariable - In the implementation block
@property (nonatomic,retain,readonly) NSISVariable * _minYVariable;                                                             //@synthesize minYVariable=_minYVariable - In the implementation block
@property (nonatomic,retain,readonly) NSISVariable * _boundsWidthVariable;                                                      //@synthesize boundsWidthVariable=_boundsWidthVariable - In the implementation block
@property (nonatomic,retain,readonly) NSISVariable * _boundsHeightVariable;                                                     //@synthesize boundsHeightVariable=_boundsHeightVariable - In the implementation block
@property (nonatomic,retain,readonly) NSMapTable * _stashedLayoutVariableObservations;                                          //@synthesize stashedLayoutVariableObservations=_stashedLayoutVariableObservations - In the implementation block
@property (assign,setter=_setAllowsNegativeDimensions:,nonatomic) BOOL _allowsNegativeDimensions;                               //@synthesize _allowsNegativeDimensions=__allowsNegativeDimensions - In the implementation block
@property (assign,setter=_setShouldBeArchived:,nonatomic) BOOL _shouldBeArchived;                                               //@synthesize _shouldBeArchived=__shouldBeArchived - In the implementation block
@property (assign,setter=_setLockedToOwningView:,getter=_isLockedToOwningView,nonatomic) BOOL _lockedToOwningView;              //@synthesize isLockedToOwningView=_isLockedToOwningView - In the implementation block
@property (setter=_setSystemConstraints:,nonatomic,retain) NSArray * _systemConstraints;                                        //@synthesize systemConstraints=_systemConstraints - In the implementation block
@property (assign,setter=_setAllowOwningViewSetting:,nonatomic) BOOL _allowOwningViewSetting;                                   //@synthesize allowOwningViewSetting=_allowOwningViewSetting - In the implementation block
@property (nonatomic,readonly) BOOL _useManualLayoutFrame;                                                                      //@synthesize useManualLayoutFrame=_useManualLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect layoutFrame; 
@property (assign,nonatomic,__weak) UIView * owningView;                                                                        //@synthesize owningView=_owningView - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSLayoutXAxisAnchor * leadingAnchor;                                                             //@synthesize leadingAnchor=_leadingAnchor - In the implementation block
@property (nonatomic,readonly) NSLayoutXAxisAnchor * trailingAnchor;                                                            //@synthesize trailingAnchor=_trailingAnchor - In the implementation block
@property (nonatomic,readonly) NSLayoutXAxisAnchor * leftAnchor;                                                                //@synthesize leftAnchor=_leftAnchor - In the implementation block
@property (nonatomic,readonly) NSLayoutXAxisAnchor * rightAnchor;                                                               //@synthesize rightAnchor=_rightAnchor - In the implementation block
@property (nonatomic,readonly) NSLayoutYAxisAnchor * topAnchor;                                                                 //@synthesize topAnchor=_topAnchor - In the implementation block
@property (nonatomic,readonly) NSLayoutYAxisAnchor * bottomAnchor;                                                              //@synthesize bottomAnchor=_bottomAnchor - In the implementation block
@property (nonatomic,readonly) NSLayoutDimension * widthAnchor;                                                                 //@synthesize widthAnchor=_widthAnchor - In the implementation block
@property (nonatomic,readonly) NSLayoutDimension * heightAnchor;                                                                //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (nonatomic,readonly) NSLayoutXAxisAnchor * centerXAnchor;                                                             //@synthesize centerXAnchor=_centerXAnchor - In the implementation block
@property (nonatomic,readonly) NSLayoutYAxisAnchor * centerYAnchor;                                                             //@synthesize centerYAnchor=_centerYAnchor - In the implementation block
@property (setter=nsli_setPiercingToken:) unsigned long long nsli_piercingToken; 
+(double)_defaultSpacingBetweenGuidesForResolvingSymbolicConstant;
-(UITraitCollection *)traitCollection;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(id)nsli_constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 withSystemSpacingMultipliedBy:(double)arg4 ;
-(NSISVariable *)_minYVariable;
-(CGRect)layoutFrame;
-(void)setOwningView:(UIView *)arg1 ;
-(id)init;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(CGRect)_ui_frame;
-(void)_ui_removeFromParentLayoutItem;
-(void)_ui_insertSubLayoutItem:(id)arg1 atIndex:(long long)arg2 ;
-(void)set_ui_frame:(CGRect)arg1 ;
-(void)set_ui_usesManualLayout:(BOOL)arg1 ;
-(id)nsli_minYVariable;
-(void)_setAllowsNegativeDimensions:(BOOL)arg1 ;
-(void)_ui_addToView:(id)arg1 atIndex:(long long)arg2 ;
-(UIView *)_ui_view;
-(NSLayoutYAxisAnchor *)topAnchor;
-(UIView *)_ui_superview;
-(BOOL)_ui_usesManualLayout;
-(NSISVariable *)_minXVariable;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_ui_addSubLayoutItem:(id)arg1 ;
-(BOOL)_uili_isFocusGuide;
-(NSLayoutYAxisAnchor *)firstBaselineAnchor;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(BOOL)nsli_isRTL;
-(id)nsli_boundsWidthVariable;
-(NSLayoutXAxisAnchor *)leftAnchor;
-(NSLayoutDimension *)widthAnchor;
-(NSLayoutYAxisAnchor *)bottomAnchor;
-(void)_setManualLayoutFrame:(CGRect)arg1 ;
-(NSString *)description;
-(UIView *)owningView;
-(NSLayoutXAxisAnchor *)rightAnchor;
-(CGSize)nsli_engineToUserScalingCoefficients;
-(id)nsli_contentHeightVariable;
-(NSISVariable *)_boundsWidthVariable;
-(id)nsli_contentWidthVariable;
-(id)nsli_superitem;
-(BOOL)nsli_isFlipped;
-(BOOL)hasAmbiguousLayout;
-(void)nsli_addConstraint:(id)arg1 ;
-(id)nsli_layoutMarginsItem;
-(void)_addConstraintToBeProcessedAfterDecoding:(id)arg1 ;
-(BOOL)nsli_removeConstraint:(id)arg1 ;
-(id)nsli_layoutEngine;
-(NSLayoutXAxisAnchor *)centerXAnchor;
-(NSLayoutXAxisAnchor *)leadingAnchor;
-(NSLayoutYAxisAnchor *)centerYAnchor;
-(id)constraintsAffectingLayoutForAxis:(long long)arg1 ;
-(id)_descriptionForLayoutTrace;
-(id)nsli_installedConstraints;
-(double)nsli_marginOffsetForAttribute:(long long)arg1 ;
-(id)nsli_description;
-(id)_autolayoutTraceAtLevel:(long long)arg1 recursively:(BOOL)arg2 ;
-(void)_updateLayoutFrameInOwningView:(id)arg1 fromEngine:(id)arg2 ;
-(BOOL)_uili_requiresObservationForVariable:(id)arg1 ;
-(NSLayoutXAxisAnchor *)trailingAnchor;
-(id)_uili_existingBaseFrameVariables;
-(id)_uili_observableLayoutEngineForBaseFrameVariables:(BOOL)arg1 ;
-(id)_uili_existingObservationEligibleLayoutVariables;
-(void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(BOOL)arg1 ;
-(BOOL)_shouldBeArchived;
-(NSMapTable *)_stashedLayoutVariableObservations;
-(unsigned long long)nsli_autoresizingMask;
-(BOOL)nsli_defaultResolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4 ;
-(void)_setOwningView:(id)arg1 ;
-(BOOL)nsli_isLegalConstraintItem;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(NSLayoutDimension *)heightAnchor;
-(id)nsli_heightVariable;
-(void)_uili_stashLayoutVariableObservation:(id)arg1 forVariable:(id)arg2 ;
-(BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 container:(id)arg4 ;
-(BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4 ;
-(CGSize)nsli_convertSizeToEngineSpace:(CGSize)arg1 ;
-(CGSize)nsli_convertSizeFromEngineSpace:(CGSize)arg1 ;
-(BOOL)nsli_resolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4 ;
-(BOOL)nsli_descriptionIncludesPointer;
-(BOOL)nsli_isCollectingConstraintChangesForLaterCoordinatedFlush:(id)arg1 ;
-(id)nsli_widthVariable;
-(NSLayoutYAxisAnchor *)lastBaselineAnchor;
-(void)_snipReferencingConstraints;
-(void)_invalidateLayoutFrame;
-(BOOL)_allowsNegativeDimensions;
-(id)_createAnchorWithClass:(Class)arg1 attribute:(long long)arg2 ;
-(void)_owningViewIsDeallocating;
-(BOOL)_allowOwningViewSetting;
-(BOOL)_isLockedToOwningView;
-(void)_setAllowOwningViewSetting:(BOOL)arg1 ;
-(BOOL)_useManualLayoutFrame;
-(void)_setLockedToOwningView:(BOOL)arg1 ;
-(void)_setSystemConstraints:(id)arg1 ;
-(NSArray *)_systemConstraints;
-(CGRect)_ui_bounds;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)nsli_boundsHeightVariable;
-(void*)_referenceView;
-(id)nsli_minXVariable;
-(id)_layoutRect;
-(void)_setShouldBeArchived:(BOOL)arg1 ;
-(NSISVariable *)_boundsHeightVariable;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

