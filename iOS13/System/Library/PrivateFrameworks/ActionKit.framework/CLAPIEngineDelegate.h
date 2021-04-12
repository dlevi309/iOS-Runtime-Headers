/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol CLAPIEngineDelegate <NSObject>
@optional
-(void)accountInformationRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)requestDidSucceedWithConnectionIdentifier:(id)arg1 userInfo:(id)arg2;
-(void)fileUploadDidProgress:(double)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)fileUploadDidSucceedWithResultingItem:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)linkBookmarkDidSucceedWithResultingItem:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)accountUpdateDidSucceed:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)itemUpdateDidSucceed:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)itemDeletionDidSucceed:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)itemRestorationDidSucceed:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)itemInformationRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)itemListRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)accountCreationSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)storeProductInformationRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)storeReceiptRedemptionSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;

@end

