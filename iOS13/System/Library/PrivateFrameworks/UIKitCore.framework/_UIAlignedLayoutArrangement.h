/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UILayoutArrangement.h>
#import <UIKitCore/_UIALAPropertySource.h>

@class NSMutableDictionary, NSString, NSSet;

@interface _UIAlignedLayoutArrangement : _UILayoutArrangement <_UIALAPropertySource> {

	NSMutableDictionary* _alignmentConstraints;
	unsigned long long _alignment;

}

@property (assign,nonatomic) unsigned long long alignment;                         //@synthesize alignment=_alignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (nonatomic,readonly) NSSet * invalidBaselineConstraints; 
+(Class)_configurationHistoryClass;
-(unsigned long long)alignment;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)setAxis:(long long)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(void)setLayoutFillsCanvas:(BOOL)arg1 ;
-(void)setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1 ;
-(unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1 ;
-(id)_alignmentPropertySource;
-(BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)arg1 ;
-(BOOL)_spanningGuideConstraintsNeedUpdate;
-(id)_alignmentConfigurationHistory;
-(BOOL)_canvasConnectionConstraintsNeedUpdatePass;
-(BOOL)_requiresNotificationForHasBaselinePropertyChanges;
-(BOOL)_hasStaleConfiguration;
-(void)_updateConfigurationHistory;
-(BOOL)_wantsConstraintsUsingAttributesForAxis:(long long)arg1 ;
-(BOOL)_wantsAmbiguitySuppressionConstraints;
-(BOOL)_wantsConstraintsForAttribute:(long long)arg1 ;
-(long long)_attributeForConstraintGroupName:(id)arg1 ;
-(void)_setUpConstraintForItem:(id)arg1 referenceItem:(id)arg2 attribute:(long long)arg3 inConstraintsTable:(id)arg4 ;
-(void)_updateArrangementConstraints;
-(void)_removeConstraintGroupsAsNecessary;
-(void)_removeIndividualConstraintsAsNecessary;
-(void)_addIndividualConstraintsIfPossible;
-(void)_addConstraintGroupsAsNecessary;
-(void)_clearAllConstraintsArrays;
-(id)_identifierForSpanningLayoutGuide;
-(long long)_axisForSpanningLayoutGuide;
-(long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1 ;
-(BOOL)_usesCenteringConnectionConstraint;
-(id)_baselineDependentConstraints;
@end

