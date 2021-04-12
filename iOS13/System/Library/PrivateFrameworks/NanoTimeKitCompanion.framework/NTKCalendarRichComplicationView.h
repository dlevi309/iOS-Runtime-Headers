/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NTKCalendarRichComplicationContentView, NSArray;

@interface NTKCalendarRichComplicationView : NTKRichComplicationRectangularBaseView {

	NTKCalendarRichComplicationContentView* _contentView;
	NSArray* _accentViews;
	NSArray* _desaturateViews;

}

@property (nonatomic,retain) NTKCalendarRichComplicationContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NSArray * accentViews;                                             //@synthesize accentViews=_accentViews - In the implementation block
@property (nonatomic,retain) NSArray * desaturateViews;                                         //@synthesize desaturateViews=_desaturateViews - In the implementation block
-(id)init;
-(NTKCalendarRichComplicationContentView *)contentView;
-(void)setContentView:(NTKCalendarRichComplicationContentView *)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_updateViews:(id)arg1 withFilter:(id)arg2 ;
-(NSArray *)accentViews;
-(void)setAccentViews:(NSArray *)arg1 ;
-(NSArray *)desaturateViews;
-(void)setDesaturateViews:(NSArray *)arg1 ;
@end

