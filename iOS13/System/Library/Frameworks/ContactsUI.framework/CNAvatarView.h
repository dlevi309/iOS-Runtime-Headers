/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CNContactChangesObserver.h>
#import <libobjc.A.dylib/CNAvatarCardControllerDelegate.h>
#import <libobjc.A.dylib/CNCardTransitioning.h>

@protocol CNAvatarViewDelegate, CNUILikenessRendering, CNCancelable, CNSchedulerProvider;
@class UIView, UIImage, CNContactStore, PRPersonaStore, NSArray, NSString, UIImageView, UINavigationController, CNAvatarCardController, CNContact;

@interface CNAvatarView : UIView <CNContactChangesObserver, CNAvatarCardControllerDelegate, CNCardTransitioning> {

	BOOL _showsActionsOnTap;
	BOOL _showsActionsOnForcePress;
	BOOL _threeDTouchEnabled;
	BOOL _showsContactOnTap;
	BOOL _registeredInNotifier;
	BOOL _registeredContactAction;
	BOOL _disableCornerRadiusForAvatar;
	BOOL _autoUpdateContact;
	BOOL _asynchronousRendering;
	BOOL _allowStaleRendering;
	BOOL _allowsAnimation;
	BOOL _prohibitsPersonaFetch;
	UIView* _forcePressView;
	unsigned long long _style;
	CNContactStore* _contactStore;
	PRPersonaStore* _personaStore;
	NSArray* _contacts;
	NSString* _name;
	NSString* _message;
	id<CNAvatarViewDelegate> _delegate;
	id<CNUILikenessRendering> _imageRenderer;
	id<CNCancelable> _rendererToken;
	UIImageView* _imageView;
	long long _displayedImageState;
	UINavigationController* _contactViewNavigationController;
	CNAvatarCardController* _cardController;
	id<CNSchedulerProvider> _schedulerProvider;
	unsigned long long _stateCaptureHandle;
	UIImage* _overrideImage;
	long long _monogrammerStyle;

}

