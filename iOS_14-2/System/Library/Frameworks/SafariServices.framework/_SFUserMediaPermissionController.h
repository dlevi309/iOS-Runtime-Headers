/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariShared/WBSUserMediaPermissionController.h>

@interface _SFUserMediaPermissionController : WBSUserMediaPermissionController
-(void)_didRetrieveUserMediaPermission:(unsigned long long)arg1 forDevices:(unsigned long long)arg2 url:(id)arg3 mainFrameURL:(id)arg4 decisionHandler:(/*^block*/id)arg5 dialogPresenter:(id)arg6 ;
-(void)savePendingChanges;
-(void)requestUserMediaAuthorizationForDevices:(unsigned long long)arg1 url:(id)arg2 mainFrameURL:(id)arg3 decisionHandler:(/*^block*/id)arg4 dialogPresenter:(id)arg5 ;
-(void)coalescedAsynchronousWriter:(id)arg1 didFinishWritingData:(id)arg2 ;
@end

