/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

@class NSDate;


@protocol PKDatePickerInternalImplementationProtocol <NSObject>
@property (nonatomic,retain) NSDate * date; 
@required
-(NSDate *)date;
-(void)setDate:(id)arg1;
-(void)prepareToDie;
-(id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4 locale:(id)arg5 calendar:(id)arg6;
-(void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;

@end

