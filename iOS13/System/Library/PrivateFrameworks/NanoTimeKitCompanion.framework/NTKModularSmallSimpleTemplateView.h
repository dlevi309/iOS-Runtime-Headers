/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_update;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_layoutContentView;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_configureWithTextTemplate:(id)arg1 ;
-(void)_configureWithImageTemplate:(id)arg1 ;
-(double)_maxTextWidthForDynamicFontSize:(long long)arg1 ;
@end

