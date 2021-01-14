/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIBarButtonItem.h>

@class UIView, SUUIAppearance, UINavigationItem, NSString, SUTouchCaptureView;

@interface SUBarButtonItem : UIBarButtonItem {

	UIView* _accessoryView;
	UIEdgeInsets _accessoryViewInsets;
	SUUIAppearance* _confirmationAppearance;
	UINavigationItem* _lastNavigationItem;
	NSString* _preConfirmationTitle;
	SUTouchCaptureView* _touchCaptureView;

}

@property (nonatomic,retain) UIView * accessoryView;                                               //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets accessoryViewInsets;                                     //@synthesize accessoryViewInsets=_accessoryViewInsets - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (getter=isShowingConfirmation,nonatomic,readonly) BOOL showingConfirmation; 
+(Class)classForNavigationButton;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)isLoading;
-(UIView *)accessoryView;
-(UIEdgeInsets)accessoryViewInsets;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)setAccessoryViewInsets:(UIEdgeInsets)arg1 ;
-(id)createViewForNavigationItem:(id)arg1 ;
-(void)dealloc;
-(id)_navigationButton;
-(BOOL)isShowingConfirmation;
-(void)configureFromScriptButton:(id)arg1 ;
-(void)hideConfirmationWithAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)showConfirmationWithTitle:(id)arg1 appearance:(id)arg2 animated:(BOOL)arg3 ;
-(void)_touchCaptureAction:(id)arg1 ;
-(void)_removeTouchCaptureView;
-(void)_setTitle:(id)arg1 isConfirmation:(BOOL)arg2 appearance:(id)arg3 animated:(BOOL)arg4 ;
-(void)_updateViewForAccessoryChange;
-(void)_addTouchCaptureViewForNavigationButton:(id)arg1 ;
@end

