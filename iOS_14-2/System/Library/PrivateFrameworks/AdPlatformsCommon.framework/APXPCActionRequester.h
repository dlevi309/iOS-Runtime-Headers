/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <libobjc.A.dylib/APXPCActionRequesterProtocol.h>

@class NSUUID, Protocol, APXPCRemoteConnection, NSString;

@interface APXPCActionRequester : NSObject <APXPCActionRequesterProtocol> {

	Protocol* _exportedInterface;
	id _exportedObject;
	id _remoteObjectProxy;
	APXPCRemoteConnection* _connection;
	NSUUID* _delegateID;

}

@property (nonatomic,retain) id remoteObjectProxy;                            //@synthesize remoteObjectProxy=_remoteObjectProxy - In the implementation block
@property (nonatomic,retain) APXPCRemoteConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSUUID * delegateID;                             //@synthesize delegateID=_delegateID - In the implementation block
@property (nonatomic,readonly) Protocol * exportedInterface;                  //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,readonly) id exportedObject;                             //@synthesize exportedObject=_exportedObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)unfairLock;
+(id)machService;
+(BOOL)canShareConnection;
-(id)xpcConnection;
-(void)connectionInvalidated;
-(void)finished;
-(id)remoteObjectProxy;
-(id)init;
-(id)exportedObject;
-(id)remoteObjectInterface;
-(Protocol *)exportedInterface;
-(void)connectionInterrupted;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSString *)description;
-(APXPCRemoteConnection *)connection;
-(void)setConnection:(APXPCRemoteConnection *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSUUID *)delegateID;
-(void)extendCollectionClassesForExportedInterface:(id)arg1 ;
-(void)extendCollectionClassesForRemoteInterface:(id)arg1 ;
-(void)setDelegateID:(NSUUID *)arg1 ;
@end

