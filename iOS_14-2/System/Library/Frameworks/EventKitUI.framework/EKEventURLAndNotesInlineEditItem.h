/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)init;
-(void)tableViewDidScroll;
-(void)setDelegate:(id)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)isInline;
-(void)reset;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(void)setSelectedResponder:(id)arg1 ;
-(id)searchStringForEventAutocomplete;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)_contentSizeCategoryChanged;
-(BOOL)isSaveable;
-(void)dealloc;
@end

