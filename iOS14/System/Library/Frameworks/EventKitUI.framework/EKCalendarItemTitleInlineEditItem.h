/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/EKEditItemViewControllerDelegate.h>
#import <libobjc.A.dylib/EKCalendarItemInlineEditItem.h>

@class UITableViewCell, UITextField, NSString;

@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKCalendarItemInlineEditItem> {

	UITableViewCell* _titleCell;
	BOOL _drawsOwnRowSeparators;

}

@property (assign,nonatomic) BOOL drawsOwnRowSeparators;                  //@synthesize drawsOwnRowSeparators=_drawsOwnRowSeparators - In the implementation block
@property (nonatomic,readonly) UITextField * titleTextField; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)init;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)setDrawsOwnRowSeparators:(BOOL)arg1 ;
-(void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(id)_makeCell:(unsigned long long)arg1 ;
-(BOOL)isInline;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)reset;
-(void)_setDrawsOwnRowSeparatorsForCell:(id)arg1 ;
-(BOOL)drawsOwnRowSeparators;
-(UITextField *)titleTextField;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(id)searchStringForEventAutocomplete;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 ;
-(void)textFieldDidChange:(id)arg1 ;
-(BOOL)isSaveable;
-(void)dealloc;
@end

