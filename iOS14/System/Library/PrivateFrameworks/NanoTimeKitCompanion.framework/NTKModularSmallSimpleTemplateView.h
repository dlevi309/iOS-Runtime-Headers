/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@protocol NTKComplicationImageView;
@class UIView, NTKColoringLabel;

@interface NTKModularSmallSimpleTemplateView : NTKModularTemplateView {

	UIView*<NTKComplicationImageView> _imageView;
	NTKColoringLabel* _label;
	long long _maxDynamicFontSize;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(id)supportedTemplateClasses;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_layoutContentView;
-(void)_update;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_configureWithTextTemplate:(id)arg1 ;
-(void)_configureWithImageTemplate:(id)arg1 ;
-(double)_maxTextWidthForDynamicFontSize:(long long)arg1 ;
@end

