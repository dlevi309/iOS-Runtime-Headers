/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol AKFollowUpProvider <NSObject>
@required
-(BOOL)removeFollowUpItemsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(id)pendingAuthKitFollowUpItems:(id*)arg1;
-(BOOL)removeAllAuthKitFollowUpItems:(id*)arg1;
-(BOOL)addFollowUpItems:(id)arg1 error:(id*)arg2;
-(BOOL)removeFollowUpItems:(id)arg1 error:(id*)arg2;
-(BOOL)clearNotificationsForItem:(id)arg1 error:(id*)arg2;

@end

