/*
* Generated on Thursday, January 14, 2021 at 2:29:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UINavigationItem *)navigationItem;
-(UIBarButtonItem *)barButtonItem;
-(UINavigationBar *)navigationBar;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(void)setNavigationItem:(UINavigationItem *)arg1 ;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(BOOL)isCancelItem;
-(void)setIsCancelItem:(BOOL)arg1 ;
-(BOOL)isRightItem;
-(void)setIsRightItem:(BOOL)arg1 ;
@end

