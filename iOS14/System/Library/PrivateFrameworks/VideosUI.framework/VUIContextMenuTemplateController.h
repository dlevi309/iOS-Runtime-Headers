/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <libobjc.A.dylib/VUIContextMenuTemplateControllerInterface.h>

@class VUIContextMenuCardView, IKViewElement, NSString;

@interface VUIContextMenuTemplateController : _TVBgImageLoadingViewController <VUIContextMenuTemplateControllerInterface> {

	BOOL _canPerformAction;
	VUIContextMenuCardView* _cardView;
	IKViewElement* _viewElement;
	IKViewElement* _selectedElement;

}

@property (nonatomic,retain) VUIContextMenuCardView * cardView;              //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                    //@synthesize viewElement=_viewElement - In the implementation block
@property (assign,nonatomic) BOOL canPerformAction;                          //@synthesize canPerformAction=_canPerformAction - In the implementation block
@property (nonatomic,retain) IKViewElement * selectedElement;                //@synthesize selectedElement=_selectedElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canPerformAction;
-(id)init;
-(VUIContextMenuCardView *)cardView;
-(void)viewDidLoad;
-(void)setCardView:(VUIContextMenuCardView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)didDismissTemplateController;
-(void)didSelectPreviewTemplateController;
-(void)setSelectedElement:(IKViewElement *)arg1 ;
-(void)_performAction;
-(void)_updateInteractionMenuItems:(id)arg1 ;
-(void)setCanPerformAction:(BOOL)arg1 ;
-(id)_shareActionSheetFromViewElement:(id)arg1 ;
-(IKViewElement *)selectedElement;
@end

