/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/

#import <NanoCompassComplications/CompassRichDialView.h>

@class CLKDevice, UILabel, UIImageView;

@interface CompassBaseRichCircularDialView : CompassRichDialView {

	CLKDevice* _device;
	UILabel* _headingLabel;
	UILabel* _directionLabel;
	UIImageView* _ticks;
	UIImageView* _north;
	UIImageView* _south;

}
-(void)layoutSubviews;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(id)monochromeAccentViews;
-(id)monochromeOtherViews;
-(long long)_supportedFamily;
-(id)_ticksImageName;
-(id)_needleNorthImageName;
-(id)_needleSouthImageName;
-(id)_needleShadowImageName;
-(id)_newTicksView;
-(id)_newNeedleView;
@end

