/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WPClient.h>

@protocol WPRangingDelegate;
@interface WPRanging : WPClient {

	id<WPRangingDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPRangingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)invalidate;
-(id<WPRangingDelegate>)delegate;
-(void)setDelegate:(id<WPRangingDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)rangingEnabled:(BOOL)arg1 withError:(id)arg2 ;
-(void)enableRanging:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)isRangingEnabledReply:(/*^block*/id)arg1 ;
-(void)enableRanging:(BOOL)arg1 ;
@end

