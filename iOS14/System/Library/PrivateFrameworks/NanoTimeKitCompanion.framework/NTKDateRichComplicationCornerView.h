/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCornerView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@class NTKCurvedColoringLabel, NTKCurvedRoundedRectShapeLayer, NSDate, NSString;

@interface NTKDateRichComplicationCornerView : NTKRichComplicationCornerView <CLKMonochromeComplicationView> {

	NTKCurvedColoringLabel* _weekdayLabel;
	NTKCurvedColoringLabel* _previousDateLabel;
	NTKCurvedColoringLabel* _dateLabel;
	NTKCurvedColoringLabel* _nextDateLabel;
	NTKCurvedRoundedRectShapeLayer* _previousDatePlatter;
	NTKCurvedRoundedRectShapeLayer* _datePlatter;
	NTKCurvedRoundedRectShapeLayer* _nextDatePlatter;
	NSDate* _overrideDate;

}

@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)layoutSubviews;
-(void)_updateDate;
-(void)dealloc;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
-(id)_createAndAddLabelPlatterWithAngularWidth:(double)arg1 color:(id)arg2 ;
-(id)_createAndAddColoringLabelWithFontSize:(double)arg1 dayOffset:(long long)arg2 ;
-(void)_timeChanged:(id)arg1 ;
@end

