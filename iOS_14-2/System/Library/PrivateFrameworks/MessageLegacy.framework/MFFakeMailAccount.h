/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isManaged;
-(id)uniqueID;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(BOOL)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id*)arg3 ;
-(void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3 ;
-(id)powerAssertionIdentifierWithPrefix:(id)arg1 ;
-(BOOL)supportsFastRemoteBodySearch;
-(unsigned)minID;
-(BOOL)isActive;
-(id)debugDescription;
-(id)username;
-(id)description;
-(id)hostname;
-(int)cachePolicy;
-(DeliveryAccount *)deliveryAccount;
-(void)setDeliveryAccount:(DeliveryAccount *)arg1 ;
-(void)invalidate;
-(id)_URLScheme;
-(id)initWithURL:(id)arg1 rootMailboxUid:(id)arg2 ;
-(void)setUnreadCount:(unsigned)arg1 forMailbox:(id)arg2 ;
-(id)_nameForMailboxUid:(id)arg1 ;
-(void)setCachedConnection:(id)arg1 ;
-(id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3 failedToSelectMailbox:(BOOL*)arg4 ;
-(id)flagChangesForMailboxPath:(id)arg1 UID:(unsigned)arg2 connectTime:(double)arg3 ;
-(Class)storeClass;
-(BOOL)supportsRemoteAppend;
-(BOOL)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(BOOL)arg2 ;
-(id)displayName;
-(BOOL)_shouldConfigureMailboxCache;
-(void)setManaged:(BOOL)arg1 ;
-(id)_mailboxPathPrefix;
@end

