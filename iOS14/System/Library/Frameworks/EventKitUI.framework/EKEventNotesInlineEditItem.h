/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/EKCalendarItemInlineEditItem.h>

@class CalendarNotesCell, NSString;

@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate, EKCalendarItemInlineEditItem> {

	CalendarNotesCell* _cell;
	NSString* _lastTextChange;
	CGRect _keyboardRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)textViewShouldReturn:(id)arg1 ;
-(void)tableViewDidScroll;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(BOOL)isInline;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)reset;
-(void)_keyboardWillHide:(id)arg1 ;
-(id)searchStringForEventAutocomplete;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)isSaveable;
@end

