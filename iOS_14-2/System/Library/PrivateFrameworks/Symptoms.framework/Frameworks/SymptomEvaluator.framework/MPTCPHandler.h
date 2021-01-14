/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_source;
@class NetworkAnalyticsStateRelay, NSObject, NSString;

@interface MPTCPHandler : NSObject <ConfigurableObjectProtocol> {

	int _kernelWifiAdvice;
	int _kernelCellAdvice;
	NetworkAnalyticsStateRelay* cellRelay;
	NetworkAnalyticsStateRelay* wifiRelay;
	id relayReadyObserver;
	id rnfWiFiObserver;
	int _sockfd;
	NSObject*<OS_dispatch_source> _socksrc;

}

@property (assign) int sockfd;                                         //@synthesize sockfd=_sockfd - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> socksrc;              //@synthesize socksrc=_socksrc - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(int)configureInstance:(id)arg1 ;
-(void)sendReply:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(int)sockfd;
-(id)init;
-(NSObject*<OS_dispatch_source>)socksrc;
-(void)handleSrcEvent;
-(void)setSockfd:(int)arg1 ;
-(void)setupSockFD;
-(void)_performUpdate;
-(void)_setMPTCPAdvisoryCell:(int)arg1 ;
-(void)rnfWiFiEvent:(id)arg1 withInfo:(id)arg2 ;
-(void)_setMPTCPAdvisoryWiFi:(long long)arg1 Cell:(int)arg2 ;
-(void)setSocksrc:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_setMPTCPAdvisoryWiFi:(long long)arg1 ;
-(void)dealloc;
@end

