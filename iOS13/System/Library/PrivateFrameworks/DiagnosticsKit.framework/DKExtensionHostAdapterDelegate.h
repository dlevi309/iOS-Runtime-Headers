/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@protocol DKExtensionHostAdapterDelegate <NSObject>
@property (assign,nonatomic,__weak) id hostServicesDelegate; 
@required
-(void)cancelExtensionRequest;
-(void)completeWithPayload:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setHostServicesDelegate:(id)arg1;
-(id)hostServicesDelegate;

@end

