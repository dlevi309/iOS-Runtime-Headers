/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedConnection;
+(id)systemConnection;
+(id)connectionForUID:(unsigned)arg1 ;
+(id)currentUserConnection;
+(id)connectionForAppleID:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(CATOperationQueue *)operationQueue;
-(unsigned long long)connectionState;
-(void)clientDidDisconnect:(id)arg1 ;
-(void)setConnectionState:(unsigned long long)arg1 ;
-(id)prepareOperationForRequest:(id)arg1 ;
-(id)initWithUserInfo:(id)arg1 ;
-(void)setIsSystemConnection:(BOOL)arg1 ;
-(id)initWithTransportProvider:(id)arg1 userInfo:(id)arg2 ;
-(void)_reconnectTaskClient;
-(CATTaskClient *)taskClient;
-(void)_operationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<DMFTransportProvider>)transportProvider;
-(id)makeNewTransport;
-(void)client:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)clientDidConnect:(id)arg1 ;
-(void)clientDidInvalidate:(id)arg1 ;
-(void)performRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)batchOperationToPerformOperations:(id)arg1 ;
-(BOOL)isSystemConnection;
@end

