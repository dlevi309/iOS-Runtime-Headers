/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIResponder.h>
#import <libobjc.A.dylib/_SFBarRegistrationToken.h>

@class NSOrderedSet, UIToolbar, _SFBarManager, NSMutableSet, UIBarButtonItem, SFDownloadsBarButtonItem, NSString;

@interface SFBarRegistration : UIResponder <_SFBarRegistrationToken> {

	NSOrderedSet* _arrangedBarItems;
	UIToolbar* _bar;
	_SFBarManager* _barManager;
	NSMutableSet* _hiddenBarItems;
	NSOrderedSet* _lastCommittedArrangedBarItems;
	long long _layout;
	UIBarButtonItem* _backItem;
	UIBarButtonItem* _bookmarksItem;
	SFDownloadsBarButtonItem* _downloadsItem;
	UIBarButtonItem* _forwardItem;
	UIBarButtonItem* _newTabItem;
	UIBarButtonItem* _shareItem;
	UIBarButtonItem* _tabExposeItem;
	UIBarButtonItem* _openInSafariItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_effectiveArrangedBarItems;
-(BOOL)containsBarItem:(long long)arg1 ;
-(void)pulseDownloadsItem;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setDownloadsItemProgress:(double)arg1 ;
-(id)UIBarButtonItemForItem:(long long)arg1 ;
-(id)_UIBarButtonItemsForArrangedBarItems:(id)arg1 ;
-(void)_itemReceivedTouchDown:(id)arg1 ;
-(id)popoverSourceInfoForItem:(long long)arg1 ;
-(id)initWithBar:(id)arg1 barManager:(id)arg2 layout:(long long)arg3 persona:(unsigned long long)arg4 ;
-(BOOL)_arrangedBarItemsNeedUpdate;
-(void)_itemReceivedTap:(id)arg1 ;
-(void)setBarItem:(long long)arg1 enabled:(BOOL)arg2 ;
-(void)_itemReceivedLongPress:(id)arg1 ;
-(id)_newBarButtonItemForSFBarItem:(long long)arg1 ;
-(void)setBookmarksItemSelected:(BOOL)arg1 ;
-(void)updateArrangedUIBarButtonItemsIfNeeded;
-(void)setBarItem:(long long)arg1 hidden:(BOOL)arg2 ;
-(id)_UIBarButtonItemForBarItem:(long long)arg1 ;
-(long long)_barItemForUIBarButtonItem:(id)arg1 ;
@end

