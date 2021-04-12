/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMonochromeFilterProvider.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class CLKDevice, UIView, NTKStackedImagesComplicationImageView, NSString;

@interface NTKRichComplicationImageView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView> {

	BOOL _useAccentColor;
	BOOL _hostingOverrideView;
	BOOL _paused;
	BOOL _inMonochromeMode;
	BOOL _prefersFilterOverTransition;
	id<CLKMonochromeFilterProvider> _filterProvider;
	CLKDevice* _device;
	UIView* _richComplicationImageView;
	NTKStackedImagesComplicationImageView* _monochromeImageView;
	long long _imageViewContentMode;
	long long _monochromeFilterType;

}

@property (assign,nonatomic,__weak) UIView * richComplicationImageView;                                       //@synthesize richComplicationImageView=_richComplicationImageView - In the implementation block
@property (assign,nonatomic,__weak) NTKStackedImagesComplicationImageView * monochromeImageView;              //@synthesize monochromeImageView=_monochromeImageView - In the implementation block
@property (assign,getter=isHostingOverrideView,nonatomic) BOOL hostingOverrideView;                           //@synthesize hostingOverrideView=_hostingOverrideView - In the implementation block
@property (nonatomic,readonly) long long imageViewContentMode;                                                //@synthesize imageViewContentMode=_imageViewContentMode - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                                     //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) long long monochromeFilterType;                                                  //@synthesize monochromeFilterType=_monochromeFilterType - In the implementation block
@property (assign,nonatomic) BOOL inMonochromeMode;                                                           //@synthesize inMonochromeMode=_inMonochromeMode - In the implementation block
@property (assign,nonatomic) BOOL prefersFilterOverTransition;                                                //@synthesize prefersFilterOverTransition=_prefersFilterOverTransition - In the implementation block
@property (nonatomic,readonly) CLKDevice * device;                                                            //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) BOOL useAccentColor;                                                           //@synthesize useAccentColor=_useAccentColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;                           //@synthesize filterProvider=_filterProvider - In the implementation block
-(BOOL)isPaused;
-(CLKDevice *)device;
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(long long)imageViewContentMode;
-(void)setImageViewContentMode:(long long)arg1 ;
-(void)setPrefersFilterOverTransition:(BOOL)arg1 ;
-(BOOL)prefersFilterOverTransition;
-(long long)monochromeFilterType;
-(void)setMonochromeFilterType:(long long)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id)initWithDevice:(id)arg1 useAccentColor:(BOOL)arg2 ;
-(void)setImageProvider:(id)arg1 reason:(long long)arg2 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3 ;
-(id)colorForView:(id)arg1 accented:(BOOL)arg2 ;
-(id)interpolatedColorForView:(id)arg1 ;
-(BOOL)viewShouldIgnoreTwoPieceImage:(id)arg1 ;
-(UIView *)richComplicationImageView;
-(void)setHostingOverrideView:(BOOL)arg1 ;
-(NTKStackedImagesComplicationImageView *)monochromeImageView;
-(BOOL)isHostingOverrideView;
-(void)setMonochromeImageView:(NTKStackedImagesComplicationImageView *)arg1 ;
-(void)setRichComplicationImageView:(UIView *)arg1 ;
-(long long)_filterStyle;
-(BOOL)useAccentColor;
-(BOOL)inMonochromeMode;
-(void)setInMonochromeMode:(BOOL)arg1 ;
@end

