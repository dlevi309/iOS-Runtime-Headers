/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@protocol RMSServiceProvider <NSObject>
@property (assign,nonatomic,__weak) id<RMSServiceProviderDelegate> delegate; 
@required
-(void)beginDiscovery;
-(id<RMSServiceProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)endDiscovery;

@end

