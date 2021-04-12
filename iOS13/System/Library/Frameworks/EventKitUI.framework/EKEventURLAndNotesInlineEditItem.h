/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventEditItem.h>
#import <libobjc.A.dylib/EKCalendarItemInlineEditItem.h>

@class EKEventURLInlineEditItem, EKEventNotesInlineEditItem, NSString;

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem> {

	EKEventURLInlineEditItem* _urlEditItem;
	EKEventNotesInlineEditItem* _notesEditItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)setSelectedResponder:(id)arg1 ;
-(BOOL)isSaveable;
-(id)searchStringForEventAutocomplete;
-(BOOL)isInline;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(void)tableViewDidScroll;
-(void)_contentSizeCategoryChanged;
@end

