/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVBonjourServiceClientDelegate.h>
#import <AVKit/AVAirTransportDelegate.h>

@protocol AVAirMessageDispatcherClientDelegate;
@class NSNetService, AVAirTransport, AVBonjourServiceClient, NSString;

@interface AVAirMessageDispatcher : NSObject <AVBonjourServiceClientDelegate, AVAirTransportDelegate> {

	id<AVAirMessageDispatcherClientDelegate> _delegate;
	NSNetService* _currentNetService;
	AVAirTransport* _channel;
	AVBonjourServiceClient* _bonjourServiceClient;

}

@property (nonatomic,retain) AVAirTransport * channel;                                              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) AVBonjourServiceClient * bonjourServiceClient;                       //@synthesize bonjourServiceClient=_bonjourServiceClient - In the implementation block
@property (assign,nonatomic,__weak) id<AVAirMessageDispatcherClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNetService * currentNetService;                                      //@synthesize currentNetService=_currentNetService - In the implementation block
@property (nonatomic,readonly) BOOL haveAirPlayService; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
+(BOOL)_isDispatcherEnabled;
-(id)init;
-(void)airTransportOutputDidOpen:(id)arg1 ;
-(void)airTransport:(id)arg1 didReceiveObject:(id)arg2 ;
-(void)airTransportInputDidClose:(id)arg1 ;
-(id<AVAirMessageDispatcherClientDelegate>)delegate;
-(void)setChannel:(AVAirTransport *)arg1 ;
-(AVAirTransport *)channel;
-(void)didConnectToBonjourService:(id)arg1 channel:(id)arg2 ;
-(BOOL)haveAirPlayService;
-(NSNetService *)currentNetService;
-(void)setCurrentNetService:(NSNetService *)arg1 ;
-(AVBonjourServiceClient *)bonjourServiceClient;
-(void)setDelegate:(id<AVAirMessageDispatcherClientDelegate>)arg1 ;
-(NSString *)description;
-(void)sendMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

