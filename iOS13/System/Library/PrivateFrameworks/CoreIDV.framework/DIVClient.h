/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <libobjc.A.dylib/DIVerificationClientSideProtocol.h>

@protocol DIVerificationServerSideProtocol;
@class NSXPCConnection, DIVerificationSessionContext, NSMutableSet, NSString;

@interface DIVClient : NSObject <DIVerificationClientSideProtocol> {

	unsigned long long _state;
	NSXPCConnection* _serverConnection;
	DIVerificationSessionContext* _context;
	id<DIVerificationServerSideProtocol> _remoteObjectProxy;
	NSMutableSet* _disconnectionCallbacks;
	BOOL _isDisconnected;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)performVerificationWithAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shareVerificationResultWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)configure:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVerificationResultWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)concludeVerification:(id)arg1 ;
-(id)createDaemonDisconnectedError;
@end

