/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKFullColorImageView.h>

@protocol CLKMonochromeFilterProvider;
@class CLKDevice, NTKColoringLabel, NSDate, NSString;

@interface NTKDateRichComplicationFullColorImageView : UIView <CLKFullColorImageView> {

	CLKDevice* _device;
	long long _family;
	NTKColoringLabel* _weekdayLabel;
	NTKColoringLabel* _dayLabel;
	id<CLKMonochromeFilterProvider> _filterProvider;
	NSDate* _overrideDate;

}

@property (nonatomic,retain) NSDate * overrideDate;                                              //@synthesize overrideDate=_overrideDate - In the implementation block
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)_updateDate;
-(void)setOverrideDate:(NSDate *)arg1 ;
-(void)_commonInit;
-(NSDate *)overrideDate;
-(void)dealloc;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(id)initFullColorImageViewWithDevice:(id)arg1 family:(long long)arg2 ;
-(id)_newLabelSubviewWithFont:(id)arg1 ;
-(void)_timeChanged:(id)arg1 ;
@end

