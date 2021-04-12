/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <MediaPlayer/MPVolumeSlider.h>

@class UIColor;

@interface ADVolumeSlider : MPVolumeSlider {

	UIColor* _maximumTintUsedForTrackImageColor;
	UIColor* _minimumTintUsedForTrackImageColor;

}
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(id)_newVolumeWarningView;
-(void)_updateTrackTintForVolumeControlAvailability;
-(id)_trackImageWithTintColor:(id)arg1 ;
-(void)_availableRoutesDidChangeNotification:(id)arg1 ;
@end

