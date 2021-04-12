/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class NSArray, HFWallpaperSlice, HUNavigationBarLayoutOptions;


@protocol HUDashboardNavigationHost <NSObject>
@property (nonatomic,retain) NSArray * leftDashboardNavigationButtons; 
@property (nonatomic,retain) NSArray * rightDashboardNavigationButtons; 
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice; 
@property (nonatomic,copy) HUNavigationBarLayoutOptions * layoutOptions; 
@required
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(id)arg1;
-(void)setLeftDashboardNavigationButtons:(id)arg1;
-(void)setRightDashboardNavigationButtons:(id)arg1;
-(HUNavigationBarLayoutOptions *)layoutOptions;
-(NSArray *)leftDashboardNavigationButtons;
-(void)setLayoutOptions:(id)arg1;
-(NSArray *)rightDashboardNavigationButtons;

@end

