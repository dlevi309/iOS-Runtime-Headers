/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUMomentsControllerDataSource <NSObject>
@property (assign,nonatomic,__weak) id<TUMomentsControllerDataSourceDelegate> delegate; 
@required
-(void)invalidate;
-(id<TUMomentsControllerDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)startRequestWithMediaType:(int)arg1 forStreamToken:(long long)arg2 requesteeID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)endRequestWithTransactionID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)registerStreamToken:(long long)arg1 requesterID:(id)arg2 remoteIDSDestinations:(id)arg3 remoteMomentsAvailable:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)unregisterStreamToken:(long long)arg1 completion:(/*^block*/id)arg2;

@end

