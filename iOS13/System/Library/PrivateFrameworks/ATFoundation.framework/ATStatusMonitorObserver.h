/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/


@protocol ATStatusMonitorObserver <NSObject>
@optional
-(void)monitor:(id)arg1 didUpdateWithStatus:(id)arg2;

@required
-(void)connection:(id)arg1 updatedProgress:(id)arg2;
-(void)connection:(id)arg1 updatedAssets:(id)arg2;

@end

