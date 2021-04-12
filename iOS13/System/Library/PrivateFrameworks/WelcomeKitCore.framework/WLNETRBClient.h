/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

