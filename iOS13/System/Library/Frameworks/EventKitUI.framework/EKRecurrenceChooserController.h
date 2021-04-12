/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKRecurrenceChooserControllerDelegate;
@class UIColor, NSDate;

@interface EKRecurrenceChooserController : NSObject {

	id<EKRecurrenceChooserControllerDelegate> _delegate;
	UIColor* _backgroundColor;
	NSDate* _date;

}

@property (copy) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (__weak) id<EKRecurrenceChooserControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) long long frequency; 
+(int)dayFromNumber:(long long)arg1 ;
-(id<EKRecurrenceChooserControllerDelegate>)delegate;
-(void)setDelegate:(id<EKRecurrenceChooserControllerDelegate>)arg1 ;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(long long)numberOfRows;
-(long long)frequency;
-(id)startDateComponents:(unsigned long long)arg1 ;
-(void)notifyDelegate;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(BOOL)drawBackgroundForRow:(long long)arg1 ;
-(void)rowTapped:(long long)arg1 ;
@end

