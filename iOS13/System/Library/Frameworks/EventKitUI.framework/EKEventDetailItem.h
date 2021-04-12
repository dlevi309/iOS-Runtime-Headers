/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/EKEditItemViewControllerDelegate.h>

@protocol EKEditItemViewControllerProtocol, EKEventDetailItemDelegate;
@class EKEventStore, EKEvent, UIViewController, EKUIRecurrenceAlertController, NSString;

@interface EKEventDetailItem : NSObject <EKEditItemViewControllerDelegate> {

	EKEventStore* _store;
	EKEvent* _event;
	EKEvent* _lastEventUpdated;
	UIViewController*<EKEditItemViewControllerProtocol> _viewController;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	BOOL _allowsEditing;
	BOOL _shouldIndent;
	int _cellPosition;
	id<EKEventDetailItemDelegate> _delegate;
	UIViewController* _viewControllerToPresentFrom;

}

@property (assign,nonatomic,__weak) id<EKEventDetailItemDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                 //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) int cellPosition;                                                   //@synthesize cellPosition=_cellPosition - In the implementation block
@property (assign,nonatomic) BOOL shouldIndent;                                                  //@synthesize shouldIndent=_shouldIndent - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                  //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewControllerToPresentFrom;              //@synthesize viewControllerToPresentFrom=_viewControllerToPresentFrom - In the implementation block
@property (nonatomic,readonly) BOOL requiresLayoutForSubitemCount; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfSubItems; 
@property (nonatomic,readonly) BOOL detailItemVisibilityChanged; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<EKEventDetailItemDelegate>)delegate;
-(void)setDelegate:(id<EKEventDetailItemDelegate>)arg1 ;
-(void)reset;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)setCellPosition:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(int)cellPosition;
-(unsigned long long)numberOfSubitems;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)requiresLayoutForSubitemCount;
-(unsigned long long)maximumNumberOfSubItems;
-(void)notifySubitemDidSave:(unsigned long long)arg1 ;
-(void)notifyDidStartEditing;
-(void)notifyDidEndEditing;
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(id)editItemEventToDetach;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(void)refreshCopiedEvents;
-(void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2 ;
-(BOOL)isPrivateEvent;
-(BOOL)isReadOnlyDelegateCalendar;
-(void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)layoutCellsForWidth:(double)arg1 position:(int)arg2 ;
-(UIViewController *)viewControllerToPresentFrom;
-(BOOL)shouldIndent;
-(BOOL)detailItemVisibilityChanged;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2 ;
-(void)eventViewController:(id)arg1 tableViewDidScroll:(id)arg2 ;
-(void)setViewControllerToPresentFrom:(UIViewController *)arg1 ;
-(void)eventViewController:(id)arg1 didHighlightSubitem:(unsigned long long)arg2 ;
-(void)eventViewController:(id)arg1 didUnhighlightSubitem:(unsigned long long)arg2 ;
-(void)setShouldIndent:(BOOL)arg1 ;
@end

