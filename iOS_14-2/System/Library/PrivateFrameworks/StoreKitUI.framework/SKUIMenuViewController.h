/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<SKUIMenuViewControllerDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<SKUIMenuViewControllerDelegate>)arg1 ;
-(long long)preferredUserInterfaceStyle;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithMenuTitles:(id)arg1 ;
-(void)setIndexOfCheckedTitle:(long long)arg1 ;
-(NSArray *)menuTitles;
-(void)setMenuStyle:(long long)arg1 ;
-(id)initWithMenuTitles:(id)arg1 images:(id)arg2 ;
-(NSArray *)menuImages;
-(long long)indexOfCheckedTitle;
-(long long)menuStyle;
@end

