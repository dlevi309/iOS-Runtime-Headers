/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExportedObject:(NSObject *)arg1 ;
-(void)_setupConnection;
-(void)disconnect;
-(NSObject *)exportedObject;
-(NSXPCInterface *)exportedInterface;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(void)_remoteSessionConnectionWasInterrupted;
-(id)connectionResetBlock;
-(id)initForRemoteServiceName:(id)arg1 remoteInterface:(id)arg2 ;
-(void)registerGuaranteedRemoteCall:(id)arg1 ;
-(void)dropGuaraneteedRemoteCall:(id)arg1 ;
-(void)setConnectionResetBlock:(id)arg1 ;
@end

