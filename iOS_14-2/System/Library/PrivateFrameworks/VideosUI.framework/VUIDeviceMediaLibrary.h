/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

