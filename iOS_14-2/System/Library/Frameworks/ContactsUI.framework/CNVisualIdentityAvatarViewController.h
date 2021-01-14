/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactChangesObserver.h>

@protocol CNVisualIdentityPrimaryAvatarProvider, CNScheduler;
@class UIView, CNVisualIdentityContactAvatarProvider, CNVisualIdentityAvatarLayoutManager, CNUIAvatarLayoutLayerItem, CAShapeLayer, CNVisualIdentity, NSString;

@interface CNVisualIdentityAvatarViewController : UIViewController <CNContactChangesObserver> {

	BOOL _usingDropAppearance;
	UIView* _contentView;
	id<CNVisualIdentityPrimaryAvatarProvider> _primaryAvatarProvider;
	id<CNScheduler> _renderingQueue;
	id<CNScheduler> _callbackQueue;
	CNVisualIdentityContactAvatarProvider* _avatarProvider;
	CNVisualIdentityAvatarLayoutManager* _avatarLayoutManager;
	CNUIAvatarLayoutLayerItem* _avatarLayerItem;
	CAShapeLayer* _avatarClippingLayer;
	CNVisualIdentity* _visualIdentity;
	CGSize _previousSize;

}

@property (nonatomic,retain) UIView * contentView;                                                         //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) id<CNVisualIdentityPrimaryAvatarProvider> primaryAvatarProvider;              //@synthesize primaryAvatarProvider=_primaryAvatarProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> renderingQueue;                                             //@synthesize renderingQueue=_renderingQueue - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> callbackQueue;                                              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) CNVisualIdentityContactAvatarProvider * avatarProvider;                       //@synthesize avatarProvider=_avatarProvider - In the implementation block
@property (nonatomic,retain) CNVisualIdentityAvatarLayoutManager * avatarLayoutManager;                    //@synthesize avatarLayoutManager=_avatarLayoutManager - In the implementation block
@property (nonatomic,retain) CNUIAvatarLayoutLayerItem * avatarLayerItem;                                  //@synthesize avatarLayerItem=_avatarLayerItem - In the implementation block
@property (nonatomic,retain) CAShapeLayer * avatarClippingLayer;                                           //@synthesize avatarClippingLayer=_avatarClippingLayer - In the implementation block
@property (assign,nonatomic) CGSize previousSize;                                                          //@synthesize previousSize=_previousSize - In the implementation block
@property (assign,nonatomic) BOOL usingDropAppearance;                                                     //@synthesize usingDropAppearance=_usingDropAppearance - In the implementation block
@property (nonatomic,retain) CNVisualIdentity * visualIdentity;                                            //@synthesize visualIdentity=_visualIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)log;
+(unsigned long long)maxContactAvatars;
-(void)contactDidChange:(id)arg1 ;
-(CGSize)previousSize;
-(void)setPreviousSize:(CGSize)arg1 ;
-(id)initWithVisualIdentity:(id)arg1 ;
-(long long)itemCount;
-(void)updateContactChangesNotifierRegistration;
-(id)initWithVisualIdentity:(id)arg1 primaryAvatarProvider:(id)arg2 ;
-(void)removeAllSublayers;
-(void)layoutAvatars;
-(id)initWithVisualIdentity:(id)arg1 primaryAvatarProvider:(id)arg2 avatarImageRendererSettings:(id)arg3 ;
-(id)containingCellView;
-(void)logSublayersContent;
-(void)updateAvatarSublayersAndAddToView;
-(void)updatePrimaryAvatar;
-(void)createPrimaryAvatarLayerIfNeeded;
-(void)updateImageForPrimaryAvatar;
-(void)layoutPrimaryAvatar;
-(void)updateImageForLayerItem:(id)arg1 atIndex:(long long)arg2 includePlaceholder:(BOOL)arg3 ;
-(void)updateImageForLayerItem:(id)arg1 atIndex:(long long)arg2 includePlaceholder:(BOOL)arg3 animated:(BOOL)arg4 ;
-(id)layerForPrimaryAvatar;
-(void)beginDropAppearance;
-(void)endDropAppearance;
-(BOOL)shouldDisplayPrimaryAvatarImage;
-(void)visualIdentityDidUpdate:(id)arg1 ;
-(CGRect)avatarFrameForFocusedAvatarInView:(id)arg1 ;
-(id<CNVisualIdentityPrimaryAvatarProvider>)primaryAvatarProvider;
-(void)setPrimaryAvatarProvider:(id<CNVisualIdentityPrimaryAvatarProvider>)arg1 ;
-(id<CNScheduler>)renderingQueue;
-(void)setAvatarProvider:(CNVisualIdentityContactAvatarProvider *)arg1 ;
-(CNVisualIdentityAvatarLayoutManager *)avatarLayoutManager;
-(void)setAvatarLayoutManager:(CNVisualIdentityAvatarLayoutManager *)arg1 ;
-(CNUIAvatarLayoutLayerItem *)avatarLayerItem;
-(void)setAvatarLayerItem:(CNUIAvatarLayoutLayerItem *)arg1 ;
-(CAShapeLayer *)avatarClippingLayer;
-(void)setAvatarClippingLayer:(CAShapeLayer *)arg1 ;
-(BOOL)usingDropAppearance;
-(void)setUsingDropAppearance:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setContentView:(UIView *)arg1 ;
-(CNVisualIdentityContactAvatarProvider *)avatarProvider;
-(id<CNScheduler>)callbackQueue;
-(UIView *)contentView;
-(CNVisualIdentity *)visualIdentity;
-(void)setVisualIdentity:(CNVisualIdentity *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
@end

