/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKit/UIContextMenuInteractionDelegate_Private.h>
#import <libobjc.A.dylib/TVPreviewInteractionController.h>

@class UIContextMenuInteraction, UIView, UIViewController, IKViewElement, NSString;

@interface VUIViewInteractionController : NSObject <UIContextMenuInteractionDelegate_Private, TVPreviewInteractionController> {

	UIContextMenuInteraction* _interaction;
	UIView* _presentingView;
	UIViewController* _presentingViewController;
	IKViewElement* _presentingElement;

}

@property (nonatomic,retain) UIContextMenuInteraction * interaction;                            //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,__weak,readonly) UIView * presentingView;                                  //@synthesize presentingView=_presentingView - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) IKViewElement * presentingElement;                          //@synthesize presentingElement=_presentingElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)updateContextMenuWithMenuItems:(id)arg1 ;
+(id)getHighlightedView;
+(void)setContextMenuTemplateInterface:(id)arg1 ;
-(UIContextMenuInteraction *)interaction;
-(UIViewController *)presentingViewController;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(void)setInteraction:(UIContextMenuInteraction *)arg1 ;
-(UIView *)presentingView;
-(BOOL)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)updatePresentingElement:(id)arg1 ;
-(void)dismissInteractionView;
-(void)setPresentingElement:(IKViewElement *)arg1 ;
-(id)_getViewElementWithContextMenuAtLocation:(CGPoint)arg1 ;
-(id)_getPreviewViewControllerWithElement:(id)arg1 ;
-(id)_getViewAtLocation:(CGPoint)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3 ;
-(IKViewElement *)presentingElement;
@end

