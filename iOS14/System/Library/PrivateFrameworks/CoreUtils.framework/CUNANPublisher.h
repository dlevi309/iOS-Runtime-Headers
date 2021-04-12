/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/WiFiAwarePublisherDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, WiFiAwarePublisher, NSObject, NSString, NSDictionary;

@interface CUNANPublisher : NSObject <WiFiAwarePublisherDelegate> {

	/*^block*/id _activateCompletion;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableDictionary* _sessions;
	LogCategory* _ucat;
	WiFiAwarePublisher* _wfaPublisher;
	BOOL _dataPathEnabled;
	unsigned _controlFlags;
	int _port;
	unsigned _trafficFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	NSString* _name;
	NSString* _serviceType;
	NSDictionary* _textInfo;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _dataSessionStartedHandler;
	/*^block*/id _dataSessionEndedHandler;
	/*^block*/id _receiveHandler;

}

@property (assign,nonatomic) unsigned controlFlags;                                   //@synthesize controlFlags=_controlFlags - In the implementation block
@property (assign,nonatomic) BOOL dataPathEnabled;                                    //@synthesize dataPathEnabled=_dataPathEnabled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int port;                                                //@synthesize port=_port - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSDictionary * textInfo;                                   //@synthesize textInfo=_textInfo - In the implementation block
@property (assign,nonatomic) unsigned trafficFlags;                                   //@synthesize trafficFlags=_trafficFlags - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id dataSessionStartedHandler;                              //@synthesize dataSessionStartedHandler=_dataSessionStartedHandler - In the implementation block
@property (nonatomic,copy) id dataSessionEndedHandler;                                //@synthesize dataSessionEndedHandler=_dataSessionEndedHandler - In the implementation block
@property (nonatomic,copy) id receiveHandler;                                         //@synthesize receiveHandler=_receiveHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPort:(int)arg1 ;
-(unsigned)controlFlags;
-(int)port;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setTrafficFlags:(unsigned)arg1 ;
-(NSString *)name;
-(void)reportIssue:(id)arg1 ;
-(void)setTextInfo:(NSDictionary *)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(NSString *)description;
-(unsigned)trafficFlags;
-(NSDictionary *)textInfo;
-(void)publisher:(id)arg1 receivedMessage:(id)arg2 fromSubscriberID:(unsigned char)arg3 subscriberAddress:(id)arg4 ;
-(void)publisher:(id)arg1 failedToStartWithError:(long long)arg2 ;
-(void)publisher:(id)arg1 dataConfirmedForHandle:(id)arg2 localInterfaceIndex:(unsigned)arg3 serviceSpecificInfo:(id)arg4 ;
-(void)publisher:(id)arg1 dataTerminatedForHandle:(id)arg2 reason:(long long)arg3 ;
-(void)publisherStarted:(id)arg1 ;
-(void)publisher:(id)arg1 terminatedWithReason:(long long)arg2 ;
-(void)sendMessageData:(id)arg1 endpoint:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)publisher:(id)arg1 dataIndicatedForHandle:(id)arg2 serviceSpecificInfo:(id)arg3 ;
-(void)_publisher:(id)arg1 dataConfirmedForHandle:(id)arg2 localInterfaceIndex:(unsigned)arg3 serviceSpecificInfo:(id)arg4 ;
-(BOOL)dataPathEnabled;
-(void)setDataPathEnabled:(BOOL)arg1 ;
-(id)dataSessionEndedHandler;
-(id)dataSessionStartedHandler;
-(void)setDataSessionStartedHandler:(id)arg1 ;
-(void)setDataSessionEndedHandler:(id)arg1 ;
-(id)receiveHandler;
-(void)setReceiveHandler:(id)arg1 ;
-(void)_invalidated;
-(void)invalidate;
-(void)setName:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)serviceType;
-(void)setControlFlags:(unsigned)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(id)interruptionHandler;
-(void)dealloc;
@end

