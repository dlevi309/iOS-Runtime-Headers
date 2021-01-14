/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class UIView, UIColor, NTKColoringImageView, CLKComplicationTemplate, NSString;

@interface NTKWorkoutRichComplicationCircularContentView : UIView <CLKMonochromeComplicationView> {

	UIView* _backgroundView;
	UIColor* _immutableBackgroundColor;
	NTKColoringImageView* _staticImageView;
	long long _state;
	BOOL _paused;
	id<CLKMonochromeFilterProvider> _filterProvider;
	CLKComplicationTemplate* _complicationTemplate;

}

@property (assign,nonatomic) BOOL paused;                                                        //@synthesize paused=_paused - In the implementation block
@property (nonatomic,retain) CLKComplicationTemplate * complicationTemplate;                     //@synthesize complicationTemplate=_complicationTemplate - In the implementation block
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)_updateUI;
-(BOOL)paused;
-(void)dealloc;
-(void)_applyChanges;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(CLKComplicationTemplate *)complicationTemplate;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setComplicationTemplate:(CLKComplicationTemplate *)arg1 ;
-(id)initWithNoActiveWorkoutImageName:(id)arg1 animatedImagesName:(id)arg2 ;
@end

