/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WPClient.h>

@protocol WPRangingDelegate;
@interface WPRanging : WPClient {

	id<WPRangingDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPRangingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)stateDidChange:(long long)arg1 ;
-(id<WPRangingDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegate:(id<WPRangingDelegate>)arg1 ;
-(void)enableRanging:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(id)clientAsString;
-(void)rangingEnabled:(BOOL)arg1 withError:(id)arg2 ;
-(void)enableRanging:(BOOL)arg1 ;
-(void)isRangingEnabledReply:(/*^block*/id)arg1 ;
-(void)invalidate;
@end

