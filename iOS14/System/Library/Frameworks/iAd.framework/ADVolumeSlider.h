/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <MediaPlayer/MPVolumeSlider.h>

@class UIColor;

@interface ADVolumeSlider : MPVolumeSlider {

	UIColor* _maximumTintUsedForTrackImageColor;
	UIColor* _minimumTintUsedForTrackImageColor;

}
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(id)_trackImageWithTintColor:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(void)_updateTrackTintForVolumeControlAvailability;
-(id)_newVolumeWarningView;
-(void)_availableRoutesDidChangeNotification:(id)arg1 ;
@end

