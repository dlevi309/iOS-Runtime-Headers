/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

@class TSKSelection, NSSet;


@protocol TSDEditor <NSObject>
@property (nonatomic,retain) TSKSelection * selection; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingFill; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingStroke; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingShadow; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingReflection; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingOpacity; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingTextInset; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingConnectionLineAttributes; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingEndpoints; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingSmartShapeAttributes; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingResize; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingShrinkTextToFit; 
@optional
-(id)model;
-(void)teardown;
-(void)cut:(id)arg1;
-(void)copy:(id)arg1;
-(void)paste:(id)arg1;
-(void)willEnterForeground;
-(void)didEnterBackground;
-(TSKSelection *)selection;
-(void)select:(id)arg1;
-(void)selectAll:(id)arg1;
-(void)delete:(id)arg1;
-(void)setSelection:(id)arg1;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
-(BOOL)canAddOrShowComment;
-(BOOL)shouldEndEditingToBeginEditingRep:(id)arg1;
-(void)setSelection:(id)arg1 withFlags:(unsigned long long)arg2;
-(BOOL)readyToAcceptSelection:(id)arg1 onInfo:(id)arg2;
-(BOOL)ignoreSetSelection:(id)arg1 onInfo:(id)arg2;
-(void)setSelectionWithSearchReference:(id)arg1;
-(void)didBecomeCurrentEditor;
-(void)willResignCurrentEditor;
-(void)didBecomeTextInputEditor;
-(void)willResignTextInputEditor;
-(void)didResignTextInputEditor;
-(BOOL)wantsToBePushedBackOntoStackForSelection:(id)arg1;
-(id)editingSearchReference;
-(id)topLevelInspectorViewControllers;
-(id)topLevelInspectorAutosaveName;
-(CGSize*)topLevelInspectorPreferredPopoverSize;
-(id)level2InspectorViewControllers;
-(BOOL)shouldProhibitAction:(SEL)arg1;
-(id)extraMenuItems;
-(void)customAction5:(id)arg1;
-(void)customAction6:(id)arg1;
-(void)customAction7:(id)arg1;
-(void)customAction8:(id)arg1;
-(id)wrapInspectorController;
-(double)viewScaleForSelectionWithTargetPointSize:(double)arg1;
-(double)targetPointSizeForSelectionWithViewScale:(double)arg1;
-(CGRect*)zoomRectForSelection:(id)arg1;
-(BOOL)suppressAutozoom;
-(BOOL)canBeginPathEditing;
-(BOOL)canBeginEditingRepOnDoubleTap:(id)arg1;
-(void)reverseDirection:(id)arg1;
-(void)beginAutomaticTextEditingIfNeededForPoint:(CGPoint)arg1;
-(BOOL)allowAutomaticTextEditingToBeginWithDifferentEditor;
-(CGRect*)targetRectForEditMenu;
-(void)addContextualMenuItemsToArray:(id)arg1;
-(id)canvasCoachingTips;
-(CGRect*)coachingTipManager:(id)arg1 coachingTipView:(id)arg2 canvasRectForKey:(id)arg3;
-(id)inspectorTabTipKey;
-(NSSet *)selectedObjectsSupportingFill;
-(NSSet *)selectedObjectsSupportingStroke;
-(NSSet *)selectedObjectsSupportingShadow;
-(NSSet *)selectedObjectsSupportingReflection;
-(NSSet *)selectedObjectsSupportingOpacity;
-(NSSet *)selectedObjectsSupportingTextInset;
-(NSSet *)selectedObjectsSupportingConnectionLineAttributes;
-(NSSet *)selectedObjectsSupportingEndpoints;
-(NSSet *)selectedObjectsSupportingSmartShapeAttributes;
-(NSSet *)selectedObjectsSupportingResize;
-(NSSet *)selectedObjectsSupportingShrinkTextToFit;

@required
-(id)documentRoot;

@end

