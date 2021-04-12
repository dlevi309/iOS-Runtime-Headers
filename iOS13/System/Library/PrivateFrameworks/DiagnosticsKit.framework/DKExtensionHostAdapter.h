/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@protocol DKExtensionHostAdapter <NSObject>
@property (assign,nonatomic,__weak) id<DKExtensionHostAdapterDelegate> delegate; 
@required
-(id<DKExtensionHostAdapterDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancelWithCompletion:(/*^block*/id)arg1;
-(void)startWithPayload:(id)arg1 completion:(/*^block*/id)arg2;

@end

