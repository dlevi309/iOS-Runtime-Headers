/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@protocol IDSXPCAdapter;
#import <IDS/IDS-Structs.h>
@class NSMutableDictionary;

@interface _IDSXPCCheckinManager : NSObject {

	os_unfair_lock_s _checkinLock;
	NSMutableDictionary* _connectionInfoByServiceIdentifier;
	id<IDSXPCAdapter> _XPCAdapter;

}

@property (nonatomic,retain) NSMutableDictionary * connectionInfoByServiceIdentifier;              //@synthesize connectionInfoByServiceIdentifier=_connectionInfoByServiceIdentifier - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s checkinLock;                                         //@synthesize checkinLock=_checkinLock - In the implementation block
@property (nonatomic,retain) id<IDSXPCAdapter> XPCAdapter;                                         //@synthesize XPCAdapter=_XPCAdapter - In the implementation block
+(id)sharedInstance;
-(id)init;
-(os_unfair_lock_s)checkinLock;
-(void)noteFinishedTransactionForService:(id)arg1 ;
-(void)_temporarilyStoreMessage:(id)arg1 forServiceIdentifier:(id)arg2 ;
-(void)_performLockedAccess:(/*^block*/id)arg1 ;
-(id)initWithXPCAdapter:(id)arg1 ;
-(void)noteCreatedService:(id)arg1 ;
-(void)setXPCAdapter:(id<IDSXPCAdapter>)arg1 ;
-(id<IDSXPCAdapter>)XPCAdapter;
-(void)setConnectionInfoByServiceIdentifier:(NSMutableDictionary *)arg1 ;
-(void)teardownAll;
-(NSMutableDictionary *)connectionInfoByServiceIdentifier;
-(void)setCheckinLock:(os_unfair_lock_s)arg1 ;
-(void)teardownService:(id)arg1 ;
@end

