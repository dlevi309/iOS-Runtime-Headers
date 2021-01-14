/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <libobjc.A.dylib/CATTaskClientDelegate.h>
#import <libobjc.A.dylib/DMFTransportProvider.h>

@protocol DMFTransportProvider;
@class CATTaskClient, CATOperationQueue, NSString;

@interface DMFConnection : NSObject <CATTaskClientDelegate, DMFTransportProvider> {

	BOOL _isSystemConnection;
	id<DMFTransportProvider> _transportProvider;
	CATTaskClient* _taskClient;
	CATOperationQueue* _operationQueue;
	unsigned long long _connectionState;

}

@property (nonatomic,__weak,readonly) id<DMFTransportProvider> transportProvider;              //@synthesize transportProvider=_transportProvider - In the implementation block
@property (nonatomic,readonly) CATTaskClient * taskClient;                                     //@synthesize taskClient=_taskClient - In the implementation block
@property (nonatomic,readonly) CATOperationQueue * operationQueue;                             //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) unsigned long long connectionState;                               //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic) BOOL isSystemConnection;                                          //@synthesize isSystemConnection=_isSystemConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionForUID:(unsigned)arg1 ;
+(id)currentUserConnection;
+(id)systemConnection;
+(id)connectionForAppleID:(id)arg1 ;
+(id)sharedConnection;
-(CATOperationQueue *)operationQueue;
-(id<DMFTransportProvider>)transportProvider;
-(unsigned long long)connectionState;
-(void)client:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)performRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIsSystemConnection:(BOOL)arg1 ;
-(void)clientDidDisconnect:(id)arg1 ;
-(void)_operationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)batchOperationToPerformOperations:(id)arg1 ;
-(id)initWithTransportProvider:(id)arg1 userInfo:(id)arg2 ;
-(id)prepareOperationForRequest:(id)arg1 ;
-(id)makeNewTransport;
-(id)initWithUserInfo:(id)arg1 ;
-(void)clientDidInvalidate:(id)arg1 ;
-(CATTaskClient *)taskClient;
-(void)clientDidConnect:(id)arg1 ;
-(BOOL)isSystemConnection;
-(void)invalidate;
-(void)setConnectionState:(unsigned long long)arg1 ;
-(void)_reconnectTaskClient;
-(void)dealloc;
@end

