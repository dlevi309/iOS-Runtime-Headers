/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/IKAppDocumentDelegate.h>
#import <libobjc.A.dylib/SKUIStatusOverlayProvider.h>

@class SUAudioPlayer, SKUIClientContext, IKAppDocument, NSOperationQueue, NSHashTable, NSString;

@interface SKUIPreviewDocumentController : NSObject <IKAppDocumentDelegate, SKUIStatusOverlayProvider> {

	SUAudioPlayer* _audioPlayer;
	SKUIClientContext* _clientContext;
	IKAppDocument* _document;
	NSOperationQueue* _operationQueue;
	NSHashTable* _viewControllers;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                        //@synthesize clientContext=_clientContext - In the implementation block
@property (getter=isPreviewActive,nonatomic,readonly) BOOL previewActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_operationQueue;
-(id)initWithDocument:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)documentNeedsUpdate:(id)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(void)_playerSessionsDidChangeNotification:(id)arg1 ;
-(void)_connectToAudioPlayer;
-(void)_reloadViewControllersWithPreviewStatus:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isPreviewActive;
-(void)_audioPlayerStatusChangeNotification:(id)arg1 ;
-(id)overlayViewControllerWithBackgroundStyle:(long long)arg1 ;
@end

