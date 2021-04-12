/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

