/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer;

@interface MenstrualCyclesAppPlugin.SimpleShapeFakeMaskingView : UIView {

	 backgroundLayer;
	 croppingLayer;
	 backgroundLayerColor;

}

@property (retain,nonatomic) CALayer * croppingLayer; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(CALayer *)croppingLayer;
-(void)setCroppingLayer:(CALayer *)arg1 ;
@end

