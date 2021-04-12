/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject, PLXPCTransaction, PLLibraryServicesManager, NSXPCConnection, PLAssetsdClient, NSString;

@interface PLDaemonJob : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _xpcReply;
	PLXPCTransaction* _transaction;
	/*^block*/id _replyHandler;
	unsigned long long _signpostId;
	PLLibraryServicesManager* _libraryServicesManager;
	NSXPCConnection* _clientConnection;
	PLAssetsdClient* _assetsdClient;

}

@property (assign,nonatomic) NSObject*<OS_xpc_object> xpcReply; 
@property (nonatomic,retain) NSXPCConnection * clientConnection; 
@property (nonatomic,retain) PLLibraryServicesManager * libraryServicesManager; 
@property (nonatomic,copy) id replyHandler; 
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcReply; 
@property (nonatomic,retain) NSXPCConnection * clientConnection;                             //@synthesize clientConnection=_clientConnection - In the implementation block
@property (nonatomic,readonly) PLAssetsdClient * assetsdClient;                              //@synthesize assetsdClient=_assetsdClient - In the implementation block
@property (nonatomic,readonly) NSString * jobDescription; 
+(BOOL)supportsSecureCoding;
+(void)runDaemonSideWithXPCEvent:(id)arg1 libraryServicesManager:(id)arg2 ;
-(id)init;
-(void)run;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replyHandler;
-(id)initWithAssetsdClient:(id)arg1 ;
-(PLLibraryServicesManager *)libraryServicesManager;
-(PLAssetsdClient *)assetsdClient;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(BOOL)shouldArchiveXPCToDisk;
-(void)sendToAssetsd;
-(NSObject*<OS_xpc_object>)xpcReply;
-(void)setXpcReply:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)jobDescription;
-(NSXPCConnection *)clientConnection;
-(void)setClientConnection:(NSXPCConnection *)arg1 ;
-(BOOL)shouldRunOnDaemonSerialQueue;
-(void)handleReply;
-(void)archiveXPCToDisk:(id)arg1 ;
-(void)setLibraryServicesManager:(PLLibraryServicesManager *)arg1 ;
-(void)sendToAssetsdWithReply;
-(id)newDictionaryReplyForObject:(id)arg1 ;
-(void)setReplyHandler:(id)arg1 ;
@end

