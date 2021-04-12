/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@protocol SiriCoreConnectionProviderDelegate <NSObject>
@optional
-(void)connectionProvider:(id)arg1 receivedViabilityChangeNotification:(BOOL)arg2;
-(void)connectionProviderReceivedBetterRouteNotification:(id)arg1;

@required
-(void)connectionProvider:(id)arg1 receivedError:(id)arg2;

@end

