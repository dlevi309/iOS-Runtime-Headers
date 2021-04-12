/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class HMDBackingStore;


@protocol HMDAccountManager <NSObject>
@property (nonatomic,retain) HMDBackingStore * backingStore; 
@optional
-(id)primaryHandleForAccount:(id)arg1;

@required
-(HMDBackingStore *)backingStore;
-(void)setBackingStore:(id)arg1;
-(BOOL)shouldCacheAccount:(id)arg1;
-(BOOL)shouldSyncAccount:(id)arg1;
-(BOOL)shouldSyncDevice:(id)arg1;
-(BOOL)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;
-(BOOL)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;

@end

