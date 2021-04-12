/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKit/UIEditingOverlayInteractionWithView.h>
#import <libobjc.A.dylib/PKPaletteHostingWindowScene.h>
#import <UIKit/UIInteraction.h>

@class UIView, PKPaletteHostView, UIWindowScene, NSLayoutConstraint, NSString;

@interface PKPaletteViewInteraction : NSObject <UIEditingOverlayInteractionWithView, PKPaletteHostingWindowScene, UIInteraction> {

	PKPaletteHostView* _paletteHostView;
	UIWindowScene* _windowScene;
	UIView* _view;
	NSLayoutConstraint* _paletteHostViewWidthConstraint;
	NSLayoutConstraint* _paletteHostViewHeightConstraint;
	NSLayoutConstraint* _paletteHostViewTopConstraint;
	NSLayoutConstraint* _paletteHostViewLeftConstraint;
	CGRect _sceneBounds;
	CGRect _textEffectsWindowFrame;

}

@property (nonatomic,retain) PKPaletteHostView * paletteHostView;                               //@synthesize paletteHostView=_paletteHostView - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                                              //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) CGRect sceneBounds;                                                //@synthesize sceneBounds=_sceneBounds - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteHostViewWidthConstraint;               //@synthesize paletteHostViewWidthConstraint=_paletteHostViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteHostViewHeightConstraint;              //@synthesize paletteHostViewHeightConstraint=_paletteHostViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteHostViewTopConstraint;                 //@synthesize paletteHostViewTopConstraint=_paletteHostViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteHostViewLeftConstraint;                //@synthesize paletteHostViewLeftConstraint=_paletteHostViewLeftConstraint - In the implementation block
@property (assign,nonatomic) CGRect textEffectsWindowFrame;                                     //@synthesize textEffectsWindowFrame=_textEffectsWindowFrame - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteViewDelegate> delegate; 
@property (assign,nonatomic,__weak) UIWindowScene * windowScene;                                //@synthesize windowScene=_windowScene - In the implementation block
@property (getter=isPaletteVisible,nonatomic,readonly) BOOL paletteVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isHostedWindow:(id)arg1 ;
+(id)paletteViewInteractionForCanvas:(id)arg1 ;
+(id)paletteViewInteractionForWindow:(id)arg1 windowScene:(id)arg2 ;
-(id<PKPaletteViewDelegate>)delegate;
-(void)setDelegate:(id<PKPaletteViewDelegate>)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)setWindowScene:(UIWindowScene *)arg1 ;
-(UIWindowScene *)windowScene;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)editingOverlayContainerDidChangeToSceneBounds:(CGRect)arg1 ;
-(id)hostingWindow;
-(id)initWithWindowSize:(CGSize)arg1 ;
-(CGRect)sceneBounds;
-(void)_updatePaletteTraitCollection:(id)arg1 ;
-(BOOL)isPaletteVisible;
-(CGRect)paletteHostingWindowSceneBounds;
-(PKPaletteHostView *)paletteHostView;
-(void)setPaletteHostView:(PKPaletteHostView *)arg1 ;
-(void)_updateSceneBounds;
-(id)_viewControllerForPalette;
-(void)_updateForWillRotate:(id)arg1 ;
-(void)_updateForRotation:(id)arg1 ;
-(void)_sceneDidActivateNotification:(id)arg1 ;
-(void)setTextEffectsWindowFrame:(CGRect)arg1 ;
-(CGRect)textEffectsWindowFrame;
-(void)setSceneBounds:(CGRect)arg1 ;
-(void)_updatePaletteViewConstraints;
-(NSLayoutConstraint *)paletteHostViewWidthConstraint;
-(NSLayoutConstraint *)paletteHostViewHeightConstraint;
-(id)_traitCollectionForHostingWindow;
-(void)showPaletteViewAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)hidePaletteViewAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPaletteHostViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteHostViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)paletteHostViewTopConstraint;
-(void)setPaletteHostViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)paletteHostViewLeftConstraint;
-(void)setPaletteHostViewLeftConstraint:(NSLayoutConstraint *)arg1 ;
@end

