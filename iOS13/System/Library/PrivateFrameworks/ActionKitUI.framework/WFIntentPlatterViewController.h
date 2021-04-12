/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CRKCardViewControllerDelegate.h>
#import <libobjc.A.dylib/PLClickPresentationInteractionPresenting.h>
#import <libobjc.A.dylib/PLClickPresentationInteractionManagerDelegate.h>
#import <libobjc.A.dylib/APUILongLookViewControllerDelegate.h>
#import <libobjc.A.dylib/APUILongLookViewControllerDataSource.h>
#import <libobjc.A.dylib/CRKCardPresentationDelegate.h>
#import <libobjc.A.dylib/WFIntentViewController.h>

@protocol WFIntentViewControllerDelegate;
@class PLClickPresentationInteractionManager, UIView, INInteraction, APUILongLookViewController, CRKCardPresentationConfiguration, CRKCardPresentation, NSString;

@interface WFIntentPlatterViewController : UIViewController <CRKCardViewControllerDelegate, PLClickPresentationInteractionPresenting, PLClickPresentationInteractionManagerDelegate, APUILongLookViewControllerDelegate, APUILongLookViewControllerDataSource, CRKCardPresentationDelegate, WFIntentViewController> {

	BOOL _requiresConfirmation;
	PLClickPresentationInteractionManager* _clickPresentationInteractionManager;
	id<WFIntentViewControllerDelegate> _delegate;
	INInteraction* _interaction;
	APUILongLookViewController* _longLookViewController;
	CRKCardPresentationConfiguration* _configuration;
	CRKCardPresentation* _cardPresentation;
	UIView* _sourceView;

}

@property (nonatomic,readonly) APUILongLookViewController * longLookViewController;                                      //@synthesize longLookViewController=_longLookViewController - In the implementation block
@property (nonatomic,readonly) CRKCardPresentationConfiguration * configuration;                                         //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) CRKCardPresentation * cardPresentation;                                                   //@synthesize cardPresentation=_cardPresentation - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                                                                 //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,readonly) UIViewController*<CRKCardViewControlling> cardViewController; 
@property (nonatomic,readonly) INInteraction * interaction;                                                              //@synthesize interaction=_interaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PLClickPresentationInteractionManager * clickPresentationInteractionManager;              //@synthesize clickPresentationInteractionManager=_clickPresentationInteractionManager - In the implementation block
@property (nonatomic,readonly) UIView * viewForPreview; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) CGRect initialPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalDismissedFrameOfViewForPreview; 
@property (nonatomic,readonly) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
@property (assign,nonatomic,__weak) id<WFIntentViewControllerDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL requiresConfirmation;                                                                //@synthesize requiresConfirmation=_requiresConfirmation - In the implementation block
+(void)initialize;
-(id<WFIntentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFIntentViewControllerDelegate>)arg1 ;
-(INInteraction *)interaction;
-(CRKCardPresentationConfiguration *)configuration;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(UIViewController*<CRKCardViewControlling>)cardViewController;
-(BOOL)requiresConfirmation;
-(void)dismissPlatterWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentPlatterFromSourceView:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateWithInteraction:(id)arg1 ;
-(PLClickPresentationInteractionManager *)clickPresentationInteractionManager;
-(CGRect)initialPresentedFrameOfViewForPreview;
-(CGRect)finalDismissedFrameOfViewForPreview;
-(UIView *)viewForPreview;
-(void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2 ;
-(id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1 ;
-(void)cardViewControllerDidLoad:(id)arg1 ;
-(void)cardViewControllerBoundsDidChange:(id)arg1 ;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;
-(void)longLookPlatterDidReceiveTap:(id)arg1 ;
-(id)interfaceActionsForLongLook:(id)arg1 ;
-(id)appIconImageForLongLook:(id)arg1 ;
-(id)bundleIdentifierForAppIconInLongLook:(id)arg1 ;
-(id)titleForLongLookHeaderInLongLook:(id)arg1 ;
-(BOOL)fetchViewControllerForContentViewInLongLook:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)preferredContentHeightForLongLook:(id)arg1 ;
-(CRKCardPresentation *)cardPresentation;
-(id)initWithInteraction:(id)arg1 requiresConfirmation:(BOOL)arg2 ;
-(void)confirmButtonTapped;
-(void)updateProgressIndicator:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updatePlatterSize;
-(APUILongLookViewController *)longLookViewController;
@end

