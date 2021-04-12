/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@protocol DKExtensionHostAdapter <NSObject>
@property (assign,nonatomic,__weak) id<DKExtensionHostAdapterDelegate> delegate; 
@required
-(void)cancelWithCompletion:(/*^block*/id)arg1;
-(id<DKExtensionHostAdapterDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)startWithPayload:(id)arg1 completion:(/*^block*/id)arg2;

@end

