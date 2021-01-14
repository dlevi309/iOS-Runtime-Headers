/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

@class NTKDateComplicationLabel;

@interface NTKUtilityDateComplicationView : NTKUtilityComplicationView {

	NTKDateComplicationLabel* _label;
	unsigned long long _dateStyle;

}

@property (nonatomic,readonly) unsigned long long dateStyle;              //@synthesize dateStyle=_dateStyle - In the implementation block
-(unsigned long long)dateStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setForegroundColor:(id)arg1 ;
-(id)foregroundColor;
-(void)setFont:(id)arg1 ;
-(void)layoutSubviews;
-(id)accentColor;
-(void)_invalidateLabelSize;
-(void)setAccentColor:(id)arg1 ;
-(void)setDateComplicationText:(id)arg1 withDayRange:(NSRange)arg2 forDateStyle:(unsigned long long)arg3 ;
-(double)_widthThatFits;
@end

