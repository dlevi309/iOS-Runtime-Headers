/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFDrawerPane;
#import <WorkflowUI/WorkflowUI-Structs.h>
@class UIViewController, NSString, UIView, UISearchBar;

@interface WFDrawerItem : NSObject {

	UIViewController*<WFDrawerPane> _drawerPane;

}

@property (assign,nonatomic,__weak) UIViewController*<WFDrawerPane> drawerPane;              //@synthesize drawerPane=_drawerPane - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIView * titleView; 
@property (nonatomic,retain) UISearchBar * searchBar; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(id)initWithDrawerPane:(id)arg1 ;
-(UIViewController*<WFDrawerPane>)drawerPane;
-(void)setDrawerPane:(UIViewController*<WFDrawerPane>)arg1 ;
@end

