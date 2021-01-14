/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <UIKitCore/UINavigationItem.h>

@protocol SUNavigationItemDelegate;
@class UIBarButtonItem;

@interface SUNavigationItem : UINavigationItem {

	id<SUNavigationItemDelegate> _delegate;

}

@property (assign,nonatomic) id<SUNavigationItemDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * secondaryLeftBarButtonItem; 
-(id<SUNavigationItemDelegate>)delegate;
-(void)setDelegate:(id<SUNavigationItemDelegate>)arg1 ;
-(void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftBarButtonItem:(id)arg1 ;
-(void)setLeftBarButtonItems:(id)arg1 ;
-(void)setSecondaryLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(UIBarButtonItem *)secondaryLeftBarButtonItem;
-(void)setSecondaryLeftBarButtonItem:(UIBarButtonItem *)arg1 ;
@end

