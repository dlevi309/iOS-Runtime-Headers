/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EMMessageRepositoryCountQueryObserver_xpc.h>
#import <libobjc.A.dylib/EMRecoverableObserver.h>

@protocol EMMessageRepositoryCountQueryObserver;
@class EMMessageRepository, EFQuery, EMMailboxScope, EFCancelationToken, EFPair, NSString;

@interface _EMMessageRepositoryCountingQueryObserver : NSObject <EMMessageRepositoryCountQueryObserver_xpc, EMRecoverableObserver> {

	EMMessageRepository* _repository;
	EFQuery* _query;
	EMMailboxScope* _serverCountMailboxScope;
	id<EMMessageRepositoryCountQueryObserver> _observer;
	EFCancelationToken* _token;
	EFPair* _queryIdentifier;

}

@property (readonly) EFPair * queryIdentifier;                      //@synthesize queryIdentifier=_queryIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)countDidChange:(long long)arg1 acknowledgementToken:(id)arg2 ;
-(void)recoverQueryWithRemoteConnection:(id)arg1 ;
-(void)performQueryWithRemoteConnection:(id)arg1 ;
-(id)initWithRepository:(id)arg1 queryIdentifier:(id)arg2 includingServerCountsForMailboxScope:(id)arg3 observer:(id)arg4 ;
-(void)_performQueryWithRemoteConnection:(id)arg1 forRecovery:(BOOL)arg2 ;
-(EFPair *)queryIdentifier;
-(void)cancel;
-(void)dealloc;
@end

