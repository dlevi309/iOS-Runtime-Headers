/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dismiss;
-(void)setPresentationStyle:(unsigned long long)arg1;
-(unsigned long long)presentationStyle;
-(UIViewController *)viewController;
-(unsigned long long)presentationContext;
-(void)setHostContext:(id)arg1;
-(id<_MSMessageComposeHostImplProtocol>)hostContext;
-(void)setPresentationContext:(unsigned long long)arg1;
-(void)stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)requestPresentationStyleExpanded:(BOOL)arg1;
-(void)dismissAndPresentPhotosApp;
-(void)requestPresentationStyle:(unsigned long long)arg1;
-(void)_remoteViewDidBecomeReadyForDisplay;
-(void)requestResize;
-(void)contentDidLoad;
-(MSConversation *)activeConversation;
-(void)setContainingContext:(id)arg1;
-(UIViewController *)stickerViewController;
-(void)stageAppItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)stageMediaItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)stageRichLink:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)startDragMediaItem:(id)arg1 frameInRemoteView:(CGRect)arg2 fence:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id<_MSMessageComposeExtensionImplProtocol>)containingContext;

@end

