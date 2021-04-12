/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithDocument:(id)arg1 ;
-(id)_operationQueue;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg1 ;
-(void)documentNeedsUpdate:(id)arg1 ;
-(void)_playerSessionsDidChangeNotification:(id)arg1 ;
-(void)_connectToAudioPlayer;
-(void)_reloadViewControllersWithPreviewStatus:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isPreviewActive;
-(void)_audioPlayerStatusChangeNotification:(id)arg1 ;
-(id)overlayViewControllerWithBackgroundStyle:(long long)arg1 ;
@end

