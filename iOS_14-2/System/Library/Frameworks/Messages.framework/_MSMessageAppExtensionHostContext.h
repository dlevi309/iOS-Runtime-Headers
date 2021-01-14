/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <Messages/Messages-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_MSMessageComposeHostImplProtocol.h>

@protocol _MSMessageComposeHostProtocol;
@class NSString;

@interface _MSMessageAppExtensionHostContext : NSExtensionContext <_MSMessageComposeHostImplProtocol> {

	id<_MSMessageComposeHostProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<_MSMessageComposeHostProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionContextHostProtocolAllowedClassesForItems;
-(id<_MSMessageComposeHostProtocol>)delegate;
-(void)_dismiss;
-(void)setDelegate:(id<_MSMessageComposeHostProtocol>)arg1 ;
-(void)_stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_remoteViewDidBecomeReadyForDisplay;
-(void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_dismissAndPresentPhotosApp;
-(void)_stageAppItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_stageMediaItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_stageRichLink:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_startDragMediaItem:(id)arg1 frameInRemoteView:(CGRect)arg2 fence:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_dragMediaItemMoved:(id)arg1 frameInRemoteView:(CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_dragMediaItemCanceled;
-(void)_requestPresentationStyle:(unsigned long long)arg1 ;
-(void)_updateSnapshotForNextLaunch:(id)arg1 ;
-(void)_openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestResize;
-(void)_contentDidLoad;
-(void)_removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

