/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

@class NSDate;


@protocol PKDatePickerInternalImplementationProtocol <NSObject>
@property (nonatomic,retain) NSDate * date; 
@required
-(void)prepareToDie;
-(id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4 locale:(id)arg5 calendar:(id)arg6;
-(void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;
-(void)setDate:(id)arg1;
-(NSDate *)date;

@end

