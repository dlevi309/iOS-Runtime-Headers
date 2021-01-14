/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PKPalettePopoverDismissing.h>

@protocol PKPaletteColorPickerContainerViewDelegate, PKDrawingPaletteViewStateSubject, PKPalettePopoverPresenting, PKPaletteAdditionalOptionsViewDelegate;
@class PKPaletteColorPickerView, UIStackView, PKPaletteAdditionalOptionsView, PKDrawingPaletteInputAssistantContainerView, PKPaletteInputAssistantViewController, NSString;

@interface PKPaletteColorPickerContainerView : UIView <UIPopoverPresentationControllerDelegate, PKPalettePopoverDismissing> {

	BOOL _shouldHideColorPicker;
	BOOL _shouldShowAdditionalOptionsView;
	BOOL _shouldShowInputAssistantView;
	id<PKPaletteColorPickerContainerViewDelegate> _delegate;
	id<PKDrawingPaletteViewStateSubject> _paletteViewState;
	PKPaletteColorPickerView* _colorPickerView;
	id<PKPalettePopoverPresenting> _palettePopoverPresenting;
	id<PKPaletteAdditionalOptionsViewDelegate> _additionalOptionsViewDelegate;
	long long _layoutAxis;
	UIStackView* _stackView;
	PKPaletteAdditionalOptionsView* _additionalOptionsView;
	PKDrawingPaletteInputAssistantContainerView* _inputAssistantContainerView;
	PKPaletteInputAssistantViewController* _inputAssistantViewController;

}

@property (nonatomic,retain) UIStackView * stackView;                                                                      //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) PKPaletteAdditionalOptionsView * additionalOptionsView;                                       //@synthesize additionalOptionsView=_additionalOptionsView - In the implementation block
@property (nonatomic,retain) PKDrawingPaletteInputAssistantContainerView * inputAssistantContainerView;                    //@synthesize inputAssistantContainerView=_inputAssistantContainerView - In the implementation block
@property (nonatomic,retain) PKPaletteInputAssistantViewController * inputAssistantViewController;                         //@synthesize inputAssistantViewController=_inputAssistantViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteColorPickerContainerViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKDrawingPaletteViewStateSubject> paletteViewState;                                 //@synthesize paletteViewState=_paletteViewState - In the implementation block
@property (nonatomic,readonly) PKPaletteColorPickerView * colorPickerView;                                                 //@synthesize colorPickerView=_colorPickerView - In the implementation block
@property (assign,nonatomic,__weak) id<PKPalettePopoverPresenting> palettePopoverPresenting;                               //@synthesize palettePopoverPresenting=_palettePopoverPresenting - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteAdditionalOptionsViewDelegate> additionalOptionsViewDelegate;              //@synthesize additionalOptionsViewDelegate=_additionalOptionsViewDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHideColorPicker;                                                                   //@synthesize shouldHideColorPicker=_shouldHideColorPicker - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAdditionalOptionsView;                                                         //@synthesize shouldShowAdditionalOptionsView=_shouldShowAdditionalOptionsView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowInputAssistantView;                                                            //@synthesize shouldShowInputAssistantView=_shouldShowInputAssistantView - In the implementation block
@property (assign,nonatomic) long long layoutAxis;                                                                         //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayoutAxis:(long long)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(long long)layoutAxis;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(id<PKPaletteColorPickerContainerViewDelegate>)delegate;
-(UIStackView *)stackView;
-(void)setDelegate:(id<PKPaletteColorPickerContainerViewDelegate>)arg1 ;
-(void)_updateUI;
-(void)traitCollectionDidChange:(id)arg1 ;
-(PKPaletteInputAssistantViewController *)inputAssistantViewController;
-(void)setStackView:(UIStackView *)arg1 ;
-(PKPaletteColorPickerView *)colorPickerView;
-(void)setPaletteViewState:(id<PKDrawingPaletteViewStateSubject>)arg1 ;
-(void)_installAdditionalOptionsView;
-(id<PKDrawingPaletteViewStateSubject>)paletteViewState;
-(PKPaletteAdditionalOptionsView *)additionalOptionsView;
-(void)setAdditionalOptionsViewDelegate:(id<PKPaletteAdditionalOptionsViewDelegate>)arg1 ;
-(id<PKPalettePopoverPresenting>)palettePopoverPresenting;
-(void)setPalettePopoverPresenting:(id<PKPalettePopoverPresenting>)arg1 ;
-(void)setShouldShowAdditionalOptionsView:(BOOL)arg1 ;
-(void)setShouldHideColorPicker:(BOOL)arg1 ;
-(void)setShouldShowInputAssistantView:(BOOL)arg1 ;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldHideColorPicker;
-(BOOL)shouldShowAdditionalOptionsView;
-(BOOL)_isAdditionalOptionsViewInstalled;
-(void)_uninstallAdditionalOptionsView;
-(BOOL)shouldShowInputAssistantView;
-(id<PKPaletteAdditionalOptionsViewDelegate>)additionalOptionsViewDelegate;
-(PKDrawingPaletteInputAssistantContainerView *)inputAssistantContainerView;
-(void)_installInputAssistantViewContainer;
-(void)setInputAssistantContainerView:(PKDrawingPaletteInputAssistantContainerView *)arg1 ;
-(void)_handleUCBButtonPressed;
-(void)_showInputAssistantPopover;
-(void)setInputAssistantViewController:(PKPaletteInputAssistantViewController *)arg1 ;
-(BOOL)_isInputAssistantViewControllerPresented;
-(void)_dismissViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setAdditionalOptionsView:(PKPaletteAdditionalOptionsView *)arg1 ;
@end

