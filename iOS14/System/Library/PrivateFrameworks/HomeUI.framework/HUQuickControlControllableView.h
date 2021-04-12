/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class HUQuickControlViewProfile;


@protocol HUQuickControlControllableView <NSObject>
@property (nonatomic,retain) id value; 
@property (nonatomic,copy) HUQuickControlViewProfile * profile; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState; 
@optional
-(id)secondaryValue;
-(void)setSecondaryValue:(id)arg1;
-(unsigned long long)reachabilityState;
-(void)setReachabilityState:(unsigned long long)arg1;

@required
-(void)setProfile:(id)arg1;
-(id)initWithProfile:(id)arg1;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
-(void)setValue:(id)arg1;
-(HUQuickControlViewProfile *)profile;
-(id)value;

@end

