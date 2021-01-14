/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class UIImageView, CALayer, UIView, REContent, NSHashTable, CLKDevice, UIImage, NSString, UIColor;

@interface NTKUpNextBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate, CLKMonochromeComplicationView> {

	CGSize _shadowSize;
	UIImageView* _shadowView;
	CALayer* _imageLayer;
	UIView* _overlayView;
	double _darkeningAmount;
	double _contentBrightness;
	REContent* _content;
	NSHashTable* _layerProviders;
	BOOL _paused;
	id<CLKMonochromeFilterProvider> _filterProvider;
	CLKDevice* _device;
	UIImage* _contentImage;
	UIImage* _overrideContentImage;
	NSString* _representedElementIdentifier;
	UIColor* _imageColor;

}

@property (nonatomic,readonly) CLKDevice * device;                                               //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) UIImage * contentImage;                                           //@synthesize contentImage=_contentImage - In the implementation block
@property (nonatomic,retain) UIImage * overrideContentImage;                                     //@synthesize overrideContentImage=_overrideContentImage - In the implementation block
@property (nonatomic,readonly) REContent * content;                                              //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSString * representedElementIdentifier;                            //@synthesize representedElementIdentifier=_representedElementIdentifier - In the implementation block
@property (nonatomic,readonly) CALayer * imageLayer;                                             //@synthesize imageLayer=_imageLayer - In the implementation block
@property (nonatomic,retain) UIColor * imageColor;                                               //@synthesize imageColor=_imageColor - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                        //@synthesize paused=_paused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
+(void)clearLabel:(id)arg1 ;
+(CGSize)suggestedBodyImageSizeForDevice:(id)arg1 ;
+(CGSize)suggestedHeaderImageSizeForDevice:(id)arg1 ;
+(double)cornerRadiusForDevice:(id)arg1 ;
+(Class)suggestedCellClassForContent:(id)arg1 ;
-(UIImage *)contentImage;
-(REContent *)content;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)imageColor;
-(void)setPaused:(BOOL)arg1 ;
-(void)prepareForReuse;
-(CLKDevice *)device;
-(CALayer *)imageLayer;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setImageColor:(UIColor *)arg1 ;
-(BOOL)isPaused;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)setContentImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)configureWithContent:(id)arg1 ;
-(void)setRepresentedElementIdentifier:(NSString *)arg1 ;
-(void)setContentBrightness:(double)arg1 animated:(BOOL)arg2 ;
-(void)enumerateContentsLayersWithBlock:(/*^block*/id)arg1 ;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)addContentsLayerProvider:(id)arg1 ;
-(void)setOverrideContentImage:(UIImage *)arg1 ;
-(id)transitionContextInView:(id)arg1 ;
-(void)_updateColorOverlay;
-(void)removeContentsLayerProvider:(id)arg1 ;
-(UIImage *)overrideContentImage;
-(NSString *)representedElementIdentifier;
@end

