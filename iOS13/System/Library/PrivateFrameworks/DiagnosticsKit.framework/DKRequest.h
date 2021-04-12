/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@protocol DKRequest <DKRequestExtensionHandler>
@property (assign,nonatomic,__weak) id<DKRequestDelegate> delegate; 
@property (nonatomic,retain) id context; 
@property (assign,nonatomic,__weak) id hostServicesDelegate; 
@required
+(id)requestWithExtensionAttributes:(id)arg1;
-(id<DKRequestDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancel;
-(id)context;
-(void)setContext:(id)arg1;
-(id)connectWithError:(id*)arg1;
-(void)setHostServicesDelegate:(id)arg1;
-(void)beginWithPayload:(id)arg1;
-(id)hostServicesDelegate;

@end

