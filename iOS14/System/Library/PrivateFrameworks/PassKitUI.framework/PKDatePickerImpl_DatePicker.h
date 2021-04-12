/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIDatePicker.h>
#import <libobjc.A.dylib/PKDatePickerInternalImplementationProtocol.h>

@class NSDate, NSString;

@interface PKDatePickerImpl_DatePicker : UIDatePicker <PKDatePickerInternalImplementationProtocol>

@property (nonatomic,retain) NSDate * date; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareToDie;
-(id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4 locale:(id)arg5 calendar:(id)arg6 ;
-(void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
@end

