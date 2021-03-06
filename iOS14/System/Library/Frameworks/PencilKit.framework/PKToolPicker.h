/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKPaletteViewDelegate.h>
#import <libobjc.A.dylib/PKPaletteViewInteractionDelegate.h>

@protocol PKPaletteViewAnnotationDelegate, PKPaletteViewDelegate, PKToolPickerPrivateDelegate;
@class PKTool, NSString, NSHashTable, PKPaletteViewInteraction, NSArray, UIViewController, PKPaletteHostView, PKDrawingPaletteView;

@interface PKToolPicker : NSObject <PKPaletteViewDelegate, PKPaletteViewInteractionDelegate> {

	BOOL __showsHandwritingTool;
	BOOL _wasVisibleBeforeResponderChanges;
	BOOL _didCalculateVisibleBeforeResponderChanges;
	BOOL _rulerActive;
	BOOL _showsDrawingPolicyControls;
	BOOL __paletteWasCompact;
	BOOL __pencilInteractionEnabledWhenNotVisible;
	BOOL __inputViewVisible;
	BOOL __wantsClearBackgroundColorInCompactSize;
	BOOL __animatingToVisible;
	PKTool* _selectedTool;
	NSString* _stateAutosaveName;
	long long _overrideUserInterfaceStyle;
	long long _colorUserInterfaceStyle;
	NSHashTable* __observers;
	NSHashTable* __firstRespondersForVisibleUI;
	PKPaletteViewInteraction* __interaction;
	NSArray* __toolIdentifiers;
	NSArray* __toolProperties;
	UIViewController* __presentationController;
	id<PKPaletteViewAnnotationDelegate> __annotationDelegate;
	id<PKPaletteViewDelegate> __additionalPaletteViewDelegate;
	id<PKToolPickerPrivateDelegate> __delegate;

}

