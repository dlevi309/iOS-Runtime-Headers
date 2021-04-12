/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUNavigationItem.h>

@class NSNumber, SUNavigationItem;

@interface SUDelayedNavigationItem : SUNavigationItem {

	BOOL _delayedBackButtonHidden;
	id _delayedBackButtonTitle;
	id _delayedLeftBarButtonItems;
	NSNumber* _delayedLeftItemsSupplementBackButton;
	id _delayedTitle;
	id _delayedTitleView;
	id _delayedRightBarButtonItems;
	BOOL _shouldDelayChanges;
	SUNavigationItem* _wrappedNavigationItem;

}

@property (nonatomic,retain) SUNavigationItem * wrappedNavigationItem;              //@synthesize wrappedNavigationItem=_wrappedNavigationItem - In the implementation block
@property (assign,nonatomic) BOOL shouldDelayChanges;                               //@synthesize shouldDelayChanges=_shouldDelayChanges - In the implementation block
-(void)dealloc;
-(id)title;
-(void)setTitle:(id)arg1 ;
-(id)navigationBar;
-(id)titleView;
-(void)setTitleView:(id)arg1 ;
-(id)leftBarButtonItems;
-(id)rightBarButtonItems;
-(id)leftBarButtonItem;
-(id)rightBarButtonItem;
-(BOOL)leftItemsSupplementBackButton;
-(id)backButtonTitle;
-(id)initWithNavigationItem:(id)arg1 ;
-(void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBackButtonTitle:(id)arg1 ;
-(void)setHidesBackButton:(BOOL)arg1 ;
-(void)setLeftItemsSupplementBackButton:(BOOL)arg1 ;
-(void)setTitleView:(id)arg1 animated:(BOOL)arg2 ;
-(SUNavigationItem *)wrappedNavigationItem;
-(void)setShouldDelayChanges:(BOOL)arg1 ;
-(void)setWrappedNavigationItem:(SUNavigationItem *)arg1 ;
-(void)commitDelayedChanges;
-(void)_prepareButtonItemForDisplay:(id)arg1 ;
-(BOOL)shouldDelayChanges;
-(void)_scheduleCommit;
@end

