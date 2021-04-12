/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol TVRMSServiceProvider <NSObject>
@property (assign,nonatomic,__weak) id<TVRMSServiceProviderDelegate> delegate; 
@required
-(id<TVRMSServiceProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)endDiscovery;
-(void)beginDiscovery;

@end

