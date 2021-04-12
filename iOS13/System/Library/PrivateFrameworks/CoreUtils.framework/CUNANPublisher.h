/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)invalidate;
-(void)_invalidate;
-(int)port;
-(void)setName:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setPort:(int)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)serviceType;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setTrafficFlags:(unsigned)arg1 ;
-(void)setTextInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)textInfo;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(unsigned)trafficFlags;
-(void)publisher:(id)arg1 receivedMessage:(id)arg2 fromSubscriberID:(unsigned char)arg3 subscriberAddress:(id)arg4 ;
-(void)publisher:(id)arg1 dataConfirmedForHandle:(id)arg2 localInterfaceIndex:(unsigned)arg3 serviceSpecificInfo:(id)arg4 ;
-(void)publisher:(id)arg1 dataTerminatedForHandle:(id)arg2 reason:(long long)arg3 ;
-(void)publisherStarted:(id)arg1 ;
-(void)publisher:(id)arg1 failedToStartWithError:(long long)arg2 ;
-(void)publisher:(id)arg1 terminatedWithReason:(long long)arg2 ;
-(void)publisher:(id)arg1 dataIndicatedForHandle:(id)arg2 serviceSpecificInfo:(id)arg3 ;
-(void)_publisher:(id)arg1 dataConfirmedForHandle:(id)arg2 localInterfaceIndex:(unsigned)arg3 serviceSpecificInfo:(id)arg4 ;
-(BOOL)dataPathEnabled;
-(void)setDataPathEnabled:(BOOL)arg1 ;
-(id)dataSessionStartedHandler;
-(void)setDataSessionStartedHandler:(id)arg1 ;
-(id)dataSessionEndedHandler;
-(void)setDataSessionEndedHandler:(id)arg1 ;
@end

