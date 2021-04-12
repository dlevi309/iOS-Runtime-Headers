/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModularLargeColumnTemplateView.h>

@protocol NTKComplicationImageView;
@class NTKColoringLabel, UIView;

@interface NTKModularLargeColumnsOnlyTemplateView : NTKModularLargeColumnTemplateView {

	NTKColoringLabel* _row1Column1Label;
	NTKColoringLabel* _row1Column2Label;
	NTKColoringLabel* _row2Column1Label;
	NTKColoringLabel* _row2Column2Label;
	NTKColoringLabel* _row3Column1Label;
	NTKColoringLabel* _row3Column2Label;
	UIView*<NTKComplicationImageView> _row1ImageView;
	UIView*<NTKComplicationImageView> _row2ImageView;
	UIView*<NTKComplicationImageView> _row3ImageView;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_layoutContentView;
-(void)_update;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateColumnRowsWithBlock:(/*^block*/id)arg1 ;
@end

