/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)isSaveable;
-(id)searchStringForEventAutocomplete;
-(BOOL)isInline;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)tableViewDidScroll;
-(BOOL)textViewShouldReturn:(id)arg1 ;
@end

