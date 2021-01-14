/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFOverlayImageEditorOptionsViewDelegate.h>

@class WFImage, NSArray, WFFileRepresentation, NSMapTable, WFOverlayImageEditorOptionsView, WFOverlayImageEditorCanvasView, WFOpacitySliderView, NSLayoutConstraint;

@interface WFOverlayImageEditorViewController : UIViewController <WFOverlayImageEditorOptionsViewDelegate> {

	WFImage* _overlayImage;
	NSArray* _fileRepresentations;
	WFFileRepresentation* _currentFile;
	NSMapTable* _transforms;
	/*^block*/id _completionHandler;
	WFOverlayImageEditorOptionsView* _optionsView;
	WFOverlayImageEditorCanvasView* _canvasView;
	WFOpacitySliderView* _opacityView;
	NSLayoutConstraint* _opacityViewVerticalConstraint;

}

@property (nonatomic,retain) WFImage * overlayImage;                                            //@synthesize overlayImage=_overlayImage - In the implementation block
@property (nonatomic,copy) NSArray * fileRepresentations;                                       //@synthesize fileRepresentations=_fileRepresentations - In the implementation block
@property (nonatomic,retain) WFFileRepresentation * currentFile;                                //@synthesize currentFile=_currentFile - In the implementation block
@property (nonatomic,retain) NSMapTable * transforms;                                           //@synthesize transforms=_transforms - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic,__weak) WFOverlayImageEditorOptionsView * optionsView;              //@synthesize optionsView=_optionsView - In the implementation block
@property (assign,nonatomic,__weak) WFOverlayImageEditorCanvasView * canvasView;                //@synthesize canvasView=_canvasView - In the implementation block
@property (assign,nonatomic,__weak) WFOpacitySliderView * opacityView;                          //@synthesize opacityView=_opacityView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * opacityViewVerticalConstraint;                //@synthesize opacityViewVerticalConstraint=_opacityViewVerticalConstraint - In the implementation block
@property (assign,nonatomic) BOOL rotationEnabled; 
@property (assign,nonatomic) BOOL opacitySliderVisible; 
-(BOOL)prefersStatusBarHidden;
-(void)setRotationEnabled:(BOOL)arg1 ;
-(void)setOverlayImage:(WFImage *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(NSMapTable *)transforms;
-(WFFileRepresentation *)currentFile;
-(WFImage *)overlayImage;
-(id)completionHandler;
-(void)viewDidLoad;
-(WFOverlayImageEditorCanvasView *)canvasView;
-(id)editorBackgroundColor;
-(void)setCanvasView:(WFOverlayImageEditorCanvasView *)arg1 ;
-(void)loadView;
-(void)resetOverlayImageViewTransformations;
-(void)cancelEditingImage;
-(void)finishEditingImage;
-(BOOL)rotationEnabled;
-(BOOL)opacitySliderVisible;
-(void)setOpacitySliderVisible:(BOOL)arg1 ;
-(id)initWithFileRepresentations:(id)arg1 overlayImage:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCurrentFile:(WFFileRepresentation *)arg1 ;
-(void)didChangeOpacity:(id)arg1 ;
-(NSArray *)fileRepresentations;
-(void)setFileRepresentations:(NSArray *)arg1 ;
-(void)setTransforms:(NSMapTable *)arg1 ;
-(WFOverlayImageEditorOptionsView *)optionsView;
-(void)setOptionsView:(WFOverlayImageEditorOptionsView *)arg1 ;
-(WFOpacitySliderView *)opacityView;
-(void)setOpacityView:(WFOpacitySliderView *)arg1 ;
-(NSLayoutConstraint *)opacityViewVerticalConstraint;
-(void)setOpacityViewVerticalConstraint:(NSLayoutConstraint *)arg1 ;
@end

