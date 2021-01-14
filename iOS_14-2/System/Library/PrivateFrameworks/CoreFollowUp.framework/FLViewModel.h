/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/


@protocol FLViewModel <NSObject>
@optional
-(id)groups;
-(void)refreshItems:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)refreshItemsForItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@required
-(id)allPendingItems;
-(void)setItemChangeHandler:(/*^block*/id)arg1;

@end

