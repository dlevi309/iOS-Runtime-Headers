/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIMediaEntitiesFetchControllerDelegate <NSObject>
@optional
-(BOOL)controllerShouldFetchForContentsChange:(id)arg1;

@required
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;

@end

