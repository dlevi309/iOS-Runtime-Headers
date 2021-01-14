/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(UIView *)titleView;
-(void)setTitle:(NSString *)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)setTitleView:(UIView *)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(NSString *)title;
-(id)initWithDrawerPane:(id)arg1 ;
-(UIViewController*<WFDrawerPane>)drawerPane;
-(void)setDrawerPane:(UIViewController*<WFDrawerPane>)arg1 ;
@end

