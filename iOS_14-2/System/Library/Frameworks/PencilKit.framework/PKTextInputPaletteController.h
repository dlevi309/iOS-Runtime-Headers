/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKTextInputWindowFirstResponderControllerDelegate.h>
#import <libobjc.A.dylib/PKPaletteControllerDelegate.h>
#import <libobjc.A.dylib/PKPaletteTapToRadarCommandDelegate.h>

@protocol PKTextInputPaletteControllerDelegate;
@class UIWindowScene, PKTextInputSettings, PKTextInputWindowFirstResponderController, PKPaletteController, NSString;

@interface PKTextInputPaletteController : NSObject <PKTextInputWindowFirstResponderControllerDelegate, PKPaletteControllerDelegate, PKPaletteTapToRadarCommandDelegate> {

	BOOL __writingStateActive;
	id<PKTextInputPaletteControllerDelegate> _delegate;
	PKTextInputSettings* __textInputSettings;
	PKTextInputWindowFirstResponderController* __windowFirstResponderController;
	PKPaletteController* __paletteController;
	CGRect _editingOverlayContainerSceneBounds;

}

@property (nonatomic,retain) PKTextInputSettings * _textInputSettings;                                                          //@synthesize _textInputSettings=__textInputSettings - In the implementation block
@property (nonatomic,retain) PKTextInputWindowFirstResponderController * _windowFirstResponderController;                       //@synthesize _windowFirstResponderController=__windowFirstResponderController - In the implementation block
@property (nonatomic,retain) PKPaletteController * _paletteController;                                                          //@synthesize _paletteController=__paletteController - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputPaletteControllerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPaletteVisible,nonatomic,readonly) BOOL paletteVisible; 
@property (assign,setter=_setWritingStateActive:,getter=_isWritingStateActive,nonatomic) BOOL _writingStateActive;              //@synthesize _writingStateActive=__writingStateActive - In the implementation block
@property (assign,nonatomic) CGRect editingOverlayContainerSceneBounds;                                                         //@synthesize editingOverlayContainerSceneBounds=_editingOverlayContainerSceneBounds - In the implementation block
@property (nonatomic,readonly) UIWindowScene * windowScene; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWindowScene *)windowScene;
-(id)init;
-(id<PKTextInputPaletteControllerDelegate>)delegate;
-(void)setDelegate:(id<PKTextInputPaletteControllerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isPaletteVisible;
-(void)setEditingOverlayContainerSceneBounds:(CGRect)arg1 ;
-(PKPaletteController *)_paletteController;
-(void)updateFirstResponderVisibility;
-(CGRect)editingOverlayContainerSceneBounds;
-(void)_setWritingStateActive:(BOOL)arg1 ;
-(void)set_paletteController:(PKPaletteController *)arg1 ;
-(id)paletteTapToRadarCommandConfiguration:(id)arg1 ;
-(void)_recognitionLocaleIdentifierDidChange:(id)arg1 ;
-(id)initWithTextInputSettings:(id)arg1 ;
-(void)_updatePaletteVisibility;
-(PKTextInputSettings *)_textInputSettings;
-(PKTextInputWindowFirstResponderController *)_windowFirstResponderController;
-(BOOL)_canShowPaletteUI;
-(BOOL)_isFirstResponderVisible;
-(BOOL)_isFirstResponderEditableTextInputWithPencilTextInputSource;
-(BOOL)_isWritingStateActive;
-(BOOL)_isFirstResponderInputAssistantEnabled;
-(void)_peformPaletteVisibilityUpdate;
-(BOOL)_shouldPaletteBeVisible;
-(id)_paletteControllerContainerView;
-(void)_setupPaletteControllerIfNeededWithView:(id)arg1 wantsPaletteVisible:(BOOL)arg2 ;
-(void)windowFirstResponderController:(id)arg1 didChangeFirstResponder:(id)arg2 ;
-(void)paletteControllerFloatingKeyboardWillShow:(id)arg1 ;
-(void)paletteControllerFloatingKeyboardWillHide:(id)arg1 ;
-(BOOL)paletteController:(id)arg1 shouldOverridePaletteViewTraitCollectionTo:(id)arg2 ;
-(void)set_textInputSettings:(PKTextInputSettings *)arg1 ;
-(void)set_windowFirstResponderController:(PKTextInputWindowFirstResponderController *)arg1 ;
@end

