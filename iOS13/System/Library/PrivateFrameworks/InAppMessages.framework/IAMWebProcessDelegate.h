/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/


@protocol IAMWebProcessDelegate <NSObject>
@required
-(void)webProcessPlugInDidCreateBrowserContextController;
-(void)webProcessPlugInWillDestroyBrowserContextController;
-(void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
-(void)webProcessJSODidReportEvent:(id)arg1;
-(void)webProcessJSODidCallPerformAction:(id)arg1 options:(id)arg2;
-(void)webProcessJSODidCallOpen:(id)arg1 options:(id)arg2;
-(void)webProcessJSODidCallClose;

@end

