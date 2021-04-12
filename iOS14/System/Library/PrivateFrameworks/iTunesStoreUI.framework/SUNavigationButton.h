/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)accessoryView;
-(UIEdgeInsets)accessoryViewInsets;
-(void)setAccessoryView:(UIView *)arg1 ;
-(CGRect)_accessoryViewRectForContentRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAccessoryViewInsets:(UIEdgeInsets)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)dealloc;
@end

