/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKPaletteViewDelegate.h>
#import <UIKit/UIInputResponderControllerVisibilityObserver.h>

@protocol PKToolPickerPrivateDelegate;
@class NSHashTable, PKPaletteViewInteraction, UIResponder, PKPaletteHostView, PKTool, NSString;

@interface PKToolPicker : NSObject <PKPaletteViewDelegate, UIInputResponderControllerVisibilityObserver> {

	BOOL __paletteWasCompact;
	NSHashTable* __observers;
	NSHashTable* __firstRespondersForVisibleUI;
	PKPaletteViewInteraction* __interaction;
	UIResponder* __previousFirstResponder;
	id<PKToolPickerPrivateDelegate> __delegate;

}

@property (nonatomic,retain) NSHashTable * _observers;                                                                                                                    //@synthesize _observers=__observers - In the implementation block
@property (nonatomic,retain) NSHashTable * _firstRespondersForVisibleUI;                                                                                                  //@synthesize _firstRespondersForVisibleUI=__firstRespondersForVisibleUI - In the implementation block
@property (nonatomic,retain) PKPaletteViewInteraction * _interaction;                                                                                                     //@synthesize _interaction=__interaction - In the implementation block
@property (assign,nonatomic) BOOL _paletteWasCompact;                                                                                                                     //@synthesize _paletteWasCompact=__paletteWasCompact - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * _previousFirstResponder;                                                                                                //@synthesize _previousFirstResponder=__previousFirstResponder - In the implementation block
@property (assign,nonatomic,__weak) id<PKToolPickerPrivateDelegate> _delegate;                                                                                            //@synthesize _delegate=__delegate - In the implementation block
@property (nonatomic,readonly) PKPaletteHostView * _paletteHostView; 
@property (assign,setter=_setBackgroundMaterialUpdatingPaused:,getter=_isBackgroundMaterialUpdatingPaused,nonatomic) BOOL _backgroundMaterialUpdatingPaused; 
@property (nonatomic,retain) PKTool * selectedTool; 
@property (assign,getter=isRulerActive,nonatomic) BOOL rulerActive; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (assign,nonatomic) long long overrideUserInterfaceStyle; 
@property (assign,nonatomic) long long colorUserInterfaceStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedToolPickerForWindow:(id)arg1 ;
+(id)activeToolPickerForWindow:(id)arg1 ;
-(NSHashTable *)_observers;
-(id<PKToolPickerPrivateDelegate>)_delegate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isVisible;
-(void)set_delegate:(id<PKToolPickerPrivateDelegate>)arg1 ;
-(long long)overrideUserInterfaceStyle;
-(void)setOverrideUserInterfaceStyle:(long long)arg1 ;
-(id)initWithInteraction:(id)arg1 ;
-(PKPaletteViewInteraction *)_interaction;
-(void)inputResponderController:(id)arg1 inputViewSetVisibilityDidChange:(BOOL)arg2 includedReset:(BOOL)arg3 ;
-(id)_paletteView;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(PKPaletteHostView *)_paletteHostView;
-(void)setVisible:(BOOL)arg1 forFirstResponder:(id)arg2 ;
-(void)_updatePaletteTraitCollection:(id)arg1 ;
-(CGRect)frameObscuredInView:(id)arg1 ;
-(void)paletteViewDidChangePosition:(id)arg1 ;
-(id)paletteViewUndoManager:(id)arg1 ;
-(void)paletteViewSelectedToolInkDidChange:(id)arg1 ;
-(void)paletteViewDidToggleRuler:(id)arg1 ;
-(void)paletteView:(id)arg1 didChangeColor:(id)arg2 ;
-(CGRect)paletteViewColorPickerPopoverPresentationSourceRect:(id)arg1 ;
-(id)paletteViewColorPickerPopoverPresentationSourceView:(id)arg1 ;
-(void)setRulerActive:(BOOL)arg1 ;
-(BOOL)isRulerActive;
-(void)_setBackgroundMaterialUpdatingPaused:(BOOL)arg1 ;
-(void)_saveStateIfNecessary;
-(long long)colorUserInterfaceStyle;
-(id)_currentFirstResponder;
-(BOOL)_internalClassWantsToolPickerVisibleForResponder:(id)arg1 ;
-(NSHashTable *)_firstRespondersForVisibleUI;
-(PKTool *)selectedTool;
-(BOOL)_currentFirstResponderWantsToolPickerVisible;
-(void)_setVisible:(BOOL)arg1 ;
-(void)_updateVisibilityForFirstResponder:(id)arg1 ;
-(BOOL)_paletteWasCompact;
-(void)set_paletteWasCompact:(BOOL)arg1 ;
-(id)_internalClassesAcceptingFirstResponder;
-(void)setSelectedTool:(PKTool *)arg1 ;
-(BOOL)_wantsPaletteToStayVisibleForPopovers;
-(BOOL)_isBackgroundMaterialUpdatingPaused;
-(void)set_observers:(NSHashTable *)arg1 ;
-(void)set_firstRespondersForVisibleUI:(NSHashTable *)arg1 ;
-(void)set_interaction:(PKPaletteViewInteraction *)arg1 ;
-(UIResponder *)_previousFirstResponder;
-(void)set_previousFirstResponder:(UIResponder *)arg1 ;
@end

