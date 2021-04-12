/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFBarManagerDelegate;
@class NSMapTable, NSTimer;

@interface _SFBarManager : NSObject {

	NSMapTable* _barToRegistrationMap;
	BOOL _deferUpdateAllRegistrations;
	BOOL _itemEnabledMap[8];
	BOOL _needsUpdateAllRegistrations;
	NSTimer* _coalescedUpdatesTimer;
	double _lastCoalescedUpdatesTime;
	/*^block*/id _coalescedUpdatesBlock;
	BOOL _itemHiddenMap[8];
	BOOL _bookmarksItemSelected;
	id<_SFBarManagerDelegate> _delegate;
	double _downloadsItemProgress;

}

@property (assign,nonatomic,__weak) id<_SFBarManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isBookmarksItemSelected,nonatomic) BOOL bookmarksItemSelected;              //@synthesize bookmarksItemSelected=_bookmarksItemSelected - In the implementation block
@property (assign,nonatomic) double downloadsItemProgress;                                           //@synthesize downloadsItemProgress=_downloadsItemProgress - In the implementation block
-(id)init;
-(id<_SFBarManagerDelegate>)delegate;
-(void)setDelegate:(id<_SFBarManagerDelegate>)arg1 ;
-(BOOL)barRegistration:(id)arg1 canHandleLongPressForBarItem:(long long)arg2 ;
-(void)barRegistration:(id)arg1 didReceiveTouchDownForBarItem:(long long)arg2 ;
-(void)barRegistration:(id)arg1 didReceiveTapForBarItem:(long long)arg2 ;
-(void)barRegistration:(id)arg1 didReceiveLongPressForBarItem:(long long)arg2 ;
-(void)setBookmarksItemSelected:(BOOL)arg1 ;
-(void)setDownloadsItemProgress:(double)arg1 ;
-(void)pulseDownloadsItem;
-(void)setBarItem:(long long)arg1 enabled:(BOOL)arg2 ;
-(void)setBarItem:(long long)arg1 hidden:(BOOL)arg2 ;
-(void)registerToolbar:(id)arg1 withLayout:(long long)arg2 persona:(unsigned long long)arg3 ;
-(void)performCoalescedUpdates:(/*^block*/id)arg1 ;
-(void)_updateAllRegistrations;
-(void)_invalidateCoalescedUpdatesTimer;
-(void)_performCoalescedUpdatesNow;
-(void)_updateRegistration:(id)arg1 ;
-(BOOL)isBarItemEnabled:(long long)arg1 ;
-(BOOL)isBarItemHidden:(long long)arg1 ;
-(void)visibleBarItemsNeedUpdate;
-(void)setDownloadsItemNeedsLayout;
-(unsigned long long)test_numberOfRegistrations;
-(id)test_registrationForBar:(id)arg1 ;
-(BOOL)isBookmarksItemSelected;
-(double)downloadsItemProgress;
@end

