/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NTKColoringLabel, CLKComplicationTemplateModularSmallColumnsText;

@interface NTKModularSmallColumnTemplateView : NTKModularTemplateView {

	NTKColoringLabel* _row1Column1Label;
	NTKColoringLabel* _row1Column2Label;
	NTKColoringLabel* _row2Column1Label;
	NTKColoringLabel* _row2Column2Label;
	BOOL _calculatedFontSize;

}

@property (nonatomic,readonly) CLKComplicationTemplateModularSmallColumnsText * complicationTemplate; 
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_layoutContentView;
-(void)_update;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(id)_newLabelSubview;
-(id)_headerFontOfSize:(double)arg1 ;
-(id)_bodyFontOfSize:(double)arg1 ;
@end

