/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

