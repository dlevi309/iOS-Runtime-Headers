/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUMomentsControllerDataSource <NSObject>
@property (assign,nonatomic,__weak) id<TUMomentsControllerDataSourceDelegate> delegate; 
@required
-(id<TUMomentsControllerDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)invalidate;
-(void)startRequestWithMediaType:(int)arg1 forStreamToken:(long long)arg2 requesteeID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)endRequestWithTransactionID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)registerStreamToken:(long long)arg1 requesterID:(id)arg2 remoteIDSDestinations:(id)arg3 remoteMomentsAvailable:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)unregisterStreamToken:(long long)arg1 completion:(/*^block*/id)arg2;

@end

