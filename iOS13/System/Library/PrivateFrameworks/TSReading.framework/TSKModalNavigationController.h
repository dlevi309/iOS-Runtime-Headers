/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UINavigationController.h>

@class UIView;

@interface TSKModalNavigationController : UINavigationController {

	UIView* mTopSeparator;
	BOOL mShowTopSeparator;
	BOOL mIsFullscreenViewController;

}

@property (assign,nonatomic) BOOL showTopSeparator; 
@property (assign,nonatomic) BOOL isFullscreenViewController; 
-(void)dealloc;
-(void)viewDidLoad;
-(long long)positionForBar:(id)arg1 ;
-(void)layoutViews;
-(id)initWithRootViewController:(id)arg1 ;
-(BOOL)showTopSeparator;
-(void)setShowTopSeparator:(BOOL)arg1 ;
-(void)setIsFullscreenViewController:(BOOL)arg1 ;
-(void)p_statusBarWillChange:(id)arg1 ;
-(BOOL)isFullscreenViewController;
@end

