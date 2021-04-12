/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
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
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSLayoutXAxisAnchor *)leadingAnchor;
-(NSLayoutYAxisAnchor *)topAnchor;
-(NSLayoutDimension *)widthAnchor;
-(NSLayoutDimension *)heightAnchor;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(BOOL)nsli_isRTL;
-(NSLayoutXAxisAnchor *)centerXAnchor;
-(NSLayoutXAxisAnchor *)trailingAnchor;
-(NSLayoutYAxisAnchor *)centerYAnchor;
-(NSLayoutYAxisAnchor *)bottomAnchor;
-(NSLayoutXAxisAnchor *)leftAnchor;
-(NSLayoutXAxisAnchor *)rightAnchor;
-(id)nsli_superitem;
-(BOOL)nsli_isFlipped;
-(id)nsli_minYVariable;
-(id)nsli_boundsHeightVariable;
-(id)nsli_minXVariable;
-(id)nsli_description;
-(BOOL)nsli_descriptionIncludesPointer;
-(id)nsli_layoutEngine;
-(id)nsli_installedConstraints;
-(CGSize)nsli_engineToUserScalingCoefficients;
-(BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4 ;
-(void*)_referenceView;
-(BOOL)hasAmbiguousLayout;
-(BOOL)nsli_isLegalConstraintItem;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(id)nsli_boundsWidthVariable;
-(BOOL)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(BOOL)nsli_resolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4 ;
-(BOOL)nsli_defaultResolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4 ;
-(double)nsli_marginOffsetForAttribute:(long long)arg1 ;
-(CGSize)nsli_convertSizeFromEngineSpace:(CGSize)arg1 ;
-(void)nsli_addConstraint:(id)arg1 ;
-(BOOL)nsli_removeConstraint:(id)arg1 ;
-(unsigned long long)nsli_autoresizingMask;
-(id)nsli_layoutMarginsItem;
-(id)_layoutRect;
-(UITraitCollection *)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGRect)layoutFrame;
-(UIView *)owningView;
-(void)setOwningView:(UIView *)arg1 ;
-(NSLayoutYAxisAnchor *)lastBaselineAnchor;
-(NSLayoutYAxisAnchor *)firstBaselineAnchor;
-(void)_setLockedToOwningView:(BOOL)arg1 ;
-(void)_setSystemConstraints:(id)arg1 ;
-(NSArray *)_systemConstraints;
-(void)_setManualLayoutFrame:(CGRect)arg1 ;
-(BOOL)_uili_isFocusGuide;
-(void)_ui_removeFromParentLayoutItem;
-(void)_ui_insertSubLayoutItem:(id)arg1 atIndex:(long long)arg2 ;
-(void)_ui_addSubLayoutItem:(id)arg1 ;
-(CGRect)_ui_frame;
-(void)set_ui_frame:(CGRect)arg1 ;
-(void)set_ui_usesManualLayout:(BOOL)arg1 ;
-(void)_setAllowsNegativeDimensions:(BOOL)arg1 ;
-(CGRect)_ui_bounds;
-(void)_ui_addToView:(id)arg1 atIndex:(long long)arg2 ;
-(UIView *)_ui_superview;
-(UIView *)_ui_view;
-(BOOL)_ui_usesManualLayout;
-(NSISVariable *)_boundsWidthVariable;
-(NSISVariable *)_boundsHeightVariable;
-(NSISVariable *)_minXVariable;
-(NSISVariable *)_minYVariable;
-(id)nsli_contentHeightVariable;
-(id)nsli_contentWidthVariable;
-(void)_addConstraintToBeProcessedAfterDecoding:(id)arg1 ;
-(id)constraintsAffectingLayoutForAxis:(long long)arg1 ;
-(id)_descriptionForLayoutTrace;
-(id)_autolayoutTraceAtLevel:(long long)arg1 recursively:(BOOL)arg2 ;
-(void)_updateLayoutFrameInOwningView:(id)arg1 fromEngine:(id)arg2 ;
-(id)_uili_existingBaseFrameVariables;
-(id)_uili_observableLayoutEngineForBaseFrameVariables:(BOOL)arg1 ;
-(id)_uili_existingObservationEligibleLayoutVariables;
-(void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(BOOL)arg1 ;
-(NSMapTable *)_stashedLayoutVariableObservations;
-(void)_uili_stashLayoutVariableObservation:(id)arg1 forVariable:(id)arg2 ;
-(BOOL)_uili_requiresObservationForVariable:(id)arg1 ;
-(BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 container:(id)arg4 ;
-(CGSize)nsli_convertSizeToEngineSpace:(CGSize)arg1 ;
-(BOOL)nsli_isCollectingConstraintChangesForLaterCoordinatedFlush:(id)arg1 ;
-(id)nsli_widthVariable;
-(id)nsli_heightVariable;
-(void)_setOwningView:(id)arg1 ;
-(void)_snipReferencingConstraints;
-(void)_invalidateLayoutFrame;
-(BOOL)_allowsNegativeDimensions;
-(id)_createAnchorWithClass:(Class)arg1 attribute:(long long)arg2 ;
-(void)_owningViewIsDeallocating;
-(BOOL)_allowOwningViewSetting;
-(void)_setAllowOwningViewSetting:(BOOL)arg1 ;
-(BOOL)_isLockedToOwningView;
-(BOOL)_useManualLayoutFrame;
-(BOOL)_shouldBeArchived;
-(void)_setShouldBeArchived:(BOOL)arg1 ;
@end

