/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>

@class NSArray, NSCalendar, NSDate;

@interface NTKColorCodeTimeView : UIView {

	NSArray* _colorViews;
	NSArray* _digitToColor;
	NSCalendar* _cal;
	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
-(id)init;
-(void)setDate:(NSDate *)arg1 ;
-(void)layoutSubviews;
-(NSDate *)date;
@end

