/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class NSString, NSXPCInterface, NSXPCConnection, NSMutableArray, NSLock, NSObject;

@interface SLRemoteSessionProxy : NSObject {

	NSString* _serviceName;
	NSXPCInterface* _remoteInterface;
	id _remoteProxy;
	NSXPCConnection* _connection;
	NSMutableArray* _guaranteedRemoteCalls;
	NSLock* _guaranteedRemoteCallsLock;
	NSObject* _exportedObject;
	NSXPCInterface* _exportedInterface;
	/*^block*/id _connectionResetBlock;

}

@property (__weak) NSObject * exportedObject;                       //@synthesize exportedObject=_exportedObject - In the implementation block
@property (retain) NSXPCInterface * exportedInterface;              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (copy) id connectionResetBlock;                           //@synthesize connectionResetBlock=_connectionResetBlock - In the implementation block
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setExportedObject:(NSObject *)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)disconnect;
-(NSObject *)exportedObject;
-(NSXPCInterface *)exportedInterface;
-(id)initForRemoteServiceName:(id)arg1 remoteInterface:(id)arg2 ;
-(void)setConnectionResetBlock:(id)arg1 ;
-(void)dropGuaraneteedRemoteCall:(id)arg1 ;
-(void)registerGuaranteedRemoteCall:(id)arg1 ;
-(id)connectionResetBlock;
-(void)_remoteSessionConnectionWasInterrupted;
-(void)_setupConnection;
@end

