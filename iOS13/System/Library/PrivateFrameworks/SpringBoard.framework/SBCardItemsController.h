/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBCardItemsControllerRemoteInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSXPCListener, MCProfileConnection, SBWalletNotificationSource, NSString;

@interface SBCardItemsController : NSObject <SBCardItemsControllerRemoteInterface, NSXPCListenerDelegate> {

	NSMutableDictionary* _cardItems;
	NSMutableArray* _connections;
	NSXPCListener* _listener;
	MCProfileConnection* _profileConnection;
	BOOL _cardWhileLockedAllowed;
	SBWalletNotificationSource* _walletNotificationSource;

}

@property (nonatomic,retain) SBWalletNotificationSource * walletNotificationSource;              //@synthesize walletNotificationSource=_walletNotificationSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2 ;
-(void)getCardItemsForControllerWithIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(SBWalletNotificationSource *)walletNotificationSource;
-(void)setWalletNotificationSource:(SBWalletNotificationSource *)arg1 ;
-(void)_updateRestrictions;
-(void)_updateCardItem:(id)arg1 ;
-(void)_updateThumbnailForCardItem:(id)arg1 withSnapshotter:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_activateCardItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_deactivateCardItem:(id)arg1 ;
@end

