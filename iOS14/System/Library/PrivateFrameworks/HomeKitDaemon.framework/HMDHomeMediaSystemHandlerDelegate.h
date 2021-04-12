/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class HMDBackingStore;


@protocol HMDHomeMediaSystemHandlerDelegate <NSObject>
@property (nonatomic,readonly) HMDBackingStore * backingStore; 
@required
-(HMDBackingStore *)backingStore;
-(id)mediaSystemController:(id)arg1 accessoryForUUID:(id)arg2;
-(void)mediaSystemController:(id)arg1 removeAccessories:(id)arg2 fromAssistantAccessControl:(id)arg3;

@end

