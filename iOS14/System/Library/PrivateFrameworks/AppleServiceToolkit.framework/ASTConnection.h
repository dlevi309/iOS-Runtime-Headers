/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

@class NSMutableURLRequest;


@protocol ASTConnection <NSObject>
@property (nonatomic,copy) id didReceiveResponse; 
@property (nonatomic,readonly) NSMutableURLRequest * request; 
@property (assign,nonatomic,__weak) id<ASTConnectionStatusDelegate> delegate; 
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) long long networkDisconnectedRetryCount; 
@property (assign,nonatomic) BOOL retryOnNetworkDisconnected; 
@property (nonatomic,readonly) unsigned long long rootOfTrust; 
@required
-(id)didReceiveResponse;
-(id<ASTConnectionStatusDelegate>)delegate;
-(void)setDidReceiveResponse:(/*^block*/id)arg1;
-(NSMutableURLRequest *)request;
-(void)setDelegate:(id)arg1;
-(void)setState:(long long)arg1;
-(long long)state;
-(BOOL)retryOnNetworkDisconnected;
-(long long)networkDisconnectedRetryCount;
-(void)setNetworkDisconnectedRetryCount:(long long)arg1;
-(unsigned long long)rootOfTrust;
-(void)setRetryOnNetworkDisconnected:(BOOL)arg1;

@end

