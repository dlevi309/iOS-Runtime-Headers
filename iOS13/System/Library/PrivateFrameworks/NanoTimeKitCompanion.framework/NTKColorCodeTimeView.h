/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)layoutSubviews;
@end

