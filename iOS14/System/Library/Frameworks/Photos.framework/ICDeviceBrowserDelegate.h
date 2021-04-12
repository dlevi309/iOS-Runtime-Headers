/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol ICDeviceBrowserDelegate <NSObject>
@optional
-(void)deviceBrowser:(id)arg1 deviceDidChangeName:(id)arg2;
-(void)deviceBrowser:(id)arg1 deviceDidChangeSharingState:(id)arg2;
-(void)deviceBrowser:(id)arg1 requestsSelectDevice:(id)arg2;
-(void)deviceBrowserDidEnumerateLocalDevices:(id)arg1;
-(void)deviceBrowserWillSuspendOperations:(id)arg1;
-(void)deviceBrowserDidSuspendOperations:(id)arg1;
-(void)deviceBrowserDidCancelSuspendOperations:(id)arg1;
-(void)deviceBrowserDidResumeOperations:(id)arg1;

@required
-(void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(BOOL)arg3;
-(void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(BOOL)arg3;

@end

