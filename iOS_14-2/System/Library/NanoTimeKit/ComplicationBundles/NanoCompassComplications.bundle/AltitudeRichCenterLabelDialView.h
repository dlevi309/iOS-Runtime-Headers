/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/

#import <NanoCompassComplications/NanoCompassComplications-Structs.h>
#import <NanoCompassComplications/AltitudeRichDialView.h>

@class CLKDevice, UILabel;

@interface AltitudeRichCenterLabelDialView : AltitudeRichDialView {

	CLKDevice* _device;
	UILabel* _altitudeLabel;
	double _altitudeLabelHeight;

}
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(id)_newTopView;
-(id)_newBottomView;
-(id)initFullColorImageViewWithDevice:(id)arg1 withLayoutConstants:(LayoutConstants)arg2 ;
-(void)layoutLabelInCenterWithTopAndBottomAssets;
@end

