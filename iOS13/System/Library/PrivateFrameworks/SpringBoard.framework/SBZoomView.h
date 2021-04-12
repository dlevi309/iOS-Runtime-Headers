/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIStatusBar;

@interface SBZoomView : UIView {

	UIView* _contentView;
	UIStatusBar* _statusBar;

}

@property (assign,nonatomic,__weak) UIStatusBar * statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                      //@synthesize contentView=_contentView - In the implementation block
+(id)_chromeStatusBarImageForInterfaceOrientation:(long long)arg1 ;
-(void)dealloc;
-(UIView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(UIStatusBar *)statusBar;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 ;
@end

