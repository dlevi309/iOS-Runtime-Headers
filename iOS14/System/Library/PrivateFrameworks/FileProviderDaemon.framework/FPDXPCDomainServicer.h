/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/FPDDomainServicing.h>
#import <libobjc.A.dylib/FPDLifetimeServicing.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class FPDServer, FPDProvider, NSObject, FPDXPCDomainServicerLifetimeExtender, NSString, FPDExtensionSession, FPDDomain;

@interface FPDXPCDomainServicer : NSObject <FPDDomainServicing, FPDLifetimeServicing> {

	FPDServer* _server;
	FPDProvider* __provider;
	NSObject*<OS_dispatch_queue> _requestQueue;
	id _activePresenterObservation;
	FPDXPCDomainServicerLifetimeExtender* _lifetimeExtender;
	BOOL _isALifetimerExtender;
	NSObject*<OS_os_transaction> _serviceTransaction;
	NSString* _providerDomainID;

}

@property (nonatomic,readonly) NSString * providerDomainID;                     //@synthesize providerDomainID=_providerDomainID - In the implementation block
@property (nonatomic,readonly) FPDExtensionSession * sessionOrNil; 
@property (nonatomic,readonly) FPDDomain * domainOrNil; 
-(int)pid;
-(void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAndStartEnumeratingWithSettings:(id)arg1 observer:(id)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)didChangeItemID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)providerDomainID;
-(id)description;
-(void)stopExtendingLifetime;
-(void)invalidate;
-(void)_t_setFilePresenterObserver:(id)arg1 ;
-(void)resolveItemID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDomainWithIdentifier:(id)arg1 ejectable:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)_unregisterLifetimeExtension;
-(id)__providerIfExists;
-(void)_registerLifetimeExtension;
-(id)providerOrNil;
-(FPDDomain *)domainOrNil;
-(FPDExtensionSession *)sessionOrNil;
-(id)newFileProviderProxy;
-(id)initWithServer:(id)arg1 providerDomainID:(id)arg2 pid:(int)arg3 ;
-(BOOL)clientCanAccessService:(id)arg1 forConnection:(id)arg2 ;
-(void)startExtendingLifetime;
@end

