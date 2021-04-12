/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/EKCalendarItemInlineEditItem.h>

@class UITableViewCell, NSString;

@interface EKEventURLInlineEditItem : EKEventEditItem <UITextFieldDelegate, EKCalendarItemInlineEditItem> {

	UITableViewCell* _cell;
	BOOL _tokenized;
	BOOL _hasChanges;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)isInline;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)_setTokenized:(BOOL)arg1 ;
-(void)reset;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(id)searchStringForEventAutocomplete;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)isSaveable;
@end

