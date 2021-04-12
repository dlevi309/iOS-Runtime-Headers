/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFFutureDelegate.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMVIPManagerObserver.h>
#import <libobjc.A.dylib/EMVIPManager.h>
@class NSSet, EAEmailAddressSet;


@protocol EMVIPManager <NSObject>
@property (nonatomic,readonly) BOOL hasVIPs; 
@property (nonatomic,copy,readonly) NSSet * allVIPs; 
@property (nonatomic,copy,readonly) EAEmailAddressSet * allVIPEmailAddresses; 
@required
-(void)saveVIPs:(id)arg1;
-(void)removeVIPsWithIdentifiers:(id)arg1;
-(void)removeVIPsWithEmailAddresses:(id)arg1;
-(BOOL)isVIPAddress:(id)arg1;
-(EAEmailAddressSet *)allVIPEmailAddresses;
-(id)vipWithIdentifier:(id)arg1;
-(BOOL)hasVIPs;
-(NSSet *)allVIPs;

@end


@class NSSet, EAEmailAddressSet, EFCancelationToken, EMRemoteConnection, EFPromise, NSString;

@interface EMVIPManager : NSObject <EFFutureDelegate, EFLoggable, EMVIPManagerObserver, EMVIPManager> {

	os_unfair_lock_s _vipsLock;
	EAEmailAddressSet* _cachedEmailAddresses;
	EFCancelationToken* _observerCancelationToken;
	EMRemoteConnection* _connection;
	EFPromise* _vipsByIdentifierPromise;

}

@property (nonatomic,retain) EMRemoteConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (retain) EFPromise * vipsByIdentifierPromise;                                    //@synthesize vipsByIdentifierPromise=_vipsByIdentifierPromise - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasVIPs; 
@property (nonatomic,copy,readonly) NSSet * allVIPs; 
@property (nonatomic,copy,readonly) EAEmailAddressSet * allVIPEmailAddresses; 
+(id)log;
+(id)remoteInterface;
-(id)init;
-(void)dealloc;
-(void)_reset;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(void)didStartBlockingMainThreadForFuture:(id)arg1 ;
-(void)didFinishBlockingMainThreadForFuture:(id)arg1 ;
-(id)initWithRemoteConnection:(id)arg1 ;
-(void)saveVIPs:(id)arg1 ;
-(void)removeVIPsWithIdentifiers:(id)arg1 ;
-(void)removeVIPsWithEmailAddresses:(id)arg1 ;
-(BOOL)isVIPAddress:(id)arg1 ;
-(void)observer:(id)arg1 gotVIPs:(id)arg2 ;
-(void)observer:(id)arg1 updatedVIPs:(id)arg2 removedVIPs:(id)arg3 ;
-(EFPromise *)vipsByIdentifierPromise;
-(void)setVipsByIdentifierPromise:(EFPromise *)arg1 ;
-(void)_startObservingVIPChangesIfNecessary;
-(id)_vipsByIdentifier;
-(EAEmailAddressSet *)allVIPEmailAddresses;
-(id)vipWithIdentifier:(id)arg1 ;
-(BOOL)hasVIPs;
-(NSSet *)allVIPs;
@end

