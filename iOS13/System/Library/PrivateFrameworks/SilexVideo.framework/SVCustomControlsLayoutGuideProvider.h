/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVCustomControlsLayoutGuideProviding.h>

@protocol SVVideoViewControllerProviding;
@class UILayoutGuide, NSString;

@interface SVCustomControlsLayoutGuideProvider : NSObject <SVCustomControlsLayoutGuideProviding> {

	UILayoutGuide* _accessoryBarLayoutGuide;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;

}

@property (nonatomic,retain) UILayoutGuide * accessoryBarLayoutGuide;                                     //@synthesize accessoryBarLayoutGuide=_accessoryBarLayoutGuide - In the implementation block
@property (nonatomic,retain) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UILayoutGuide * transportControlsAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * displayModeControlsAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * volumeControlsAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * unobscuredCenterAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * animatedUnobscuredCenterAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * unobscuredTopAreaLayoutGuide; 
-(UILayoutGuide *)transportControlsAreaLayoutGuide;
-(UILayoutGuide *)displayModeControlsAreaLayoutGuide;
-(UILayoutGuide *)volumeControlsAreaLayoutGuide;
-(UILayoutGuide *)unobscuredCenterAreaLayoutGuide;
-(UILayoutGuide *)animatedUnobscuredCenterAreaLayoutGuide;
-(UILayoutGuide *)unobscuredTopAreaLayoutGuide;
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(UILayoutGuide *)accessoryBarLayoutGuide;
-(id)initWithViewControllerProvider:(id)arg1 accessoryBarView:(id)arg2 ;
-(void)setAccessoryBarLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setVideoViewControllerProvider:(id<SVVideoViewControllerProviding>)arg1 ;
@end

