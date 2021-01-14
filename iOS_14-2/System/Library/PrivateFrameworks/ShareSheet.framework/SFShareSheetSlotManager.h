/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <libobjc.A.dylib/SFShareSheetSlotObserverProtocol.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol SFShareSheetSlotManagerDelegate;
@class NSXPCConnection, NSString;

@interface SFShareSheetSlotManager : NSObject <SFShareSheetSlotObserverProtocol, NSXPCConnectionDelegate> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	id<SFShareSheetSlotManagerDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                     //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<SFShareSheetSlotManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectionEstablished;
-(id)remoteObjectProxy;
-(id)init;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)invalidated;
-(id<SFShareSheetSlotManagerDelegate>)delegate;
-(id)remoteObjectInterface;
-(void)activityViewControllerPerformEditActionsWithSessionID:(id)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg1 selectedDefaultActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3 ;
-(void)ensureXPCStarted;
-(id)exportedInterface;
-(void)activityViewControllerWithSessionID:(id)arg1 updatedFavoritesProxies:(id)arg2 activityCategory:(long long)arg3 ;
-(void)activityViewControllerWithSessionID:(id)arg1 toggledActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3 ;
-(void)connectionInterrupted;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)ensureConnectionEstablished;
-(void)connectToDaemonWithSessionID:(id)arg1 discoveryContext:(id)arg2 assetIdentifiers:(id)arg3 urlsBeingShared:(id)arg4 shouldSuggestFamilyMembers:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)activityViewControllerWithSessionID:(id)arg1 favoritedActivity:(BOOL)arg2 withIdentifier:(id)arg3 activityCategory:(long long)arg4 ;
-(void)activityViewControllerWithSessionID:(id)arg1 selectedActivityWithIdentifier:(id)arg2 ;
-(id)machServiceName;
-(void)activate;
-(void)setProgress:(id)arg1 withTopText:(id)arg2 bottomText:(id)arg3 forNodeWithIdentifier:(id)arg4 shouldPulse:(id)arg5 animated:(BOOL)arg6 ;
-(void)willPerformInServiceActivityWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<SFShareSheetSlotManagerDelegate>)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg1 didLongPressShareActivityWithIdentifier:(id)arg2 ;
-(void)performShortcutActivityInHostWithBundleID:(id)arg1 singleUseToken:(id)arg2 ;
-(void)interrupted;
-(NSXPCConnection *)connection;
-(void)performAirDropActivityInHostWithNoContentView:(BOOL)arg1 ;
-(void)dataSourceUpdatedWithSessionConfiguration:(id)arg1 ;
-(void)performExtensionActivityInHostWithBundleID:(id)arg1 request:(id)arg2 ;
-(void)activityViewControllerWillEnterForegroundWithSessionID:(id)arg1 ;
-(void)performUserDefaultsWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 orderedUUIDs:(id)arg3 activityCategory:(long long)arg4 ;
-(void)activityViewControllerWithSessionID:(id)arg1 removedPersonWithIdentifier:(id)arg2 ;
-(void)invalidate;
-(void)activityViewControllerDidEnterBackgroundWithSessionID:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)sendConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)activityViewControllerWithSessionID:(id)arg1 selectedPersonWithIdentifier:(id)arg2 ;
-(void)performActivityInHostWithUUID:(id)arg1 ;
-(void)activityViewControllerPerformedActivityWithInfoDictionary:(id)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg1 selectedActionWithIdentifier:(id)arg2 ;
@end

