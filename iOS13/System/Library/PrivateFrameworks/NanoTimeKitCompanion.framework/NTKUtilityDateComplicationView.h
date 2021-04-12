/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setFont:(id)arg1 ;
-(void)layoutSubviews;
-(void)setForegroundColor:(id)arg1 ;
-(id)foregroundColor;
-(id)accentColor;
-(void)setAccentColor:(id)arg1 ;
-(void)setDateComplicationText:(id)arg1 withDayRange:(NSRange)arg2 forDateStyle:(unsigned long long)arg3 ;
-(double)_widthThatFits;
-(void)_invalidateLabelSize;
@end

