/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

