/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)titleView;
-(void)setTitle:(id)arg1 ;
-(id)navigationBar;
-(void)setTitleView:(id)arg1 ;
-(void)setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftItemsSupplementBackButton:(BOOL)arg1 ;
-(void)setTitleView:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)leftItemsSupplementBackButton;
-(id)rightBarButtonItem;
-(id)leftBarButtonItem;
-(void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBackButtonTitle:(id)arg1 ;
-(id)backButtonTitle;
-(void)setHidesBackButton:(BOOL)arg1 ;
-(id)leftBarButtonItems;
-(id)rightBarButtonItems;
-(id)initWithNavigationItem:(id)arg1 ;
-(id)title;
-(void)dealloc;
-(SUNavigationItem *)wrappedNavigationItem;
-(void)setShouldDelayChanges:(BOOL)arg1 ;
-(void)setWrappedNavigationItem:(SUNavigationItem *)arg1 ;
-(void)commitDelayedChanges;
-(void)_prepareButtonItemForDisplay:(id)arg1 ;
-(BOOL)shouldDelayChanges;
-(void)_scheduleCommit;
@end

