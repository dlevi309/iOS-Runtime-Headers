/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKFullColorImageView.h>

@protocol CLKMonochromeFilterProvider;
@class CLKDevice, UILabel, UIColor, NSDictionary, UIImageView, CAGradientLayer, NSString;

@interface CompassRichRectangularDialView : UIView <CLKFullColorImageView> {

	CLKDevice* _device;
	UILabel* _headingLabel;
	UIColor* _monochromeHeadingColor;
	UILabel* _bearingLabel;
	NSDictionary* _directions;
	NSDictionary* _angles;
	NSDictionary* _ticks;
	NSDictionary* _bearingTicks;
	UIImageView* _needleView;
	UIImageView* _needleShadow;
	CAGradientLayer* _leftGradient;
	CAGradientLayer* _rightGradient;
	double _offset;
	unsigned long long _bearingOffset;
	id<CLKMonochromeFilterProvider> _filterProvider;

}

@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(void)_createDirections;
-(void)_createAngles;
-(void)_createTicks;
-(void)_createBearingTicks;
-(void)_updateForMonochrome:(id)arg1 ;
-(id)_filterForStyle:(long long)arg1 fraction:(id)arg2 ;
-(void)_applyFilter:(id)arg1 toViews:(id)arg2 ;
-(void)_applyFilter:(id)arg1 toLayers:(id)arg2 ;
-(id)_newLabelWithFont:(id)arg1 color:(id)arg2 text:(id)arg3 ;
@end

