/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/

#import <JITAppKit/JITAppKit-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIStackView, NSLayoutConstraint, UIViewController, NSArray, NSString;

@interface MCLViewControllerCollection : UIScrollView <UIScrollViewDelegate> {

	UIStackView* _contentView;
	NSLayoutConstraint* _widthConstraint;
	UIViewController* _owner;
	NSArray* _views;

}

@property (assign,nonatomic,__weak) UIViewController * owner;              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) double spacing; 
@property (nonatomic,copy) NSArray * views;                                //@synthesize views=_views - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOwner:(UIViewController *)arg1 ;
-(double)spacing;
-(UIViewController *)owner;
-(void)setSpacing:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(NSArray *)views;
-(void)setViews:(NSArray *)arg1 ;
@end

