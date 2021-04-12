/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

