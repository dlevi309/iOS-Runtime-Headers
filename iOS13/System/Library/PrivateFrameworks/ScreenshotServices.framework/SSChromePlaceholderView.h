/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UINavigationBarDelegate.h>

@class UINavigationItem, UIBarButtonItem, SSVellumOpacityControl, UIView, UINavigationBar, NSArray, NSString;

@interface SSChromePlaceholderView : UIView <UINavigationBarDelegate> {

	UINavigationItem* _managedNavigationItem;
	UIBarButtonItem* _shareItem;
	UIBarButtonItem* _doneItem;
	UIBarButtonItem* _deleteItem;
	UIBarButtonItem* _undoItem;
	UIBarButtonItem* _redoItem;
	UIBarButtonItem* _undoRedoSpacerItem;
	UIBarButtonItem* _opacityItem;
	SSVellumOpacityControl* _opacityControl;
	UIView* _opacityView;
	UINavigationBar* _topBar;
	UINavigationBar* _topBarBackground;
	UIView* _topBarSeparatorLine;
	NSArray* _barItems;
	double _contentAlpha;

}

@property (assign,nonatomic) double contentAlpha;                   //@synthesize contentAlpha=_contentAlpha - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(long long)positionForBar:(id)arg1 ;
-(void)setContentAlpha:(double)arg1 ;
-(double)contentAlpha;
-(double)topBarHeight;
-(void)_initializeBarButtonItems;
-(void)_layoutTopBar;
-(void)_updateBarButtonItemPositionsAnimated:(BOOL)arg1 ;
@end