@property (nonatomic,retain) NSHashTable * _observers;                                                                                                                    //@synthesize _observers=__observers - In the implementation block
@property (nonatomic,retain) NSHashTable * _firstRespondersForVisibleUI;                                                                                                  //@synthesize _firstRespondersForVisibleUI=__firstRespondersForVisibleUI - In the implementation block
@property (setter=_setInteraction:,nonatomic,retain) PKPaletteViewInteraction * _interaction;                                                                             //@synthesize _interaction=__interaction - In the implementation block
@property (assign,nonatomic) BOOL _paletteWasCompact;                                                                                                                     //@synthesize _paletteWasCompact=__paletteWasCompact - In the implementation block
@property (nonatomic,retain) NSArray * _toolIdentifiers;                                                                                                                  //@synthesize _toolIdentifiers=__toolIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * _toolProperties;                                                                                                                   //@synthesize _toolProperties=__toolProperties - In the implementation block
@property (assign,getter=_isPencilInteractionEnabledWhenNotVisible,nonatomic) BOOL _pencilInteractionEnabledWhenNotVisible;                                               //@synthesize _pencilInteractionEnabledWhenNotVisible=__pencilInteractionEnabledWhenNotVisible - In the implementation block
@property (assign,setter=_setInputViewVisible:,getter=_isInputViewVisible,nonatomic) BOOL _inputViewVisible;                                                              //@synthesize _inputViewVisible=__inputViewVisible - In the implementation block
@property (assign,nonatomic) BOOL _wasVisibleBeforeResponderChanges;                                                                                                      //@synthesize wasVisibleBeforeResponderChanges=_wasVisibleBeforeResponderChanges - In the implementation block
@property (assign,nonatomic) BOOL _didCalculateVisibleBeforeResponderChanges;                                                                                             //@synthesize didCalculateVisibleBeforeResponderChanges=_didCalculateVisibleBeforeResponderChanges - In the implementation block
@property (nonatomic,readonly) NSString * _paletteViewStateRestorationDefaultsKey; 
@property (assign,setter=_setPresentationController:,nonatomic,__weak) UIViewController * _presentationController;                                                        //@synthesize _presentationController=__presentationController - In the implementation block
@property (assign,setter=_setAnnotationDelegate:,nonatomic,__weak) id<PKPaletteViewAnnotationDelegate> _annotationDelegate;                                               //@synthesize _annotationDelegate=__annotationDelegate - In the implementation block
@property (assign,setter=_setAdditionalPaletteViewDelegate:,nonatomic,__weak) id<PKPaletteViewDelegate> _additionalPaletteViewDelegate;                                   //@synthesize _additionalPaletteViewDelegate=__additionalPaletteViewDelegate - In the implementation block
@property (assign,setter=_setWantsClearBackgroundColorInCompactSize:,nonatomic) BOOL _wantsClearBackgroundColorInCompactSize;                                             //@synthesize _wantsClearBackgroundColorInCompactSize=__wantsClearBackgroundColorInCompactSize - In the implementation block
@property (assign,nonatomic,__weak) id<PKToolPickerPrivateDelegate> _delegate;                                                                                            //@synthesize _delegate=__delegate - In the implementation block
@property (nonatomic,readonly) BOOL _interactionIsValid; 
@property (nonatomic,readonly) PKPaletteHostView * _paletteHostView; 
@property (nonatomic,readonly) PKDrawingPaletteView * _paletteView; 
@property (assign,setter=_setBackgroundMaterialUpdatingPaused:,getter=_isBackgroundMaterialUpdatingPaused,nonatomic) BOOL _backgroundMaterialUpdatingPaused; 
@property (assign,setter=_setShowsHandwritingTool:,nonatomic) BOOL _showsHandwritingTool;                                                                                 //@synthesize _showsHandwritingTool=__showsHandwritingTool - In the implementation block
@property (getter=_isHandwritingToolSelected,nonatomic,readonly) BOOL _handwritingToolSelected; 
@property (getter=_isAnimatingToVisible,nonatomic,readonly) BOOL _animatingToVisible;                                                                                     //@synthesize _animatingToVisible=__animatingToVisible - In the implementation block
@property (nonatomic,retain) PKTool * selectedTool;                                                                                                                       //@synthesize selectedTool=_selectedTool - In the implementation block
@property (assign,getter=isRulerActive,nonatomic) BOOL rulerActive;                                                                                                       //@synthesize rulerActive=_rulerActive - In the implementation block
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,copy) NSString * stateAutosaveName;                                                                                                                  //@synthesize stateAutosaveName=_stateAutosaveName - In the implementation block
@property (assign,nonatomic) long long overrideUserInterfaceStyle;                                                                                                        //@synthesize overrideUserInterfaceStyle=_overrideUserInterfaceStyle - In the implementation block
@property (assign,nonatomic) long long colorUserInterfaceStyle;                                                                                                           //@synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle - In the implementation block
@property (assign,nonatomic) BOOL showsDrawingPolicyControls;                                                                                                             //@synthesize showsDrawingPolicyControls=_showsDrawingPolicyControls - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activeToolPickerForWindow:(id)arg1 ;
+(BOOL)isActiveToolPickerVisibleForWindow:(id)arg1 ;
+(BOOL)_internalClassWantsToolPicker:(id)arg1 visibleForResponder:(id)arg2 ;
+(BOOL)_textInputWantsToolPickerVisible:(id)arg1 forFirstResponder:(id)arg2 ;
+(id)_toolPickerForWindow:(id)arg1 ;
+(id)_windowForToolPicker:(id)arg1 ;
+(BOOL)_canShowHandwritingTool;
+(id)_windowSceneForToolPicker:(id)arg1 ;
+(id)sharedToolPickerForWindow:(id)arg1 ;
+(void)_setPrefersPencilOnlyDrawingForiWork:(BOOL)arg1 ;
-(long long)overrideUserInterfaceStyle;
-(id<PKToolPickerPrivateDelegate>)_delegate;
-(void)addObserver:(id)arg1 ;
-(void)inputResponderController:(id)arg1 inputViewSetVisibilityDidChange:(BOOL)arg2 includedReset:(BOOL)arg3 ;
-(id)init;
-(id<PKPaletteViewAnnotationDelegate>)_annotationDelegate;
-(NSHashTable *)_observers;
-(PKPaletteViewInteraction *)_interaction;
-(BOOL)isVisible;
-(void)set_delegate:(id<PKToolPickerPrivateDelegate>)arg1 ;
-(void)_setPresentationController:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_updateUI;
-(void)setOverrideUserInterfaceStyle:(long long)arg1 ;
-(UIViewController *)_presentationController;
-(void)dealloc;
-(BOOL)_isAnimatingToVisible;
-(void)_setBackgroundMaterialUpdatingPaused:(BOOL)arg1 ;
-(void)_saveStateIfNecessary;
-(CGRect)paletteViewColorPickerPopoverPresentationSourceRect:(id)arg1 ;
-(id)paletteViewColorPickerPopoverPresentationSourceView:(id)arg1 ;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(void)setIsEditingStrokeSelection:(BOOL)arg1 ;
-(PKDrawingPaletteView *)_paletteView;
-(NSArray *)_toolProperties;
-(void)paletteViewInteractionDidActivate:(id)arg1 ;
-(void)paletteViewInteractionWillEnterForeground:(id)arg1 ;
-(void)_updatePaletteTraitCollection:(id)arg1 ;
-(void)_updatePaletteUserInterfaceStyle:(long long)arg1 ;
-(PKPaletteHostView *)_paletteHostView;
-(NSHashTable *)_firstRespondersForVisibleUI;
-(void)calculateIsVisibleBeforeResponderChangesForCurrentRunLoopIfNecessary;
-(PKTool *)selectedTool;
-(BOOL)isRulerActive;
-(void)setRulerActive:(BOOL)arg1 ;
-(void)_updateToolPickerVisibility;
-(id)_currentFirstResponder;
-(void)_setVisibleInWindow:(id)arg1 ;
-(void)_setSelectedTool:(id)arg1 saveOptions:(BOOL)arg2 updateUI:(BOOL)arg3 ;
-(BOOL)_showsHandwritingTool;
-(void)_savePaletteViewState;
-(BOOL)_didCalculateVisibleBeforeResponderChanges;
-(void)set_didCalculateVisibleBeforeResponderChanges:(BOOL)arg1 ;
-(BOOL)_isInputViewVisible;
-(id)_configuredPaletteViewInteractionForWindow:(id)arg1 ;
-(void)_setInteraction:(id)arg1 ;
-(void)_setInputViewVisible:(BOOL)arg1 ;
-(void)_restoreToolPickerState;
-(BOOL)_isPencilInteractionEnabledWhenNotVisible;
-(BOOL)showsDrawingPolicyControls;
-(BOOL)_wantsClearBackgroundColorInCompactSize;
-(NSArray *)_toolIdentifiers;
-(void)set_pencilInteractionEnabledWhenNotVisible:(BOOL)arg1 ;
-(void)setStateAutosaveName:(NSString *)arg1 ;
-(void)_updateVisibilityForFirstResponder:(id)arg1 ;
-(void)_recognitionLocaleIdentifierDidChange:(id)arg1 ;
-(void)_hasSeenPencilPairingUIDidChange:(id)arg1 ;
-(NSString *)stateAutosaveName;
-(NSString *)_paletteViewStateRestorationDefaultsKey;
-(void)set_toolIdentifiers:(NSArray *)arg1 ;
-(void)set_toolProperties:(NSArray *)arg1 ;
-(void)setSelectedTool:(PKTool *)arg1 ;
-(id<PKPaletteViewDelegate>)_additionalPaletteViewDelegate;
-(id)paletteViewUndoManager:(id)arg1 ;
-(BOOL)paletteView:(id)arg1 shouldSetSelectedToolColor:(id)arg2 ;
-(void)paletteViewSelectedToolInkDidChange:(id)arg1 ;
-(BOOL)_isHandwritingToolSelected;
-(void)paletteViewDidToggleRuler:(id)arg1 ;
-(BOOL)_paletteWasCompact;
-(void)set_paletteWasCompact:(BOOL)arg1 ;
-(id)_internalClassesAcceptingFirstResponder;
-(BOOL)_wasVisibleBeforeResponderChanges;
-(void)paletteViewDidChangePosition:(id)arg1 ;
-(id)paletteViewCurrentFirstResponder:(id)arg1 ;
-(void)paletteViewFirstResponderDidUpdate:(id)arg1 ;
-(BOOL)shouldHandlePencilInteractionWhenNotVisible:(id)arg1 ;
-(void)setVisible:(BOOL)arg1 forFirstResponder:(id)arg2 ;
-(BOOL)_interactionIsValid;
-(void)_setAnnotationDelegate:(id)arg1 ;
-(void)_setWantsClearBackgroundColorInCompactSize:(BOOL)arg1 ;
-(void)setShowsDrawingPolicyControls:(BOOL)arg1 ;
-(CGRect)frameObscuredInView:(id)arg1 ;
-(void)_enableTapInteractionForWindow:(id)arg1 ;
-(void)paletteView:(id)arg1 didChangeColor:(id)arg2 ;
-(BOOL)_isBackgroundMaterialUpdatingPaused;
-(void)_tellDelegateToHideToolPicker;
-(void)_setShowsHandwritingTool:(BOOL)arg1 ;
-(void)set_wasVisibleBeforeResponderChanges:(BOOL)arg1 ;
-(void)set_observers:(NSHashTable *)arg1 ;
-(void)set_firstRespondersForVisibleUI:(NSHashTable *)arg1 ;
-(void)_setAdditionalPaletteViewDelegate:(id)arg1 ;
@end

