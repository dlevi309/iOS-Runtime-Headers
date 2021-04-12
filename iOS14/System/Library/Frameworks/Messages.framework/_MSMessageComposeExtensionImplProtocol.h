/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

@class MSConversation, UIViewController;


@protocol _MSMessageComposeExtensionImplProtocol <_MSMessageComposeExtensionProtocol>
@property (nonatomic,readonly) MSConversation * activeConversation; 
@property (assign,nonatomic) unsigned long long presentationStyle; 
@property (assign,nonatomic) unsigned long long presentationContext; 
@property (nonatomic,__weak,readonly) UIViewController * viewController; 
@property (nonatomic,__weak,readonly) UIViewController * stickerViewController; 
@property (nonatomic,retain) id<_MSMessageComposeExtensionImplProtocol> containingContext; 
@property (nonatomic,retain) id<_MSMessageComposeHostImplProtocol> hostContext; 
@required
-(unsigned long long)presentationStyle;
-(id<_MSMessageComposeHostImplProtocol>)hostContext;
-(void)requestPresentationStyleExpanded:(BOOL)arg1;
-(void)setPresentationStyle:(unsigned long long)arg1;
-(unsigned long long)presentationContext;
-(void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(/*^block*/id)arg4;
-(void)dismissAndPresentPhotosApp;
-(void)setHostContext:(id)arg1;
-(void)stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(UIViewController *)viewController;
-(void)setPresentationContext:(unsigned long long)arg1;
-(void)dismiss;
-(void)requestPresentationStyle:(unsigned long long)arg1;
-(void)_remoteViewDidBecomeReadyForDisplay;
-(void)requestResize;
-(void)contentDidLoad;
-(MSConversation *)activeConversation;
-(void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 completion:(/*^block*/id)arg5;
-(void)setContainingContext:(id)arg1;
-(UIViewController *)stickerViewController;
-(void)stageAppItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)stageMediaItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)stageRichLink:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)startDragMediaItem:(id)arg1 frameInRemoteView:(CGRect)arg2 fence:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)dragMediaItemMoved:(id)arg1 frameInRemoteView:(CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 completionHandler:(/*^block*/id)arg5;
-(void)dragMediaItemCanceled;
-(id<_MSMessageComposeExtensionImplProtocol>)containingContext;

@end

