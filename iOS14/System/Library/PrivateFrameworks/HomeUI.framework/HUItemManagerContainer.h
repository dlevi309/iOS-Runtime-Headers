/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class HFItemManager;


@protocol HUItemManagerContainer <NSObject>
@property (nonatomic,readonly) HFItemManager * itemManager; 
@required
+(unsigned long long)updateMode;
-(HFItemManager *)itemManager;
-(void)recursivelyDisableItemUpdates:(BOOL)arg1 withReason:(id)arg2;

@end

