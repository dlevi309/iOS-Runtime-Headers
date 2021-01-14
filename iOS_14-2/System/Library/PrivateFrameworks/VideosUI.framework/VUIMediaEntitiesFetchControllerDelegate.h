/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIMediaEntitiesFetchControllerDelegate <NSObject>
@optional
-(BOOL)controllerShouldFetchForContentsChange:(id)arg1;

@required
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;

@end

