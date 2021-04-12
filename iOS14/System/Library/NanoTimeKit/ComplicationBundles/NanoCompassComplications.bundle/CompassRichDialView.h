/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/

#import <NanoCompassComplications/NanoCompassBaseRichView.h>

@class UIView;

@interface CompassRichDialView : NanoCompassBaseRichView {

	UIView* _ticksView;
	UIView* _needleView;

}

@property (nonatomic,readonly) UIView * ticksView; 
@property (nonatomic,readonly) UIView * needleView; 
-(void)layoutSubviews;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(id)_newTicksView;
-(id)_newNeedleView;
-(UIView *)ticksView;
-(UIView *)needleView;
@end

