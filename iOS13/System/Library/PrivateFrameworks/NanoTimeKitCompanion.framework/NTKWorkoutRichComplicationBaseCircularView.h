/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class UIView, UIColor, NTKColoringImageView, CLKComplicationTemplate, NSString;

@interface NTKWorkoutRichComplicationBaseCircularView : UIView <CLKMonochromeComplicationView> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
-(void)dealloc;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)_updateUI;
-(void)_applyChanges;
-(void)setComplicationTemplate:(CLKComplicationTemplate *)arg1 ;
-(CLKComplicationTemplate *)complicationTemplate;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id)initWithNoActiveWorkoutImageName:(id)arg1 animatedImagesName:(id)arg2 ;
@end

