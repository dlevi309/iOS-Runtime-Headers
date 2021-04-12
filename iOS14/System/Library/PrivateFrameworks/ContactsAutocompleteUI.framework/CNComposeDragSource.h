/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>

@protocol CNComposeDragSourceDelegate;
@class UIView, UIDragInteraction, NSString;

@interface CNComposeDragSource : NSObject <UIDragInteractionDelegate_Private> {

	struct {
		BOOL respondsToTeamDataForItem;
		BOOL respondsToTargetedPreviewForItem;
		BOOL respondsToPreviewForItem;
		BOOL respondsToSuggestedNameForItem;
		BOOL respondsToLocalObjectForItem;
		BOOL respondsToDragWillEnd;
		BOOL respondsToAllowsMoveOperation;
		BOOL respondsToIsRestrictedToMail;
		BOOL respondsToDataOwner;
	}  _delegateFlags;
	BOOL _allowsDragOverridingMasterSwitch;
	UIView* _sourceView;
	id<CNComposeDragSourceDelegate> _delegate;
	UIDragInteraction* _dragInteraction;

}

@property (assign,nonatomic,__weak) id<CNComposeDragSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIDragInteraction * dragInteraction;                          //@synthesize dragInteraction=_dragInteraction - In the implementation block
@property (nonatomic,__weak,readonly) UIView * sourceView;                                 //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) BOOL allowsDragOverridingMasterSwitch;                        //@synthesize allowsDragOverridingMasterSwitch=_allowsDragOverridingMasterSwitch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDragInteraction:(UIDragInteraction *)arg1 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(id)initWithView:(id)arg1 delegate:(id)arg2 ;
-(void)setAllowsDragOverridingMasterSwitch:(BOOL)arg1 ;
-(BOOL)allowsDragOverridingMasterSwitch;
-(UIDragInteraction *)dragInteraction;
-(id<CNComposeDragSourceDelegate>)delegate;
-(BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(UIView *)sourceView;
-(void)setDelegate:(id<CNComposeDragSourceDelegate>)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(BOOL)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
@end

