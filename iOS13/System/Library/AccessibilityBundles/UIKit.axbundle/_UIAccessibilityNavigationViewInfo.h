/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/


@class UINavigationItem, UIBarButtonItem, UINavigationBar;

@interface _UIAccessibilityNavigationViewInfo : NSObject {

	BOOL _isCancelItem;
	BOOL _isRightItem;
	UINavigationItem* _navigationItem;
	UIBarButtonItem* _barButtonItem;
	UINavigationBar* _navigationBar;

}

@property (assign,nonatomic,__weak) UINavigationItem * navigationItem;              //@synthesize navigationItem=_navigationItem - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * barButtonItem;                //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (assign,nonatomic,__weak) UINavigationBar * navigationBar;                //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,nonatomic) BOOL isCancelItem;                                     //@synthesize isCancelItem=_isCancelItem - In the implementation block
@property (assign,nonatomic) BOOL isRightItem;                                      //@synthesize isRightItem=_isRightItem - In the implementation block
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UINavigationBar *)navigationBar;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(UINavigationItem *)navigationItem;
-(void)setNavigationItem:(UINavigationItem *)arg1 ;
-(BOOL)isCancelItem;
-(void)setIsCancelItem:(BOOL)arg1 ;
-(BOOL)isRightItem;
-(void)setIsRightItem:(BOOL)arg1 ;
@end

