/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <Message/MailAccount.h>

@class NSURL, MFIMAPConnection, NSMutableDictionary, DeliveryAccount;

@interface MFFakeMailAccount : MailAccount {

	NSURL* _URL;
	MFIMAPConnection* _cachedConnection;
	NSMutableDictionary* _mailboxes;
	BOOL _managed;
	DeliveryAccount* _deliveryAccount;

}

@property (nonatomic,retain) DeliveryAccount * deliveryAccount;              //@synthesize deliveryAccount=_deliveryAccount - In the implementation block
@property (assign,getter=isManaged,nonatomic) BOOL managed;                  //@synthesize managed=_managed - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(void)invalidate;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isActive;
-(id)uniqueID;
-(id)displayName;
-(id)hostname;
-(id)username;
-(int)cachePolicy;
-(BOOL)isManaged;
-(DeliveryAccount *)deliveryAccount;
-(void)setDeliveryAccount:(DeliveryAccount *)arg1 ;
-(id)_URLScheme;
-(Class)storeClass;
-(BOOL)supportsRemoteAppend;
-(BOOL)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(BOOL)arg2 ;
-(BOOL)_shouldConfigureMailboxCache;
-(id)_mailboxPathPrefix;
-(BOOL)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id*)arg3 ;
-(void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3 ;
-(id)powerAssertionIdentifierWithPrefix:(id)arg1 ;
-(BOOL)supportsFastRemoteBodySearch;
-(id)initWithURL:(id)arg1 rootMailboxUid:(id)arg2 ;
-(void)setUnreadCount:(unsigned)arg1 forMailbox:(id)arg2 ;
-(id)_nameForMailboxUid:(id)arg1 ;
-(unsigned)minID;
-(void)setCachedConnection:(id)arg1 ;
-(id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3 failedToSelectMailbox:(BOOL*)arg4 ;
-(id)flagChangesForMailboxPath:(id)arg1 UID:(unsigned)arg2 connectTime:(double)arg3 ;
-(void)setManaged:(BOOL)arg1 ;
@end

