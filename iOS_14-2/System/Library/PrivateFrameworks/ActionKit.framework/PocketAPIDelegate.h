/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol PocketAPIDelegate <NSObject>
@optional
-(void)pocketAPI:(id)arg1 receivedRequestToken:(id)arg2;
-(void)pocketAPILoggedIn:(id)arg1;
-(void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;
-(void)pocketAPI:(id)arg1 savedURL:(id)arg2;
-(void)pocketAPI:(id)arg1 failedToSaveURL:(id)arg2 error:(id)arg3;
-(void)pocketAPI:(id)arg1 receivedResponse:(id)arg2 forAPIMethod:(id)arg3 error:(id)arg4;
-(void)pocketAPIDidStartLogin:(id)arg1;
-(void)pocketAPIDidFinishLogin:(id)arg1;
-(void)pocketAPI:(id)arg1 requestedOpenURL:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

