/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UINavigationButton.h>

@class UIView;

@interface SUNavigationButton : UINavigationButton {

	UIView* _accessoryView;
	UIEdgeInsets _accessoryViewInsets;

}

@property (nonatomic,retain) UIView * accessoryView;                        //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets accessoryViewInsets;              //@synthesize accessoryViewInsets=_accessoryViewInsets - In the implementation block
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)_accessoryViewRectForContentRect:(CGRect)arg1 ;
-(void)setAccessoryViewInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)accessoryViewInsets;
@end

