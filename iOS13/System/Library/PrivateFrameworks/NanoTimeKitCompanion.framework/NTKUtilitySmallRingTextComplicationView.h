/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUtilitySmallRingComplicationView.h>

@class NTKColoringLabel;

@interface NTKUtilitySmallRingTextComplicationView : NTKUtilitySmallRingComplicationView {

	NTKColoringLabel* _label;

}

@property (nonatomic,readonly) NTKColoringLabel * label;              //@synthesize label=_label - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(NTKColoringLabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_updateForTemplateChange;
-(void)_enumerateColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_setLabelText:(id)arg1 ;
@end

