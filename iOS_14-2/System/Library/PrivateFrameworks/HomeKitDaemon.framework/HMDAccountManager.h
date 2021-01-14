/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

