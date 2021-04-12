/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol SKUIMenuViewControllerDelegate;
@class NSArray;

@interface SKUIMenuViewController : UITableViewController {

	id<SKUIMenuViewControllerDelegate> _delegate;
	long long _indexOfCheckedTitle;
	NSArray* _menuTitles;
	NSArray* _menuImages;
	long long _menuStyle;

}

@property (nonatomic,readonly) NSArray * menuTitles;                                          //@synthesize menuTitles=_menuTitles - In the implementation block
@property (nonatomic,readonly) NSArray * menuImages;                                          //@synthesize menuImages=_menuImages - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIMenuViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long indexOfCheckedTitle;                                   //@synthesize indexOfCheckedTitle=_indexOfCheckedTitle - In the implementation block
@property (assign,nonatomic) long long menuStyle;                                             //@synthesize menuStyle=_menuStyle - In the implementation block
-(id<SKUIMenuViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUIMenuViewControllerDelegate>)arg1 ;
-(void)loadView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)preferredUserInterfaceStyle;
-(id)initWithMenuTitles:(id)arg1 ;
-(void)setIndexOfCheckedTitle:(long long)arg1 ;
-(NSArray *)menuTitles;
-(void)setMenuStyle:(long long)arg1 ;
-(id)initWithMenuTitles:(id)arg1 images:(id)arg2 ;
-(NSArray *)menuImages;
-(long long)indexOfCheckedTitle;
-(long long)menuStyle;
@end

