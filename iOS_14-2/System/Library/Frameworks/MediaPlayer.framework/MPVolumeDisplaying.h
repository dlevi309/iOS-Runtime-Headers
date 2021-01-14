/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class UIWindowScene, NSString;


@protocol MPVolumeDisplaying <NSObject>
@property (nonatomic,readonly) UIWindowScene * windowSceneForVolumeDisplay; 
@property (getter=isOnScreenForVolumeDisplay,nonatomic,readonly) BOOL onScreenForVolumeDisplay; 
@property (nonatomic,readonly) NSString * volumeAudioCategory; 
@property (getter=isOnScreen,nonatomic,readonly) BOOL onScreen; 
@optional
-(BOOL)isOnScreen;
-(NSString *)volumeAudioCategory;
-(UIWindowScene *)windowSceneForVolumeDisplay;
-(BOOL)isOnScreenForVolumeDisplay;

@end

