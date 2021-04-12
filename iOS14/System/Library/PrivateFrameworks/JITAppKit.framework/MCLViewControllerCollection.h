/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIViewController *)owner;
-(void)setViews:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(void)setOwner:(UIViewController *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(NSArray *)views;
@end

