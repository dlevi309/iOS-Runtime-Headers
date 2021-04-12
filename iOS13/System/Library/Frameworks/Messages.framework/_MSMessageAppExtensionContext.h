/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <Messages/Messages-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_MSMessageComposeExtensionImplProtocol.h>

@protocol _MSMessageComposeHostImplProtocol, _MSMessageComposeExtensionImplProtocol;
@class MSConversation, NSString, UIViewController;

@interface _MSMessageAppExtensionContext : NSExtensionContext <_MSMessageComposeExtensionImplProtocol> {

	id<_MSMessageComposeHostImplProtocol> _hostContext;
	unsigned long long _presentationStyle;
	unsigned long long _presentationContext;
	id<_MSMessageComposeExtensionImplProtocol> _containingContext;
	MSConversation* _activeConversation;
	CFRunLoopObserverRef _principalObjectCreationObserver;
	CGRect _initialFrameOfHostView;

}

@property (nonatomic,retain) MSConversation * activeConversation;                                       //@synthesize activeConversation=_activeConversation - In the implementation block
@property (nonatomic,readonly) CGRect initialFrameOfHostView;                                           //@synthesize initialFrameOfHostView=_initialFrameOfHostView - In the implementation block
@property (nonatomic,readonly) CFRunLoopObserverRef principalObjectCreationObserver;                    //@synthesize principalObjectCreationObserver=_principalObjectCreationObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long presentationStyle;                                      //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic) unsigned long long presentationContext;                                    //@synthesize presentationContext=_presentationContext - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController; 
@property (nonatomic,__weak,readonly) UIViewController * stickerViewController; 
@property (nonatomic,retain) id<_MSMessageComposeExtensionImplProtocol> containingContext;              //@synthesize containingContext=_containingContext - In the implementation block
@property (nonatomic,retain) id<_MSMessageComposeHostImplProtocol> hostContext;                         //@synthesize hostContext=_hostContext - In the implementation block
+(id)_extensionContextHostProtocolAllowedClassesForItems;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismiss;
-(void)setPresentationStyle:(unsigned long long)arg1 ;
-(unsigned long long)presentationStyle;
-(UIViewController *)viewController;
-(unsigned long long)presentationContext;
-(void)setHostContext:(id<_MSMessageComposeHostImplProtocol>)arg1 ;
-(id<_MSMessageComposeHostImplProtocol>)hostContext;
-(void)_resignActive;
-(void)setPresentationContext:(unsigned long long)arg1 ;
-(void)stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)beginDisablingUserInteraction;
-(void)endDisablingUserInteraction;
-(void)requestPresentationStyleExpanded:(BOOL)arg1 ;
-(void)dismissToKeyboard:(BOOL)arg1 ;
-(void)dismissAndPresentPhotosApp;
-(void)requestPresentationStyle:(unsigned long long)arg1 ;
-(void)_remoteViewDidBecomeReadyForDisplay;
-(void)requestResize;
-(void)contentDidLoad;
-(MSConversation *)activeConversation;
-(void)_didRemoveAssetArchiveWithIdentifier:(id)arg1 ;
-(void)_prepareForPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setActiveConversation:(MSConversation *)arg1 ;
-(void)_volumeButtonPressed:(BOOL)arg1 ;
-(void)setContainingContext:(id<_MSMessageComposeExtensionImplProtocol>)arg1 ;
-(UIViewController *)stickerViewController;
-(void)stageAppItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stageMediaItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stageRichLink:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startDragMediaItem:(id)arg1 frameInRemoteView:(CGRect)arg2 fence:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_becomeActiveWithConversationState:(id)arg1 presentationState:(id)arg2 ;
-(void)_canSendMessage:(id)arg1 conversationState:(id)arg2 associatedText:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_requestContentSizeThatFits:(id)arg1 presentationStyle:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_conversationDidChangeWithConversationState:(id)arg1 ;
-(void)_presentationWillChangeToPresentationState:(id)arg1 ;
-(void)_presentationDidChangeToPresentationState:(id)arg1 ;
-(void)_didReceiveMessage:(id)arg1 conversationState:(id)arg2 ;
-(void)_didStartSendingMessage:(id)arg1 conversationState:(id)arg2 ;
-(void)_didCancelSendingMessage:(id)arg1 conversationState:(id)arg2 ;
-(void)_requestSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)_hostDidBeginDeferredTeardown;
-(void)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<_MSMessageComposeExtensionImplProtocol>)containingContext;
-(void)_installPrincipalObjectObserver;
-(void)_uninstallPrincipalObjectObserverIfNeeded;
-(id)remoteProxy;
-(CGRect)initialFrameOfHostView;
-(void)_handlePrincipalObjectCreated;
-(CFRunLoopObserverRef)principalObjectCreationObserver;
@end

