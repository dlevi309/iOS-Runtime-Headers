/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EMMessageRepositoryMailboxPredictionObserver_xpc.h>
#import <libobjc.A.dylib/EMRecoverableObserver.h>

@class NSArray, EFCancelationToken, NSString;

@interface _EMMessageRepositoryMailboxPredictionObserver : NSObject <EMMessageRepositoryMailboxPredictionObserver_xpc, EMRecoverableObserver> {

	NSArray* _messageObjectIDs;
	/*^block*/id _completionHandler;
	EFCancelationToken* _cancelationToken;

}

@property (nonatomic,copy,readonly) NSArray * messageObjectIDs;                    //@synthesize messageObjectIDs=_messageObjectIDs - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) EFCancelationToken * cancelationToken;              //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mailboxWasPredicted:(id)arg1 ;
-(void)recoverQueryWithRemoteConnection:(id)arg1 ;
-(void)performQueryWithRemoteConnection:(id)arg1 ;
-(id)initWithMessageObjectIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performQueryWithRemoteConnection:(id)arg1 forRecovery:(BOOL)arg2 ;
-(id)completionHandler;
-(NSArray *)messageObjectIDs;
-(void)cancel;
-(EFCancelationToken *)cancelationToken;
-(void)dealloc;
@end

