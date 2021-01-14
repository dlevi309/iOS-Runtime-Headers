/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UITableView.h>

@protocol SearchUITableViewSizingDelegate;
@interface SearchUITableView : UITableView {

	id<SearchUITableViewSizingDelegate> _sizingDelegate;

}

@property (__weak) id<SearchUITableViewSizingDelegate> sizingDelegate;              //@synthesize sizingDelegate=_sizingDelegate - In the implementation block
-(void)setContentSize:(CGSize)arg1 ;
-(id<SearchUITableViewSizingDelegate>)sizingDelegate;
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setSizingDelegate:(id<SearchUITableViewSizingDelegate>)arg1 ;
-(void)safeAreaInsetsDidChange;
@end

