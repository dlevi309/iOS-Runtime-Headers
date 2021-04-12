/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/

#import <NanoCompassComplications/NanoCompassBaseRichView.h>

@class UIView;

@interface AltitudeRichDialView : NanoCompassBaseRichView {

	UIView* _topView;
	UIView* _bottomView;

}

@property (nonatomic,readonly) UIView * topView; 
@property (nonatomic,readonly) UIView * bottomView; 
-(UIView *)topView;
-(void)layoutSubviews;
-(UIView *)bottomView;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(id)_newTopView;
-(id)_newBottomView;
-(id)monochromeAccentViews;
-(id)monochromeOtherViews;
@end

