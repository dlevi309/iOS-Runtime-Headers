/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

@class UILayoutGuide;


@protocol SVCustomControlsLayoutGuideProviding <NSObject>
@property (nonatomic,readonly) UILayoutGuide * transportControlsAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * displayModeControlsAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * volumeControlsAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * unobscuredCenterAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * animatedUnobscuredCenterAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * unobscuredTopAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * accessoryBarLayoutGuide; 
@required
-(UILayoutGuide *)transportControlsAreaLayoutGuide;
-(UILayoutGuide *)displayModeControlsAreaLayoutGuide;
-(UILayoutGuide *)volumeControlsAreaLayoutGuide;
-(UILayoutGuide *)unobscuredCenterAreaLayoutGuide;
-(UILayoutGuide *)animatedUnobscuredCenterAreaLayoutGuide;
-(UILayoutGuide *)unobscuredTopAreaLayoutGuide;
-(UILayoutGuide *)accessoryBarLayoutGuide;

@end

