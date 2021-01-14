/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NTKColoringLabel *)label;
-(void)_updateForTemplateChange;
-(void)_enumerateColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_setLabelText:(id)arg1 ;
@end

