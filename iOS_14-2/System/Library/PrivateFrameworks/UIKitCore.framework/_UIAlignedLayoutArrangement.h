/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UILayoutArrangement.h>
#import <UIKitCore/_UIALAPropertySource.h>

@class NSMutableDictionary, NSSet, NSString;

@interface _UIAlignedLayoutArrangement : _UILayoutArrangement <_UIALAPropertySource> {

	NSMutableDictionary* _alignmentConstraints;
	unsigned long long _alignment;

}

@property (assign,nonatomic) unsigned long long alignment;                         //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (nonatomic,readonly) NSSet * invalidBaselineConstraints; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_configurationHistoryClass;
-(void)setLayoutFillsCanvas:(BOOL)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(void)setAxis:(long long)arg1 ;
-(void)setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1 ;
-(void)_updateArrangementConstraints;
-(id)_alignmentPropertySource;
-(id)_baselineDependentConstraints;
-(BOOL)_hasStaleConfiguration;
-(BOOL)_spanningGuideConstraintsNeedUpdate;
-(long long)_attributeForConstraintGroupName:(id)arg1 ;
-(void)_removeIndividualConstraintsAsNecessary;
-(unsigned long long)alignment;
-(BOOL)_wantsAmbiguitySuppressionConstraints;
-(BOOL)_wantsConstraintsUsingAttributesForAxis:(long long)arg1 ;
-(void)_clearAllConstraintsArrays;
-(BOOL)_usesCenteringConnectionConstraint;
-(void)_setUpConstraintForItem:(id)arg1 referenceItem:(id)arg2 attribute:(long long)arg3 inConstraintsTable:(id)arg4 ;
-(void)_addConstraintGroupsAsNecessary;
-(long long)_axisForSpanningLayoutGuide;
-(id)_identifierForSpanningLayoutGuide;
-(void)setAlignment:(unsigned long long)arg1 ;
-(unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1 ;
-(BOOL)_wantsConstraintsForAttribute:(long long)arg1 ;
-(BOOL)_requiresNotificationForHasBaselinePropertyChanges;
-(id)_alignmentConfigurationHistory;
-(void)_removeConstraintGroupsAsNecessary;
-(void)_addIndividualConstraintsIfPossible;
-(BOOL)_canvasConnectionConstraintsNeedUpdatePass;
-(void)_updateConfigurationHistory;
-(BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)arg1 ;
-(long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1 ;
@end

