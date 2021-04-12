/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


#import <WatchKit/WatchKit-Structs.h>
@class WKCrownSequencer, NSArray, NSString, NSMutableDictionary, NSMutableArray;

@interface WKInterfaceController : NSObject {

	WKCrownSequencer* _crownSequencer;
	NSArray* _topLevelObjects;
	NSArray* _properties;
	NSString* _viewControllerID;
	NSMutableDictionary* _gestureRecognizers;
	NSMutableArray* _uninstalledGestureIDs;
	NSMutableArray* _pendingGestureInstallationFinishedBlocks;
	CGRect _contentFrame;

}

@property (nonatomic,retain) NSArray * topLevelObjects;                                              //@synthesize topLevelObjects=_topLevelObjects - In the implementation block
@property (nonatomic,copy) NSArray * properties;                                                     //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                                                    //@synthesize contentFrame=_contentFrame - In the implementation block
@property (nonatomic,retain) NSString * viewControllerID;                                            //@synthesize viewControllerID=_viewControllerID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * gestureRecognizers;                               //@synthesize gestureRecognizers=_gestureRecognizers - In the implementation block
@property (nonatomic,retain) NSMutableArray * uninstalledGestureIDs;                                 //@synthesize uninstalledGestureIDs=_uninstalledGestureIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingGestureInstallationFinishedBlocks;              //@synthesize pendingGestureInstallationFinishedBlocks=_pendingGestureInstallationFinishedBlocks - In the implementation block
@property (nonatomic,readonly) WKCrownSequencer * crownSequencer;                                    //@synthesize crownSequencer=_crownSequencer - In the implementation block
+(CGRect)screenBounds;
+(double)screenScale;
+(BOOL)openParentApplication:(id)arg1 reply:(/*^block*/id)arg2 ;
+(void)reloadRootControllersWithNames:(id)arg1 contexts:(id)arg2 ;
+(void)reloadRootPageControllersWithNames:(id)arg1 contexts:(id)arg2 orientation:(long long)arg3 pageIndex:(long long)arg4 ;
+(void)_insertPageControllersAtIndexes:(id)arg1 withNames:(id)arg2 contexts:(id)arg3 ;
+(void)_movePageControllerAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
+(void)_removePageControllersAtIndexes:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(NSArray *)properties;
-(CGRect)contentFrame;
-(id)initWithContext:(id)arg1 ;
-(void)setProperties:(NSArray *)arg1 ;
-(NSMutableDictionary *)gestureRecognizers;
-(void)animateWithDuration:(double)arg1 animations:(/*^block*/id)arg2 ;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)setGestureRecognizers:(NSMutableDictionary *)arg1 ;
-(void)setViewControllerID:(NSString *)arg1 ;
-(NSString *)viewControllerID;
-(void)didRegisterWithRemoteInterface;
-(void)didDeactivate;
-(void)handleUserActivity:(id)arg1 ;
-(void)table:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(id)contextsForSegueWithIdentifier:(id)arg1 inTable:(id)arg2 rowIndex:(long long)arg3 ;
-(id)contextForSegueWithIdentifier:(id)arg1 inTable:(id)arg2 rowIndex:(long long)arg3 ;
-(id)contextsForSegueWithIdentifier:(id)arg1 ;
-(id)contextForSegueWithIdentifier:(id)arg1 ;
-(void)willActivate;
-(void)_handleActionWithIdentifier:(id)arg1 forNotification:(id)arg2 remoteNotification:(id)arg3 localNotification:(id)arg4 ;
-(void)setUninstalledGestureIDs:(NSMutableArray *)arg1 ;
-(void)setPendingGestureInstallationFinishedBlocks:(NSMutableArray *)arg1 ;
-(void)setTopLevelObjects:(NSArray *)arg1 ;
-(NSArray *)topLevelObjects;
-(void)handleActionWithIdentifier:(id)arg1 forNotification:(id)arg2 ;
-(void)handleActionWithIdentifier:(id)arg1 forLocalNotification:(id)arg2 ;
-(void)handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 ;
-(void)scrollToObject:(id)arg1 atScrollPosition:(long long)arg2 animated:(BOOL)arg3 ;
-(void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3 ;
-(void)awakeWithContext:(id)arg1 ;
-(void)didAppear;
-(void)willDisappear;
-(void)pickerDidSettle:(id)arg1 ;
-(void)pickerDidFocus:(id)arg1 ;
-(void)pickerDidResignFocus:(id)arg1 ;
-(void)pushControllerWithName:(id)arg1 context:(id)arg2 ;
-(void)popController;
-(void)popToRootController;
-(void)interfaceDidScrollToTop;
-(void)interfaceOffsetDidScrollToTop;
-(void)interfaceOffsetDidScrollToBottom;
-(void)becomeCurrentPage;
-(void)presentControllerWithName:(id)arg1 context:(id)arg2 ;
-(void)presentControllerWithNames:(id)arg1 contexts:(id)arg2 ;
-(void)dismissController;
-(void)presentTextInputControllerWithSuggestions:(id)arg1 allowedInputMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentTextInputControllerWithSuggestionsForLanguage:(/*^block*/id)arg1 allowedInputMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissTextInputController;
-(void)presentMediaPlayerControllerWithURL:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissMediaPlayerController;
-(void)presentAudioRecorderControllerWithOutputURL:(id)arg1 preset:(long long)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissAudioRecorderController;
-(void)presentAddPassesControllerWithPasses:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAddPassesController;
-(void)addMenuItemWithImage:(id)arg1 title:(id)arg2 action:(SEL)arg3 ;
-(void)addMenuItemWithImageNamed:(id)arg1 title:(id)arg2 action:(SEL)arg3 ;
-(void)addMenuItemWithItemIcon:(long long)arg1 title:(id)arg2 action:(SEL)arg3 ;
-(void)clearAllMenuItems;
-(void)updateUserActivity:(id)arg1 userInfo:(id)arg2 ;
-(void)invalidateUserActivity;
-(void)beginGlanceUpdates;
-(void)endGlanceUpdates;
-(WKCrownSequencer *)crownSequencer;
-(NSMutableArray *)uninstalledGestureIDs;
-(NSMutableArray *)pendingGestureInstallationFinishedBlocks;
@end

