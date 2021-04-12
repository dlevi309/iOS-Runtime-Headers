/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@interface WLNETRBClient : NSObject {

	NETRBClientRef _netrbClientRef;
	/*^block*/id _dhcpStartCompletionBlock;
	/*^block*/id _dhcpStopCompletionBlock;

}
-(id)init;
-(void)startDHCPWithCompletion:(/*^block*/id)arg1 ;
-(void)stopDHCPWithCompletion:(/*^block*/id)arg1 ;
-(NETRBClientRef)_netrbClient;
-(BOOL)_startDHCPWithInterface:(id)arg1 ;
-(BOOL)_stopDHCP;
-(void)_didStartDHCPWithSuccess:(BOOL)arg1 ;
-(void)_didStopDHCPWithSuccess:(BOOL)arg1 ;
-(BOOL)_completionsAreNil;
@end