@property (assign,nonatomic) BOOL showsActionsOnTap; 
@property (assign,nonatomic) BOOL showsActionsOnForcePress; 
@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) id<CNUILikenessRendering> imageRenderer;                               //@synthesize imageRenderer=_imageRenderer - In the implementation block
@property (nonatomic,retain) id<CNCancelable> rendererToken;                                        //@synthesize rendererToken=_rendererToken - In the implementation block
@property (nonatomic,copy) UIImageView * imageView;                                                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long displayedImageState;                                         //@synthesize displayedImageState=_displayedImageState - In the implementation block
@property (nonatomic,retain) UINavigationController * contactViewNavigationController;              //@synthesize contactViewNavigationController=_contactViewNavigationController - In the implementation block
@property (nonatomic,retain) CNAvatarCardController * cardController;                               //@synthesize cardController=_cardController - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> schedulerProvider;                             //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (assign,nonatomic) unsigned long long stateCaptureHandle;                                 //@synthesize stateCaptureHandle=_stateCaptureHandle - In the implementation block
@property (assign) BOOL registeredInNotifier;                                                       //@synthesize registeredInNotifier=_registeredInNotifier - In the implementation block
@property (assign) BOOL registeredContactAction;                                                    //@synthesize registeredContactAction=_registeredContactAction - In the implementation block
@property (nonatomic,retain) UIImage * overrideImage;                                               //@synthesize overrideImage=_overrideImage - In the implementation block
@property (assign,nonatomic) BOOL disableCornerRadiusForAvatar;                                     //@synthesize disableCornerRadiusForAvatar=_disableCornerRadiusForAvatar - In the implementation block
@property (assign,nonatomic) long long monogrammerStyle;                                            //@synthesize monogrammerStyle=_monogrammerStyle - In the implementation block
@property (nonatomic,readonly) UIImage * contentImage; 
@property (nonatomic,readonly) CGRect contentImageFrame; 
@property (assign,nonatomic) BOOL autoUpdateContact;                                                //@synthesize autoUpdateContact=_autoUpdateContact - In the implementation block
@property (assign,nonatomic) BOOL asynchronousRendering;                                            //@synthesize asynchronousRendering=_asynchronousRendering - In the implementation block
@property (assign,nonatomic) BOOL bypassActionValidation; 
@property (assign,nonatomic) BOOL allowStaleRendering;                                              //@synthesize allowStaleRendering=_allowStaleRendering - In the implementation block
@property (assign,nonatomic) BOOL allowsAnimation;                                                  //@synthesize allowsAnimation=_allowsAnimation - In the implementation block
@property (assign,nonatomic) BOOL prohibitsPersonaFetch;                                            //@synthesize prohibitsPersonaFetch=_prohibitsPersonaFetch - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                              //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                       //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) PRPersonaStore * personaStore;                                       //@synthesize personaStore=_personaStore - In the implementation block
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled;                   //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                                    //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSString * name;                                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * message;                                                      //@synthesize message=_message - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsContactOnTap;                                                //@synthesize showsContactOnTap=_showsContactOnTap - In the implementation block
@property (nonatomic,copy) NSArray * actionCategories; 
@property (assign,nonatomic,__weak) UIView * forcePressView;                                        //@synthesize forcePressView=_forcePressView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * transitioningView; 
@property (nonatomic,readonly) CGRect transitioningFrame; 
@property (nonatomic,readonly) CGRect transitioningContentFrame; 
@property (nonatomic,readonly) UIImage * transitioningImage; 
@property (nonatomic,readonly) CGRect transitioningImageFrame; 
@property (assign) BOOL transitioningImageVisible; 
@property (nonatomic,readonly) UIView * transitioningContentView; 
+(id)descriptorForRequiredKeys;
+(BOOL)defaultThreeDTouchSupport;
+(id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg1 ;
+(id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg1 shouldUseCachingRenderer:(BOOL)arg2 description:(id)arg3 ;
+(id)makeDescriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg1 shouldUseCachingRenderer:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CNAvatarViewDelegate>)delegate;
-(void)setDelegate:(id<CNAvatarViewDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(UIImage *)overrideImage;
-(void)clearImage;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(CNContactStore *)contactStore;
-(NSArray *)contacts;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)didMoveToWindow;
-(UIView *)transitioningView;
-(CGRect)transitioningFrame;
-(void)setImageView:(UIImageView *)arg1 ;
-(double)_diameter;
-(UIImage *)contentImage;
-(void)setOverrideImage:(UIImage *)arg1 ;
-(id)descriptorForRequiredKeys;
-(id)initWithContact:(id)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)contactDidChange:(id)arg1 ;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(BOOL)bypassActionValidation;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(CGRect)transitioningContentFrame;
-(UIImage *)transitioningImage;
-(CGRect)transitioningImageFrame;
-(BOOL)transitioningImageVisible;
-(void)setTransitioningImageVisible:(BOOL)arg1 ;
-(long long)avatarCardController:(id)arg1 presentationResultForLocation:(CGPoint)arg2 ;
-(id)avatarCardController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(BOOL)avatarCardController:(id)arg1 shouldShowContact:(id)arg2 ;
-(void)avatarCardControllerWillBeginPreviewInteraction:(id)arg1 ;
-(void)avatarCardControllerWillDismiss:(id)arg1 ;
-(void)avatarCardControllerDidDismiss:(id)arg1 ;
-(id)presentingViewControllerForAvatarCardController:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(BOOL)arg3 ;
-(id)initWithImageRenderer:(id)arg1 threeDTouchEnabled:(BOOL)arg2 contactStore:(id)arg3 ;
-(id)initWithImageRenderer:(id)arg1 threeDTouchEnabled:(BOOL)arg2 contactStore:(id)arg3 style:(unsigned long long)arg4 schedulerProvider:(id)arg5 ;
-(id)currentLikenessScope;
-(void)_renderContactsImage;
-(void)setImage:(id)arg1 state:(long long)arg2 ;
-(void)setupAvatarCardControllerIfNeeded;
-(void)setDisableCornerRadiusForAvatar:(BOOL)arg1 ;
-(CGRect)contentImageFrame;
-(void)_updateRegistration;
-(void)showContact:(id)arg1 ;
-(void)dismissContactViewController:(id)arg1 ;
-(void)contactDidChange;
-(void)setAutoUpdateContact:(BOOL)arg1 ;
-(void)setShowsContactOnTap:(BOOL)arg1 ;
-(id)imageForTransitioningToFullScreen;
-(void)setActionCategories:(NSArray *)arg1 ;
-(NSArray *)actionCategories;
-(void)_updateCardActions;
-(void)setForcePressView:(UIView *)arg1 ;
-(UIView *)forcePressView;
-(PRPersonaStore *)personaStore;
-(BOOL)isThreeDTouchEnabled;
-(BOOL)showsContactOnTap;
-(id<CNUILikenessRendering>)imageRenderer;
-(void)setImageRenderer:(id<CNUILikenessRendering>)arg1 ;
-(id<CNCancelable>)rendererToken;
-(void)setRendererToken:(id<CNCancelable>)arg1 ;
-(long long)displayedImageState;
-(void)setDisplayedImageState:(long long)arg1 ;
-(UINavigationController *)contactViewNavigationController;
-(void)setContactViewNavigationController:(UINavigationController *)arg1 ;
-(CNAvatarCardController *)cardController;
-(void)setCardController:(CNAvatarCardController *)arg1 ;
-(void)setSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(unsigned long long)stateCaptureHandle;
-(void)setStateCaptureHandle:(unsigned long long)arg1 ;
-(BOOL)registeredInNotifier;
-(void)setRegisteredInNotifier:(BOOL)arg1 ;
-(BOOL)registeredContactAction;
-(void)setRegisteredContactAction:(BOOL)arg1 ;
-(BOOL)disableCornerRadiusForAvatar;
-(long long)monogrammerStyle;
-(void)setMonogrammerStyle:(long long)arg1 ;
-(BOOL)autoUpdateContact;
-(BOOL)asynchronousRendering;
-(void)setAsynchronousRendering:(BOOL)arg1 ;
-(BOOL)allowStaleRendering;
-(void)setAllowStaleRendering:(BOOL)arg1 ;
-(BOOL)allowsAnimation;
-(void)setAllowsAnimation:(BOOL)arg1 ;
-(BOOL)prohibitsPersonaFetch;
-(void)setProhibitsPersonaFetch:(BOOL)arg1 ;
-(void)setShowsActionsOnTap:(BOOL)arg1 ;
-(BOOL)showsActionsOnTap;
-(void)setShowsActionsOnForcePress:(BOOL)arg1 ;
-(BOOL)showsActionsOnForcePress;
@end

