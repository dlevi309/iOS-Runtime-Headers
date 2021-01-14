/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CNContactChangesObserver.h>
#import <libobjc.A.dylib/CNAvatarCardControllerDelegate.h>
#import <libobjc.A.dylib/CNCardTransitioning.h>

@protocol CNAvatarViewDelegate, CNUILikenessRendering, CNCancelable, CNSchedulerProvider, CNAvatarViewUpdateToken;
@class UIView, UIImage, CNContactStore, PRPersonaStore, NSArray, NSIndexSet, NSString, UIImageView, UINavigationController, CNAvatarCardController, CNContact;

@interface CNAvatarView : UIView <CNContactChangesObserver, CNAvatarCardControllerDelegate, CNCardTransitioning> {

	BOOL _showsActionsOnTap;
	BOOL _showsActionsOnForcePress;
	BOOL _threeDTouchEnabled;
	BOOL _showsContactOnTap;
	BOOL _shouldUpdateMaskedAvatars;
	BOOL _allowStaleRenderingWithMatchingContextToken;
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
	NSIndexSet* _maskedAvatarIndices;
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
	id<CNAvatarViewUpdateToken> _groupViewConfigurationUpdateToken;
	UIImage* _overrideImage;
	long long _monogrammerStyle;
	NSString* _contextToken;

}

