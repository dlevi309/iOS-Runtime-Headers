/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaLibrary.h>

@interface VUIDeviceMediaLibrary : VUIMediaLibrary

@property (getter=isUpdating,nonatomic,readonly) BOOL updating; 
@property (getter=isInitialUpdateInProgress,nonatomic,readonly) BOOL initialUpdateInProgress; 
-(BOOL)isUpdating;
-(BOOL)isInitialUpdateInProgress;
-(void)updateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateFromCloudWithReason:(long long)arg1 ;
@end

