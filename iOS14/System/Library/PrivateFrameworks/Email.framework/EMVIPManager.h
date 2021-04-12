/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFFutureDelegate.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMVIPManagerObserver.h>
#import <libobjc.A.dylib/EMVIPReader_Private.h>
#import <libobjc.A.dylib/EMVIPManager.h>
@class NSSet, EAEmailAddressSet;


@protocol EMVIPManager <EMVIPReader,NSObject>
@property (nonatomic,copy,readonly) NSSet * allVIPs; 
@property (nonatomic,copy,readonly) EAEmailAddressSet * allVIPEmailAddresses; 
@required
-(void)removeVIPsWithEmailAddresses:(id)arg1;
-(void)saveVIPs:(id)arg1;
-(void)removeVIPsWithIdentifiers:(id)arg1;
-(EAEmailAddressSet *)allVIPEmailAddresses;
-(NSSet *)allVIPs;
-(id)vipWithIdentifier:(id)arg1;

@end


@class NSSet, EAEmailAddressSet, EFCancelationToken, EMRemoteConnectionRecoveryAssertion, EMRemoteConnection, EFPromise, NSString;

@interface EMVIPManager : NSObject <EFFutureDelegate, EFLoggable, EMVIPManagerObserver, EMVIPReader_Private, EMVIPManager> {

	os_unfair_lock_s _vipsLock;
	EAEmailAddressSet* _cachedEmailAddresses;
	EFCancelationToken* _observerCancelationToken;
	EMRemoteConnectionRecoveryAssertion* _connectionRecoveryAssertion;
	EMRemoteConnection* _connection;
	EFPromise* _vipsByIdentifierPromise;

}

@property (nonatomic,retain) EMRemoteConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (retain) EFPromise * vipsByIdentifierPromise;                                    //@synthesize vipsByIdentifierPromise=_vipsByIdentifierPromise - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * allVIPWaitForResult; 
@property (nonatomic,copy,readonly) NSSet * allVIPs; 
@property (nonatomic,copy,readonly) EAEmailAddressSet * allVIPEmailAddresses; 
@property (nonatomic,readonly) BOOL hasVIPs; 
+(id)log;
+(id)remoteInterface;
-(id)initWithRemoteConnection:(id)arg1 ;
-(void)observer:(id)arg1 updatedVIPs:(id)arg2 removedVIPs:(id)arg3 ;
-(void)didStartBlockingMainThreadForFuture:(id)arg1 ;
-(id)init;
-(void)observer:(id)arg1 gotVIPs:(id)arg2 ;
-(void)setVipsByIdentifierPromise:(EFPromise *)arg1 ;
-(BOOL)isVIPAddress:(id)arg1 ;
-(void)removeVIPsWithEmailAddresses:(id)arg1 ;
-(EFPromise *)vipsByIdentifierPromise;
-(EMRemoteConnection *)connection;
-(void)saveVIPs:(id)arg1 ;
-(void)removeVIPsWithIdentifiers:(id)arg1 ;
-(EAEmailAddressSet *)allVIPEmailAddresses;
-(BOOL)hasVIPs;
-(NSSet *)allVIPs;
-(id)_vipsByIdentifier;
-(void)_reset;
-(NSSet *)allVIPWaitForResult;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(id)vipWithIdentifier:(id)arg1 ;
-(void)_startObservingVIPChangesIfNecessary;
-(void)didFinishBlockingMainThreadForFuture:(id)arg1 ;
-(void)dealloc;
@end

