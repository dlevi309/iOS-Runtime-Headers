/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@interface WLWiFiDeviceClient : NSObject {

	WiFiDeviceClientRef _ref;

}

@property (assign,nonatomic) WiFiDeviceClientRef ref;              //@synthesize ref=_ref - In the implementation block
-(WiFiDeviceClientRef)ref;
-(void)setRef:(WiFiDeviceClientRef)arg1 ;
-(void)dealloc;
-(id)hostedNetworkMatchingSSID:(id)arg1 ;
-(void)disassociate;
-(void)startNetworkWithHostRole:(int)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopNetwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_hostedNetworks;
-(int)_startNetworkWithRole:(int)arg1 request:(id)arg2 session:(id)arg3 ;
-(int)_stopNetwork:(id)arg1 session:(id)arg2 ;
-(id)initWithWiFiDeviceClientRef:(WiFiDeviceClientRef)arg1 ;
-(id)_initWithoutWiFiDeviceClientRef;
-(BOOL)_completionMapsAreEmpty;
@end

