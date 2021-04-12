/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <libobjc.A.dylib/EKEventViewDelegatePrivate.h>

@protocol EKICSPreviewControllerDelegate;
@class EKICSPreviewModel, EKEventStore, EKEventViewController, UIViewController, EKEvent, NSString;

@interface EKICSPreviewController : NSObject <EKEventViewDelegatePrivate> {

	EKICSPreviewModel* _model;
	EKEventStore* _eventStore;
	EKEventViewController* _currentImport;
	UIViewController* _contentViewController;
	BOOL _importing;
	BOOL _hasCustomCancelButton;
	long long _cancelButtonType;
	EKEvent* _eventFromUID;
	BOOL _allowsImport;
	BOOL _allowsEditing;
	BOOL _allowsSubitems;
	BOOL _allowsInvalidProperties;
	BOOL _allowsToDos;
	int _eventUID;
	id<EKICSPreviewControllerDelegate> _previewDelegate;
	unsigned long long _actionsState;

}

@property (assign,nonatomic,__weak) id<EKICSPreviewControllerDelegate> previewDelegate;              //@synthesize previewDelegate=_previewDelegate - In the implementation block
@property (assign,nonatomic) BOOL allowsImport;                                                      //@synthesize allowsImport=_allowsImport - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                     //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsSubitems;                                                    //@synthesize allowsSubitems=_allowsSubitems - In the implementation block
@property (assign,nonatomic) unsigned long long actionsState;                                        //@synthesize actionsState=_actionsState - In the implementation block
@property (assign,nonatomic) BOOL allowsInvalidProperties;                                           //@synthesize allowsInvalidProperties=_allowsInvalidProperties - In the implementation block
@property (assign,nonatomic) BOOL allowsToDos;                                                       //@synthesize allowsToDos=_allowsToDos - In the implementation block
@property (nonatomic,readonly) BOOL isImporting; 
@property (nonatomic,readonly) int eventUID;                                                         //@synthesize eventUID=_eventUID - In the implementation block
@property (nonatomic,readonly) unsigned long long totalEventCount; 
@property (nonatomic,readonly) unsigned long long unimportedEventCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)allowsSubitems;
-(BOOL)_shouldShowCalendarChooser;
-(void)presentCalendarChooserForController:(id)arg1 ;
-(void)importEventFromController:(id)arg1 intoCalendar:(id)arg2 ;
-(void)handleDidImportEvent:(id)arg1 fromController:(id)arg2 intoCalendar:(id)arg3 ;
-(void)handleImportEventError;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)eventViewControllerDidRequestAddToCalendar:(id)arg1 ;
-(int)eventUID;
-(BOOL)allowsEditing;
-(BOOL)isImporting;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)arg1 ;
-(BOOL)eventViewControllerShouldDismissSelf:(id)arg1 ;
-(unsigned long long)totalEventCount;
-(unsigned long long)unimportedEventCount;
-(void)icsPreviewListControllerDidRequestImportAll:(id)arg1 ;
-(void)icsPreviewListController:(id)arg1 didSelectEvent:(id)arg2 ;
-(BOOL)allowsImport;
-(void)setAllowsSubitems:(BOOL)arg1 ;
-(void)setAllowsImport:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 eventStore:(id)arg2 ;
-(id)initWithData:(id)arg1 eventStore:(id)arg2 ;
-(id)initWithEventUID:(int)arg1 eventStore:(id)arg2 ;
-(id)viewController;
-(id)singleExistingEventUniqueID;
-(id)popoverContentController;
-(void)setCancelButtonWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeCancelButton;
-(void)setActionsState:(unsigned long long)arg1 ;
-(BOOL)allowsInvalidProperties;
-(void)setAllowsInvalidProperties:(BOOL)arg1 ;
-(BOOL)allowsToDos;
-(void)setAllowsToDos:(BOOL)arg1 ;
-(id<EKICSPreviewControllerDelegate>)previewDelegate;
-(void)importAllIntoCalendar:(id)arg1 ;
-(void)calendarChooserDidFinish:(id)arg1 ;
-(void)calendarChooserDidCancel:(id)arg1 ;
-(unsigned long long)actionsState;
-(void)setPreviewDelegate:(id<EKICSPreviewControllerDelegate>)arg1 ;
-(id)initWithData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_databaseChanged:(id)arg1 ;
-(BOOL)_anyCalendarsSupportingImport;
-(id)detailViewForEvent:(id)arg1 eventInRealStore:(BOOL)arg2 isUpdate:(BOOL)arg3 ;
-(void)_createCancelButtonWithType:(long long)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)importAllRequested:(id)arg1 ;
-(id)_defaultCalendarForImport;
-(BOOL)_calendarSupportsImport:(id)arg1 ;
-(void)_enumerateSupportedCalendarsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_countOfCalendarsSupportingImport;
-(void)_updateCancelButton;
@end

