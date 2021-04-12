/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_update;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_layoutContentView;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(id)_newLabelSubview;
-(id)_headerFontOfSize:(double)arg1 ;
-(id)_bodyFontOfSize:(double)arg1 ;
@end

