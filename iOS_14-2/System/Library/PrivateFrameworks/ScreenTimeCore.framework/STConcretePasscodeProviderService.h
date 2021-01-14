/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <libobjc.A.dylib/STPasscodeReceiverInterface.h>
#import <libobjc.A.dylib/STPasscodeProviderService.h>

@class NSXPCListenerEndpoint;

@interface STConcretePasscodeProviderService : NSObject <STPasscodeReceiverInterface, STPasscodeProviderService> {

	NSXPCListenerEndpoint* _clientListenerEndpoint;
	/*^block*/id _pendingProvidePasscodeCompletionHandler;

}

@property (readonly) NSXPCListenerEndpoint * clientListenerEndpoint;              //@synthesize clientListenerEndpoint=_clientListenerEndpoint - In the implementation block
@property (copy) id pendingProvidePasscodeCompletionHandler;                      //@synthesize pendingProvidePasscodeCompletionHandler=_pendingProvidePasscodeCompletionHandler - In the implementation block
-(NSXPCListenerEndpoint *)clientListenerEndpoint;
-(id)description;
-(void)collectPasscodeWithSetupServiceProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)pendingProvidePasscodeCompletionHandler;
-(void)setPendingProvidePasscodeCompletionHandler:(id)arg1 ;
-(void)providePasscode:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithClientListenerEndpoint:(id)arg1 ;
@end

