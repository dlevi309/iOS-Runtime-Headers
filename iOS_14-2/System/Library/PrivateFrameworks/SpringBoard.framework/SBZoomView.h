/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(UIStatusBar *)statusBar;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(void)dealloc;
@end

