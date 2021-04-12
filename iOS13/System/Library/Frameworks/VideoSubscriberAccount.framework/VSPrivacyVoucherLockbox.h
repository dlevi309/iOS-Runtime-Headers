/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>

@class NSUndoManager, VSRemoteNotifier, NSArray, NSString;

@interface VSPrivacyVoucherLockbox : NSObject <VSRemoteNotifierDelegate> {

	NSUndoManager* _undoManager;
	VSRemoteNotifier* _remoteNotifier;

}

@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager;                      //@synthesize undoManager=_undoManager - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unredeemedVouchers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(NSUndoManager *)undoManager;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(VSRemoteNotifier *)remoteNotifier;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(NSArray *)unredeemedVouchers;
-(void)redeemVoucher:(id)arg1 ;
-(void)removeAllVouchers;
-(void)issueVouchers:(id)arg1 ;
-(void)setUnredeemedVouchers:(NSArray *)arg1 ;
-(id)_voucherArchiveURL;
-(void)issueVouchersForAppsWithAdamIDs:(id)arg1 providerID:(id)arg2 ;
@end

