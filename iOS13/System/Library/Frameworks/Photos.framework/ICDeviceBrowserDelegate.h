/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol ICDeviceBrowserDelegate <NSObject>
@optional
-(void)deviceBrowser:(id)arg1 deviceDidChangeName:(id)arg2;
-(void)deviceBrowser:(id)arg1 deviceDidChangeSharingState:(id)arg2;
-(void)deviceBrowser:(id)arg1 requestsSelectDevice:(id)arg2;
-(void)deviceBrowserDidEnumerateLocalDevices:(id)arg1;

@required
-(void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(BOOL)arg3;
-(void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(BOOL)arg3;

@end

