/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@protocol RMSServiceProvider <NSObject>
@property (assign,nonatomic,__weak) id<RMSServiceProviderDelegate> delegate; 
@required
-(id<RMSServiceProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)endDiscovery;
-(void)beginDiscovery;

@end

