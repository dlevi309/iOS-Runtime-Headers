/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDDataStreamTransport <NSObject>
@property (assign,nonatomic,__weak) id<HMDDataStreamTransportDelegate> delegate; 
@required
-(id<HMDDataStreamTransportDelegate>)delegate;
-(void)close;
-(void)connect;
-(void)setDelegate:(id)arg1;
-(void)sendRawFrame:(id)arg1 completion:(/*^block*/id)arg2;

@end

