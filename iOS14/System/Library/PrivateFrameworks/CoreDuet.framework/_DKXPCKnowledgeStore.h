/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKKnowledgeQuerying.h>
#import <libobjc.A.dylib/_DKKnowledgeSaving.h>
#import <libobjc.A.dylib/_DKKnowledgeDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeEventStreamDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeSynchronizing.h>

@class NSXPCConnection;

@interface _DKXPCKnowledgeStore : NSObject <_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing> {

	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)XPCUserKnowledgeStore;
+(id)XPCKnowledgeStore;
-(BOOL)deleteRemoteState:(id*)arg1 ;
-(void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithConnection:(id)arg1 ;
-(id)init;
-(void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)saveObjects:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 ;
-(id)deleteObjects:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 synchronous:(BOOL)arg2 error:(id*)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)sourceDeviceIdentityFromObject:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)deleteObjects:(id)arg1 error:(id*)arg2 ;
-(BOOL)synchronizeWithError:(id*)arg1 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(unsigned long long)deleteAllEventsInEventStream:(id)arg1 synchronous:(BOOL)arg2 error:(id*)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(NSXPCConnection *)connection;
-(unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2 ;
-(void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)sourceDeviceIdentityWithError:(id*)arg1 ;
-(void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)saveObjects:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)deviceUUID;
-(id)executeQuery:(id)arg1 synchronous:(BOOL)arg2 error:(id*)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)confirmConnectionWithError:(id*)arg1 ;
-(void)dealloc;
@end

