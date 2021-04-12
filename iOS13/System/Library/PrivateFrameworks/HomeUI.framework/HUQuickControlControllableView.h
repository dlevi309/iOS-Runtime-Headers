/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class HUQuickControlViewProfile;


@protocol HUQuickControlControllableView <NSObject>
@property (nonatomic,retain) id value; 
@property (nonatomic,copy) HUQuickControlViewProfile * profile; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState; 
@optional
-(void)setSecondaryValue:(id)arg1;
-(id)secondaryValue;
-(unsigned long long)reachabilityState;
-(void)setReachabilityState:(unsigned long long)arg1;

@required
-(id)value;
-(void)setValue:(id)arg1;
-(HUQuickControlViewProfile *)profile;
-(void)setProfile:(id)arg1;
-(id)initWithProfile:(id)arg1;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;

@end

