/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel;

@interface NTKRichComplicationBaseCircularStackTextView : NTKRichComplicationCircularBaseView {

	NTKColoringLabel* _line1Label;
	NTKColoringLabel* _line2Label;
	unsigned long long _highlightMode;

}

@property (nonatomic,retain) NTKColoringLabel * line1Label;                 //@synthesize line1Label=_line1Label - In the implementation block
@property (nonatomic,retain) NTKColoringLabel * line2Label;                 //@synthesize line2Label=_line2Label - In the implementation block
@property (assign,nonatomic) unsigned long long highlightMode;              //@synthesize highlightMode=_highlightMode - In the implementation block
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(unsigned long long)highlightMode;
-(void)setHighlightMode:(unsigned long long)arg1 ;
-(void)_editingDidEnd;
-(NTKColoringLabel *)line1Label;
-(NTKColoringLabel *)line2Label;
-(id)_createAndAddLabel;
-(id)_desiredFontForLabel:(id)arg1 ;
-(long long)_line1FilterStyle;
-(long long)_line2FilterStyle;
-(void)setLine1Label:(NTKColoringLabel *)arg1 ;
-(void)setLine2Label:(NTKColoringLabel *)arg1 ;
@end

