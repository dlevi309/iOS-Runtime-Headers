/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class HMFUnfairLock, NSMutableArray;

@interface HMPendingRequests : NSObject {

	HMFUnfairLock* _lock;
	NSMutableArray* _contextLists;

}

@property (nonatomic,retain) NSMutableArray * contextLists;              //@synthesize contextLists=_contextLists - In the implementation block
-(id)removeApplicationDataForIdentifier:(id)arg1 ;
-(id)init;
-(id)retrieveAccessoryDescriptionForIdentifier:(id)arg1 ;
-(id)_retrieveRequestOfType:(long long)arg1 forIdentifier:(id)arg2 remove:(BOOL)arg3 ;
-(NSMutableArray *)contextLists;
-(void)addMediaSystemBuilder:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(id)removeCompletionBlockForIdentifier:(id)arg1 ;
-(void)addProgressHandler:(id)arg1 forAccessoryIdentifier:(id)arg2 ;
-(void)addRequest:(id)arg1 ofType:(long long)arg2 forIdentifier:(id)arg3 ;
-(id)removeRequestOfType:(long long)arg1 forIdentifier:(id)arg2 ;
-(id)removeProgressBlockForIdentifier:(id)arg1 ;
-(id)removeAccessoryDescriptionForIdentifier:(id)arg1 ;
-(id)retrieveCompletionBlockForIdentifier:(id)arg1 ;
-(id)retrieveProgressBlockForIdentifier:(id)arg1 ;
-(void)addAccessoryDescription:(id)arg1 progressBlock:(id)arg2 andCompletionBlock:(id)arg3 forIdentifier:(id)arg4 ;
-(void)addCompletionBlock:(id)arg1 forIdentifier:(id)arg2 ;
-(id)removeMediaSystemBuilderForIdentifier:(id)arg1 ;
-(id)removeTriggerForIdentifier:(id)arg1 ;
-(id)removeEventForIdentifier:(id)arg1 ;
-(void)addEvent:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(void)addAccessory:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(void)addAction:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(void)addEvents:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(void)setContextLists:(NSMutableArray *)arg1 ;
-(id)retrieveRequestOfType:(long long)arg1 forIdentifier:(id)arg2 ;
-(id)removeAccessoryForIdentifier:(id)arg1 ;
-(void)addTrigger:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(id)removeActionForIdentifier:(id)arg1 ;
-(void)addApplicationData:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(id)removeEventsForIdentifier:(id)arg1 ;
-(void)_addRequest:(id)arg1 ofType:(long long)arg2 forIdentifier:(id)arg3 ;
@end

