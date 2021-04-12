/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFBarManagerDelegate;
#import <SafariServices/SafariServices-Structs.h>
@class NSMapTable, NSTimer, NSArray;

@interface _SFBarManager : NSObject {

	NSMapTable* _barToRegistrationMap;
	BOOL _deferUpdateAllRegistrations;
	BOOL _needsUpdateAllRegistrations;
	NSTimer* _coalescedUpdatesTimer;
	double _lastCoalescedUpdatesTime;
	/*^block*/id _coalescedUpdatesBlock;
	NSArray* _itemConfigurationMap;
	BOOL _bookmarksItemSelected;
	id<_SFBarManagerDelegate> _delegate;
	double _downloadsItemProgress;

}

@property (assign,nonatomic,__weak) id<_SFBarManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isBookmarksItemSelected,nonatomic) BOOL bookmarksItemSelected;              //@synthesize bookmarksItemSelected=_bookmarksItemSelected - In the implementation block
@property (assign,nonatomic) double downloadsItemProgress;                                           //@synthesize downloadsItemProgress=_downloadsItemProgress - In the implementation block
-(void)visibleBarItemsNeedUpdate;
-(void)registerToolbar:(id)arg1 withLayout:(long long)arg2 persona:(unsigned long long)arg3 ;
-(CGRect)frameForBarItem:(long long)arg1 inCoordinateSpace:(id)arg2 ;
-(BOOL)isBarItemHidden:(long long)arg1 ;
-(void)pulseDownloadsItem;
-(BOOL)isBookmarksItemSelected;
-(void)_performCoalescedUpdatesNow;
-(id)init;
-(void)setDownloadsItemProgress:(double)arg1 ;
-(id<_SFBarManagerDelegate>)delegate;
-(void)performCoalescedUpdates:(/*^block*/id)arg1 ;
-(void)_updateRegistration:(id)arg1 ;
-(unsigned long long)test_numberOfRegistrations;
-(void)barRegistration:(id)arg1 didReceiveTouchDownForBarItem:(long long)arg2 ;
-(void)setDelegate:(id<_SFBarManagerDelegate>)arg1 ;
-(void)_updateAllRegistrations;
-(void)setDownloadsItemNeedsLayout;
-(void)barRegistration:(id)arg1 didReceiveLongPressForBarItem:(long long)arg2 ;
-(BOOL)isBarItemEnabled:(long long)arg1 ;
-(BOOL)barRegistration:(id)arg1 canHandleLongPressForBarItem:(long long)arg2 ;
-(void)setBarItem:(long long)arg1 enabled:(BOOL)arg2 ;
-(double)downloadsItemProgress;
-(id)test_registrationForBar:(id)arg1 ;
-(void)setBookmarksItemSelected:(BOOL)arg1 ;
-(void)setBarItem:(long long)arg1 menuProvider:(/*^block*/id)arg2 ;
-(void)setBarItem:(long long)arg1 hidden:(BOOL)arg2 ;
-(void)barRegistration:(id)arg1 didReceiveTapForBarItem:(long long)arg2 ;
-(void)_invalidateCoalescedUpdatesTimer;
@end

