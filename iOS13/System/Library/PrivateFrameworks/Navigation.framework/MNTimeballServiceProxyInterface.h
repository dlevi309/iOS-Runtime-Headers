/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNTimeballServiceProxyInterface <NSObject>
@property (assign,nonatomic) id<MNTimeballServiceProxyDelegate> delegate; 
@required
-(id<MNTimeballServiceProxyDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 handlerID:(id)arg4;
-(void)subscribeToDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;
-(void)unsubscribeFromDestination:(id)arg1;
-(void)subscribeToAllDestinations;
-(void)unsubscribeFromAllDestinations;

@end

