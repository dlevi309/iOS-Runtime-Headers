/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarEditItem.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITableViewCell, NSString;

@interface EKCalendarTitleEditItem : EKCalendarEditItem <UITextFieldDelegate> {

	UITableViewCell* _cell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)becomeFirstResponder;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)saveStateToCalendar:(id)arg1 ;
-(void)reset;
@end