@property (assign,nonatomic) BOOL showsActionsOnTap; 
@property (assign,nonatomic) BOOL showsActionsOnForcePress; 
@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) id<CNUILikenessRendering> imageRenderer;                                    //@synthesize imageRenderer=_imageRenderer - In the implementation block
@property (nonatomic,retain) id<CNCancelable> rendererToken;                                             //@synthesize rendererToken=_rendererToken - In the implementation block
@property (nonatomic,copy) UIImageView * imageView;                                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSIndexSet * maskedAvatarIndices;                                           //@synthesize maskedAvatarIndices=_maskedAvatarIndices - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateMaskedAvatars;                                             //@synthesize shouldUpdateMaskedAvatars=_shouldUpdateMaskedAvatars - In the implementation block
@property (assign,nonatomic) long long displayedImageState;                                              //@synthesize displayedImageState=_displayedImageState - In the implementation block
@property (nonatomic,retain) UINavigationController * contactViewNavigationController;                   //@synthesize contactViewNavigationController=_contactViewNavigationController - In the implementation block
@property (nonatomic,retain) CNAvatarCardController * cardController;                                    //@synthesize cardController=_cardController - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> schedulerProvider;                                  //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (assign,nonatomic) unsigned long long stateCaptureHandle;                                      //@synthesize stateCaptureHandle=_stateCaptureHandle - In the implementation block
@property (nonatomic,retain) id<CNAvatarViewUpdateToken> groupViewConfigurationUpdateToken;              //@synthesize groupViewConfigurationUpdateToken=_groupViewConfigurationUpdateToken - In the implementation block
@property (assign,nonatomic) BOOL allowStaleRenderingWithMatchingContextToken;                           //@synthesize allowStaleRenderingWithMatchingContextToken=_allowStaleRenderingWithMatchingContextToken - In the implementation block
@property (assign) BOOL registeredInNotifier;                                                            //@synthesize registeredInNotifier=_registeredInNotifier - In the implementation block
@property (assign) BOOL registeredContactAction;                                                         //@synthesize registeredContactAction=_registeredContactAction - In the implementation block
@property (nonatomic,retain) UIImage * overrideImage;                                                    //@synthesize overrideImage=_overrideImage - In the implementation block
@property (assign,nonatomic) BOOL disableCornerRadiusForAvatar;                                          //@synthesize disableCornerRadiusForAvatar=_disableCornerRadiusForAvatar - In the implementation block
@property (assign,nonatomic) long long monogrammerStyle;                                                 //@synthesize monogrammerStyle=_monogrammerStyle - In the implementation block
@property (nonatomic,readonly) UIImage * contentImage; 
@property (nonatomic,readonly) CGRect contentImageFrame; 
@property (assign,nonatomic) BOOL autoUpdateContact;                                                     //@synthesize autoUpdateContact=_autoUpdateContact - In the implementation block
@property (assign,nonatomic) BOOL asynchronousRendering;                                                 //@synthesize asynchronousRendering=_asynchronousRendering - In the implementation block
@property (assign,nonatomic) BOOL bypassActionValidation; 
@property (assign,nonatomic) BOOL allowStaleRendering;                                                   //@synthesize allowStaleRendering=_allowStaleRendering - In the implementation block
@property (nonatomic,retain) NSString * contextToken;                                                    //@synthesize contextToken=_contextToken - In the implementation block
@property (nonatomic,readonly) BOOL isDisplayingContent; 
@property (assign,nonatomic) BOOL allowsAnimation;                                                       //@synthesize allowsAnimation=_allowsAnimation - In the implementation block
@property (assign,nonatomic) BOOL prohibitsPersonaFetch;                                                 //@synthesize prohibitsPersonaFetch=_prohibitsPersonaFetch - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                            //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) PRPersonaStore * personaStore;                                            //@synthesize personaStore=_personaStore - In the implementation block
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled;                        //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                                         //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSString * name;                                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * message;                                                           //@synthesize message=_message - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarViewDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsContactOnTap;                                                     //@synthesize showsContactOnTap=_showsContactOnTap - In the implementation block
@property (nonatomic,copy) NSArray * actionCategories; 
@property (assign,nonatomic,__weak) UIView * forcePressView;                                             //@synthesize forcePressView=_forcePressView - In the implementation block
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
+(id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg1 shouldUseCachingRenderer:(BOOL)arg2 description:(id)arg3 ;
+(id)descriptionForDisplayedImageState:(long long)arg1 ;
+(BOOL)defaultThreeDTouchSupport;
+(id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg1 ;
+(unsigned long long)maxContactAvatars;
+(id)makeDescriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg1 shouldUseCachingRenderer:(BOOL)arg2 ;
-(void)notifyDelegateOfGroupConfigurationUpdateWithError:(id)arg1 ;
-(id)imageForTransitioningToFullScreen;
-(id)presentingViewControllerForAvatarCardController:(id)arg1 ;
-(void)_setContacts:(id)arg1 ;
-(void)setTransitioningImageVisible:(BOOL)arg1 ;
-(double)_diameter;
-(CGRect)transitioningContentFrame;
-(id)descriptorForRequiredKeys;
-(CGRect)transitioningFrame;
-(void)setCardController:(CNAvatarCardController *)arg1 ;
-(void)setForcePressView:(UIView *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)registeredInNotifier;
-(void)_updateRegistration;
-(BOOL)enabled;
-(CGRect)transitioningImageFrame;
-(void)setShowsContactOnTap:(BOOL)arg1 ;
-(NSIndexSet *)maskedAvatarIndices;
-(void)setAllowStaleRendering:(BOOL)arg1 ;
-(long long)displayedImageState;
-(BOOL)isUpdatingGroupViewConfiguration;
-(UINavigationController *)contactViewNavigationController;
-(BOOL)asynchronousRendering;
-(NSString *)contextToken;
-(void)setRegisteredInNotifier:(BOOL)arg1 ;
-(CGRect)contentImageFrame;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setStateCaptureHandle:(unsigned long long)arg1 ;
-(void)setMonogrammerStyle:(long long)arg1 ;
-(void)setContactViewNavigationController:(UINavigationController *)arg1 ;
-(id)initWithImageRenderer:(id)arg1 threeDTouchEnabled:(BOOL)arg2 contactStore:(id)arg3 style:(unsigned long long)arg4 schedulerProvider:(id)arg5 ;
-(void)setAutoUpdateContact:(BOOL)arg1 ;
-(BOOL)showsActionsOnForcePress;
-(void)setDisplayedImageState:(long long)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(void)setActionCategories:(NSArray *)arg1 ;
-(BOOL)prohibitsPersonaFetch;
-(void)setSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(void)dismissContactViewController:(id)arg1 ;
-(void)setMaskedAvatarIndices:(NSIndexSet *)arg1 ;
-(id)avatarCardController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(id<CNUILikenessRendering>)imageRenderer;
-(UIImage *)transitioningImage;
-(BOOL)showsActionsOnTap;
-(void)setAsynchronousRendering:(BOOL)arg1 ;
-(PRPersonaStore *)personaStore;
-(void)setShouldUpdateMaskedAvatars:(BOOL)arg1 ;
-(void)_renderContactsImage;
-(void)setGroupViewConfigurationUpdateToken:(id<CNAvatarViewUpdateToken>)arg1 ;
-(void)clearImage;
-(UIImage *)contentImage;
-(void)contactDidChange;
-(CNContactStore *)contactStore;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(BOOL)bypassActionValidation;
-(BOOL)allowStaleRendering;
-(void)resetGroupUpdateTokenIfNeeded;
-(void)_updateCardActions;
-(void)setShowsActionsOnForcePress:(BOOL)arg1 ;
-(CNContact *)contact;
-(NSArray *)contacts;
-(void)setProhibitsPersonaFetch:(BOOL)arg1 ;
-(void)avatarCardControllerWillDismiss:(id)arg1 ;
-(BOOL)avatarCardController:(id)arg1 shouldShowContact:(id)arg2 ;
-(NSString *)message;
-(void)setShowsActionsOnTap:(BOOL)arg1 ;
-(void)avatarCardControllerDidDismiss:(id)arg1 ;
-(CNAvatarCardController *)cardController;
-(void)setImage:(id)arg1 state:(long long)arg2 ;
-(BOOL)allowStaleRenderingWithMatchingContextToken;
-(void)showContact:(id)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(id)currentLikenessScope;
-(CGRect)frameForAvatarAtIndex:(unsigned long long)arg1 inView:(id)arg2 ;
-(id)initWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(BOOL)arg3 ;
-(void)setAllowsAnimation:(BOOL)arg1 ;
-(UIView *)forcePressView;
-(void)setRegisteredContactAction:(BOOL)arg1 ;
-(BOOL)showsContactOnTap;
-(void)setRendererToken:(id<CNCancelable>)arg1 ;
-(UIView *)transitioningView;
-(void)setOverrideImage:(UIImage *)arg1 ;
-(id<CNAvatarViewUpdateToken>)groupViewConfigurationUpdateToken;
-(void)setupAvatarCardControllerIfNeeded;
-(void)setContextToken:(NSString *)arg1 ;
-(void)contactDidChange:(id)arg1 ;
-(BOOL)transitioningImageVisible;
-(BOOL)autoUpdateContact;
-(void)setImageRenderer:(id<CNUILikenessRendering>)arg1 ;
-(long long)monogrammerStyle;
-(void)setContact:(CNContact *)arg1 ;
-(BOOL)registeredContactAction;
-(void)setAllowStaleRenderingWithMatchingContextToken:(BOOL)arg1 ;
-(id<CNCancelable>)rendererToken;
-(id)updateViewWithGroupIdentity:(id)arg1 maskingContacts:(id)arg2 ;
-(BOOL)disableCornerRadiusForAvatar;
-(void)setDisableCornerRadiusForAvatar:(BOOL)arg1 ;
-(unsigned long long)stateCaptureHandle;
-(BOOL)isThreeDTouchEnabled;
-(BOOL)shouldUpdateWithContacts:(id)arg1 ;
-(void)setContacts:(id)arg1 forToken:(id)arg2 ;
-(BOOL)allowsAnimation;
-(UIImage *)overrideImage;
-(NSArray *)actionCategories;
-(id)updateViewWithGroupIdentity:(id)arg1 ;
-(BOOL)isDisplayingContent;
-(BOOL)shouldUpdateMaskedAvatars;
-(id)initWithSettings:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)avatarCardControllerWillBeginPreviewInteraction:(id)arg1 ;
-(id)init;
-(UIImageView *)imageView;
-(long long)avatarCardController:(id)arg1 presentationResultForLocation:(CGPoint)arg2 ;
-(id<CNAvatarViewDelegate>)delegate;
-(id)initWithImageRenderer:(id)arg1 threeDTouchEnabled:(BOOL)arg2 contactStore:(id)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)name;
-(void)setDelegate:(id<CNAvatarViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)style;
-(void)dealloc;
@end

