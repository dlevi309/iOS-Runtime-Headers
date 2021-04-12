/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
*/

#import <libobjc.A.dylib/CRSAppHistoryServerToClientInterface.h>

@protocol OS_dispatch_queue;
@class BSServiceConnection, NSObject, NSString;

@interface CRSAppHistoryController : NSObject <CRSAppHistoryServerToClientInterface> {

	BSServiceConnection* _connection;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) BSServiceConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BSServiceConnection *)connection;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setConnection:(BSServiceConnection *)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchUIContextsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSessionUIContextsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSessionEchoContextsWithCompletion:(/*^block*/id)arg1 ;
-(void)setSessionUIContexts:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

