/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/


@protocol PCInterfaceUsabilityMonitorProtocol <PCInterfaceMonitorProtocol>
@property (nonatomic,readonly) BOOL isRadioHot; 
@property (assign,nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate; 
@required
-(void)setThresholdOffTransitionCount:(unsigned long long)arg1;
-(void)setTrackedTimeInterval:(double)arg1;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setTrackUsability:(BOOL)arg1;
-(BOOL)isRadioHot;

@end

