/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <libobjc.A.dylib/MLMediaLibraryAccountChangeObserver.h>
#import <libobjc.A.dylib/MLMediaLibraryResourcesServiceProtocol.h>

@protocol OS_dispatch_queue, MLMediaLibraryAccountChangeObserver;
@class NSObject, NSXPCConnection, NSOperationQueue, NSString;

@interface MLMediaLibraryResourcesServiceClient : NSObject <MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceProtocol> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSXPCConnection* _xpcClientConnection;
	id<MLMediaLibraryAccountChangeObserver> _accountChangeObserver;
	NSOperationQueue* _accountChangeOperationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                                 //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;                                //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcClientConnection;                                      //@synthesize xpcClientConnection=_xpcClientConnection - In the implementation block
@property (nonatomic,retain) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;              //@synthesize accountChangeObserver=_accountChangeObserver - In the implementation block
@property (nonatomic,retain) NSOperationQueue * accountChangeOperationQueue;                             //@synthesize accountChangeOperationQueue=_accountChangeOperationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
-(void)setAccountChangeObserver:(id<MLMediaLibraryAccountChangeObserver>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setAccountChangeOperationQueue:(NSOperationQueue *)arg1 ;
-(void)emergencyDisconnectWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)terminateForFailureToPerformDatabasePathChange;
-(NSOperationQueue *)accountChangeOperationQueue;
-(id<MLMediaLibraryAccountChangeObserver>)accountChangeObserver;
-(void)performDatabasePathChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithAccountChangeObserver:(id)arg1 ;
-(id)_libraryContainerPathWithError:(id*)arg1 ;
-(NSXPCConnection *)xpcClientConnection;
-(id)connectionWithListenerEndpoint:(id)arg1 ;
-(id)libraryContainerPathWithError:(id*)arg1 ;
-(void)setXpcClientConnection:(NSXPCConnection *)arg1 ;
@end

