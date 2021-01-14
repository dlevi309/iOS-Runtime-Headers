/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libThreadExternalCommissioner.dylib
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <libThreadExternalCommissioner.dylib/libThreadExternalCommissioner.dylib-Structs.h>
@class NSMutableDictionary, NSString, NSObject, NSNetService;

@interface BorderAgentConnector : NSObject {

	shared_ptr<ot::commissioner::Commissioner>* _commissioner;
	NSMutableDictionary* _notifiers;
	NSString* _name;
	unsigned long long _timeout;
	unsigned long long _baState;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _commissioningTimer;
	/*^block*/id _completionHandler;
	NSNetService* _netService;

}

@property (retain) NSNetService * netService;              //@synthesize netService=_netService - In the implementation block
+(void)setLogLevel:(unsigned char)arg1 ;
+(void)setCommissioningTimeout:(unsigned long long)arg1 ;
+(unsigned char)osLogToCommissionerLevel;
+(unsigned char)commissionerLogToOSLevel:(unsigned char)arg1 ;
-(id)setDataSet:(unsigned long long)arg1 ;
-(NSNetService *)netService;
-(id)initWithNetService:(id)arg1 ;
-(void)setNetService:(NSNetService *)arg1 ;
-(id)stateString;
-(void)resignCommmissioner;
-(void)disconnectCommissioner;
-(id)initWithNetService:(id)arg1 commissionerName:(id)arg2 queue:(id)arg3 ;
-(void)commissionDevice:(id)arg1 CC:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)connectToBorderAgentWithPSKC:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)connectToBorderAgent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)initWithNetService:(id)arg1 commissionerName:(id)arg2 ;
-(id)errorFromCode:(unsigned long long)arg1 ;
-(id)getPSKc:(id)arg1 ;
-(id)getIPAddress;
-(Config*)getConfig:(id)arg1 ;
-(void)commissioningComplete:(id)arg1 ;
-(void)setJoinerInfo:(unsigned long long)arg1 CC:(id)arg2 ;
-(id)errorFromCode:(unsigned long long)arg1 extraInfo:(id)arg2 ;
-(void)startCommissioningTimer:(unsigned long long)arg1 ;
-(id)startCommissioning:(unsigned long long)arg1 ;
-(void)petition:(/*^block*/id)arg1 ;
-(void)stopCommissioningTimer;
-(id)errorWithCode:(unsigned long long)arg1 description:(id)arg2 info:(id)arg3 ;
-(void)setCommissioningTimeout:(unsigned long long)arg1 ;
-(void)registerNotification:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)unRegisterNotification:(id)arg1 ;
-(id)connectToBorderAgent:(id)arg1 ;
-(id)commissionDevice:(id)arg1 CC:(id)arg2 ;
-(BOOL)isCommissionerValid;
@end

