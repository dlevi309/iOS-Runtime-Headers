/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/_UIClickPresentationInteractionDelegate.h>
#import <libobjc.A.dylib/CNAvatarCardViewControllerDelegate.h>
#import <libobjc.A.dylib/CNAvatarCardControllerOrbTransitionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CNAvatarCardControllerDelegate;
@class NSArray, UIView, UIAlertController, CNAvatarCardViewController, _UIClickPresentationInteraction, UITapGestureRecognizer, UIVisualEffectView, NSData, CNAvatarView, CNContactOrbHeaderView, UIGestureRecognizer, UIViewController, CNContact, NSString;

@interface CNAvatarCardController : NSObject <_UIClickPresentationInteractionDelegate, CNAvatarCardViewControllerDelegate, CNAvatarCardControllerOrbTransitionDelegate, UIGestureRecognizerDelegate> {

	BOOL _visible;
	BOOL _actionsNeedRefresh;
	BOOL _bypassActionValidation;
	NSArray* _contacts;
	NSArray* _actionCategories;
	id<CNAvatarCardControllerDelegate> _delegate;
	UIView* _sourceView;
	UIView* _highlightView;
	UIAlertController* _alertController;
	CNAvatarCardViewController* _cardViewController;
	_UIClickPresentationInteraction* _clickPresentationInteraction;
	long long _presentationResult;
	NSArray* _cardControllerConstraints;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIVisualEffectView* _backgroundVisualEffectView;
	NSData* _overrideImageData;
	CNAvatarView* _avatarView;
	CNContactOrbHeaderView* _headerView;
	UIGestureRecognizer* _rolloverGestureRecognizer;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UIAlertController * alertController;                                         //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) CNAvatarCardViewController * cardViewController;                             //@synthesize cardViewController=_cardViewController - In the implementation block
@property (nonatomic,retain) _UIClickPresentationInteraction * clickPresentationInteraction;              //@synthesize clickPresentationInteraction=_clickPresentationInteraction - In the implementation block
@property (assign,nonatomic) long long presentationResult;                                                //@synthesize presentationResult=_presentationResult - In the implementation block
@property (nonatomic,retain) NSArray * cardControllerConstraints;                                         //@synthesize cardControllerConstraints=_cardControllerConstraints - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                               //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundVisualEffectView;                             //@synthesize backgroundVisualEffectView=_backgroundVisualEffectView - In the implementation block
@property (nonatomic,retain) NSData * overrideImageData;                                                  //@synthesize overrideImageData=_overrideImageData - In the implementation block
@property (assign,nonatomic,__weak) CNAvatarView * avatarView;                                            //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) CNContactOrbHeaderView * headerView;                                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController; 
@property (nonatomic,retain) UIGestureRecognizer * rolloverGestureRecognizer;                             //@synthesize rolloverGestureRecognizer=_rolloverGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL actionsNeedRefresh;                                                     //@synthesize actionsNeedRefresh=_actionsNeedRefresh - In the implementation block
@property (assign,nonatomic) BOOL bypassActionValidation;                                                 //@synthesize bypassActionValidation=_bypassActionValidation - In the implementation block
@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) NSArray * contacts;                                                          //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSArray * actionCategories;                                                    //@synthesize actionCategories=_actionCategories - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic,__weak) id<CNAvatarCardControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible;                                             //@synthesize visible=_visible - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                                         //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                                      //@synthesize highlightView=_highlightView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                                           //@synthesize sourceRect=_sourceRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)previewHeaderViewControllerForContacts:(id)arg1 ;
+(id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg1 ;
+(BOOL)avatarCardEnabledForTraitCollection:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(long long)presentationResult;
-(void)prepareForDisplay;
-(void)setContacts:(NSArray *)arg1 ;
-(void)setActionCategories:(NSArray *)arg1 ;
-(BOOL)bypassActionValidation;
-(NSArray *)cardControllerConstraints;
-(CNContact *)contact;
-(NSArray *)contacts;
-(NSString *)message;
-(void)showContact:(id)arg1 ;
-(void)setHeaderView:(CNContactOrbHeaderView *)arg1 ;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(NSArray *)actionCategories;
-(void)setHighlightView:(UIView *)arg1 ;
-(void)setCardViewController:(CNAvatarCardViewController *)arg1 ;
-(UIView *)highlightView;
-(void)setPresentationResult:(long long)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(id<CNAvatarCardControllerDelegate>)delegate;
-(_UIClickPresentationInteraction *)clickPresentationInteraction;
-(void)_setupForCardControllerPresentation;
-(UIVisualEffectView *)backgroundVisualEffectView;
-(id)refetchContactsMatching:(id)arg1 storeProvider:(/*^block*/id)arg2 ;
-(void)orbTransitionDidEndTransition:(id)arg1 ;
-(void)setRolloverGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(BOOL)hasActions;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(void)orbTransitionDidPrepareTransition:(id)arg1 withContainerView:(id)arg2 ;
-(CNAvatarCardViewController *)cardViewController;
-(void)setOverrideImageData:(NSData *)arg1 ;
-(void)_setupCardViewControllerWithContacts:(id)arg1 ;
-(void)configurePreviewInteraction;
-(CNAvatarView *)avatarView;
-(void)presentAnimated:(BOOL)arg1 ;
-(UIView *)sourceView;
-(NSData *)overrideImageData;
-(id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2 ;
-(UIViewController *)presentingViewController;
-(UIAlertController *)alertController;
-(NSString *)name;
-(void)showContact;
-(void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(void)setDelegate:(id<CNAvatarCardControllerDelegate>)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(BOOL)actionsNeedRefresh;
-(void)setClickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 ;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg1 ;
-(UIGestureRecognizer *)rolloverGestureRecognizer;
-(BOOL)readyForContactsMatching:(id)arg1 ;
-(BOOL)isVisible;
-(void)cardViewControllerWillDismiss:(id)arg1 ;
-(void)prepareWithContacts:(id)arg1 storeProvider:(/*^block*/id)arg2 ;
-(void)cleanupAfterDisplay;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setCardControllerConstraints:(NSArray *)arg1 ;
-(CGRect)sourceRect;
-(void)cardViewControllerDidDismiss:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(id)cardViewController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(void)setName:(NSString *)arg1 ;
-(CNContactOrbHeaderView *)headerView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_updateHeaderViewFrame;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)_setupAlertController;
-(void)setActionsNeedRefresh:(BOOL)arg1 ;
-(BOOL)clickPresentationInteractionShouldBegin:(id)arg1 ;
-(id)preparedViewControllerForPresentationWithGestureRecognizer:(id)arg1 ;
-(void)prepareWithContacts:(id)arg1 store:(id)arg2 ;
-(void)setBackgroundVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)prepareWithOverrideImageData:(id)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

