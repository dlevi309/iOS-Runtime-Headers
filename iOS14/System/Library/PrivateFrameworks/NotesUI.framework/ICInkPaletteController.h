/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <libobjc.A.dylib/PKToolPickerObserver.h>
#import <libobjc.A.dylib/PKToolPickerObserverPrivate.h>
#import <libobjc.A.dylib/PKToolPickerPrivateDelegate.h>

@protocol ICInkPaletteControllerDelegate;
@class UIView, UIResponder, PKToolPicker, PKTool, NSString;

@interface ICInkPaletteController : NSObject <PKToolPickerObserver, PKToolPickerObserverPrivate, PKToolPickerPrivateDelegate> {

	BOOL _isAnimatingShowingInkPalette;
	BOOL _isAnimatingHidingInkPalette;
	BOOL _didSetUpToolPicker;
	UIView* _parentView;
	UIResponder* _responder;
	id<ICInkPaletteControllerDelegate> _delegate;
	PKToolPicker* _toolPicker;
	PKTool* _storedSelectedTool;
	long long _palettePosition;
	long long _storedColorUserInterfaceStyle;

}

@property (assign,nonatomic,__weak) UIView * parentView;                                                   //@synthesize parentView=_parentView - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * responder;                                               //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic,__weak) id<ICInkPaletteControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL didSetUpToolPicker;                                                      //@synthesize didSetUpToolPicker=_didSetUpToolPicker - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingShowingInkPalette;                                            //@synthesize isAnimatingShowingInkPalette=_isAnimatingShowingInkPalette - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingHidingInkPalette;                                             //@synthesize isAnimatingHidingInkPalette=_isAnimatingHidingInkPalette - In the implementation block
@property (assign,nonatomic,__weak) PKToolPicker * toolPicker;                                             //@synthesize toolPicker=_toolPicker - In the implementation block
@property (nonatomic,retain) PKTool * storedSelectedTool;                                                  //@synthesize storedSelectedTool=_storedSelectedTool - In the implementation block
@property (assign,nonatomic) long long palettePosition;                                                    //@synthesize palettePosition=_palettePosition - In the implementation block
@property (assign,nonatomic) long long storedColorUserInterfaceStyle;                                      //@synthesize storedColorUserInterfaceStyle=_storedColorUserInterfaceStyle - In the implementation block
@property (nonatomic,copy) PKTool * selectedTool; 
@property (nonatomic,readonly) PKTool * colorCorrectedTool; 
@property (assign,nonatomic) long long colorUserInterfaceStyle; 
@property (getter=isHandwritingToolSelected,nonatomic,readonly) BOOL handwritingToolSelected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedToolPickerForWindow:(id)arg1 ;
-(id)init;
-(id<ICInkPaletteControllerDelegate>)delegate;
-(void)setResponder:(UIResponder *)arg1 ;
-(UIResponder *)responder;
-(UIView *)parentView;
-(void)setParentView:(UIView *)arg1 ;
-(void)setDelegate:(id<ICInkPaletteControllerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isHandwritingToolSelected;
-(long long)palettePosition;
-(void)setPalettePosition:(long long)arg1 ;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(PKTool *)selectedTool;
-(void)toolPickerSelectedToolDidChange:(id)arg1 ;
-(void)toolPickerIsRulerActiveDidChange:(id)arg1 ;
-(void)toolPickerVisibilityDidChange:(id)arg1 ;
-(void)setSelectedTool:(PKTool *)arg1 ;
-(void)_toolPickerDidChangePosition:(id)arg1 ;
-(void)toolPickerFramesObscuredDidChange:(id)arg1 ;
-(void)_toolPicker:(id)arg1 didChangeColor:(id)arg2 ;
-(CGRect)_colorPickerPopoverPresentationSourceRect:(id)arg1 ;
-(id)_colorPickerPopoverPresentationSourceView:(id)arg1 ;
-(void)_toolPicker:(id)arg1 shouldSetVisible:(BOOL)arg2 ;
-(PKToolPicker *)toolPicker;
-(BOOL)didSetUpToolPicker;
-(void)setDidSetUpToolPicker:(BOOL)arg1 ;
-(void)setToolPicker:(PKToolPicker *)arg1 ;
-(PKTool *)storedSelectedTool;
-(void)setStoredSelectedTool:(PKTool *)arg1 ;
-(long long)storedColorUserInterfaceStyle;
-(PKTool *)colorCorrectedTool;
-(BOOL)isInkPaletteShowing;
-(void)showInkPaletteAnimated:(BOOL)arg1 ;
-(void)hideInkPaletteAnimated:(BOOL)arg1 ;
-(void)createInkPaletteIfNecessary;
-(void)setIsAnimatingHidingInkPalette:(BOOL)arg1 ;
-(void)setIsAnimatingShowingInkPalette:(BOOL)arg1 ;
-(void)setStoredColorUserInterfaceStyle:(long long)arg1 ;
-(BOOL)isAnimatingShowingInkPalette;
-(BOOL)isAnimatingHidingInkPalette;
-(long long)icasPalettePositionFromPKPalettePosition:(long long)arg1 ;
-(void)showInkPalette:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithParentView:(id)arg1 responder:(id)arg2 delegate:(id)arg3 ;
-(void)hideInkPalette;
-(void)updateTraitCollection:(id)arg1 ;
@end

