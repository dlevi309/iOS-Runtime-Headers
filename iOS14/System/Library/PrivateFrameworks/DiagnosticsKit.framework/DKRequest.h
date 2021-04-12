/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@protocol DKRequest <DKRequestExtensionHandler>
@property (assign,nonatomic,__weak) id<DKRequestDelegate> delegate; 
@property (nonatomic,retain) id context; 
@property (assign,nonatomic,__weak) id hostServicesDelegate; 
@required
+(id)requestWithExtensionAttributes:(id)arg1;
-(id)connectWithError:(id*)arg1;
-(id<DKRequestDelegate>)delegate;
-(id)context;
-(void)setDelegate:(id)arg1;
-(void)cancel;
-(void)setContext:(id)arg1;
-(void)setHostServicesDelegate:(id)arg1;
-(void)beginWithPayload:(id)arg1;
-(id)hostServicesDelegate;

@end

