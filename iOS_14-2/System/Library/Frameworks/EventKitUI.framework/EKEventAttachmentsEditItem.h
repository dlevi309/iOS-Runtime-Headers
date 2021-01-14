/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>
#import <UIKit/UIDocumentPickerDelegate.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <libobjc.A.dylib/EKEventAttachmentCellControllerDelegate.h>
#import <libobjc.A.dylib/EKEventAttachmentEditViewControllerDelegate.h>

@class NSArray, EKUITableViewCell, EKEvent, NSString;

@interface EKEventAttachmentsEditItem : EKEventEditItem <UIDocumentPickerDelegate, UIDropInteractionDelegate, EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate> {

	NSArray* _cellControllers;
	EKUITableViewCell* _addAttachmentCell;
	BOOL _documentPickerPresented;
	BOOL _attachmentsModified;
	EKEvent* _eventToModify;

}

@property (retain) EKEvent * eventToModify;                         //@synthesize eventToModify=_eventToModify - In the implementation block
@property (assign) BOOL attachmentsModified;                        //@synthesize attachmentsModified=_attachmentsModified - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(BOOL)attachmentsModified;
-(EKEvent *)eventToModify;
-(void)setEventToModify:(EKEvent *)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(id)trailingSwipeActionsConfigurationForRowAtIndex:(long long)arg1 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)forceTableReloadOnSave;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(id)owningEventForAttachmentEditViewController:(id)arg1 ;
-(void)attachmentEditViewController:(id)arg1 attachmentDidChange:(long long)arg2 ;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(id)owningEventForAttachmentCellController:(id)arg1 ;
-(id)parentViewControllerForAttachmentCellController:(id)arg1 ;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(id)footerTitle;
-(BOOL)_shouldCondenseIntoSingleItem;
-(id)attachmentEvent;
-(BOOL)_shouldShowAddAttachmentCell;
-(id)_addAttachmentCell;
-(void)_showAddAttachmentViewControllerAnimated:(BOOL)arg1 ;
-(void)setAttachmentsModified:(BOOL)arg1 ;
-(void)_loadAndAddDataAttachmentFromItem:(id)arg1 ;
-(void)_cleanUpCellControllers;
-(void)_addAttachment:(id)arg1 ;
-(void)prepareForReload;
-(void)dealloc;
@end

