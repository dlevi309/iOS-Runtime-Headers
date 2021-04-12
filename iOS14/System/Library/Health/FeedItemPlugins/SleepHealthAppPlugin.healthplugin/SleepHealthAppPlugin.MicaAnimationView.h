/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/SleepHealthAppPlugin.healthplugin/SleepHealthAppPlugin
*/

#import <SleepHealthAppPlugin/SleepHealthAppPlugin-Structs.h>
#import <UIKitCore/UIView.h>

@interface SleepHealthAppPlugin.MicaAnimationView : UIView {

	 packageLayer;
	 package;
	 stateController;
	 animation;
	 state;
	 transitionSpeed;
	 insetSize;
	 scaleForDeviceSize;
	 loopDuration;
	 loopCount;
	 maxLoopCount;

}

@property (readonly,nonatomic) CGSize intrinsicContentSize; 
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)stepAnimationForLayer:(id)arg1 ;
@end

