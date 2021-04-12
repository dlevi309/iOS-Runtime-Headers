/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

@class UIWindowScene, NSString;


@protocol MPVolumeDisplaying <NSObject>
@property (nonatomic,readonly) UIWindowScene * windowSceneForVolumeDisplay; 
@property (getter=isOnScreenForVolumeDisplay,nonatomic,readonly) BOOL onScreenForVolumeDisplay; 
@property (nonatomic,readonly) NSString * volumeAudioCategory; 
@property (getter=isOnScreen,nonatomic,readonly) BOOL onScreen; 
@optional
-(BOOL)isOnScreen;
-(UIWindowScene *)windowSceneForVolumeDisplay;
-(BOOL)isOnScreenForVolumeDisplay;
-(NSString *)volumeAudioCategory;

@end

