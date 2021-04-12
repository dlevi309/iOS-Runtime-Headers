/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<ASTConnectionStatusDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(long long)state;
-(void)setState:(long long)arg1;
-(NSMutableURLRequest *)request;
-(id)didReceiveResponse;
-(BOOL)retryOnNetworkDisconnected;
-(long long)networkDisconnectedRetryCount;
-(void)setNetworkDisconnectedRetryCount:(long long)arg1;
-(unsigned long long)rootOfTrust;
-(void)setDidReceiveResponse:(/*^block*/id)arg1;
-(void)setRetryOnNetworkDisconnected:(BOOL)arg1;

@end

