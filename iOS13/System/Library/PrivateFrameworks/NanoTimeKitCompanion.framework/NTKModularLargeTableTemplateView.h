/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModularLargeColumnTemplateView.h>

@protocol NTKComplicationImageView;
@class UIView, NTKColoringLabel, CLKComplicationTemplateModularLargeTable;

@interface NTKModularLargeTableTemplateView : NTKModularLargeColumnTemplateView {

	UIView*<NTKComplicationImageView> _headerImageView;
	NTKColoringLabel* _headerLabel;
	NTKColoringLabel* _row1Column1Label;
	NTKColoringLabel* _row1Column2Label;
	NTKColoringLabel* _row2Column1Label;
	NTKColoringLabel* _row2Column2Label;

}

@property (nonatomic,retain) CLKComplicationTemplateModularLargeTable * complicationTemplate; 
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(void)_update;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_layoutContentView;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateColumnRowsWithBlock:(/*^block*/id)arg1 ;
@end

