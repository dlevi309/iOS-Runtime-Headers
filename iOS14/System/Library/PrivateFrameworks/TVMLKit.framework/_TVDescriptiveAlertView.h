/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, NSArray, UIView, _UIRepeatingPressGestureRecognizer, UIImage, UIImageView, NSString;

@interface _TVDescriptiveAlertView : UIView <UIScrollViewDelegate> {

	UIScrollView* _scrollView;
	NSArray* _viewsAboveScrollView;
	NSArray* _viewsBelowScrollView;
	UIView* _defaultFocusView;
	BOOL _isCenteredLayout;
	_UIRepeatingPressGestureRecognizer* _upButtonGesture;
	_UIRepeatingPressGestureRecognizer* _downButtonGesture;
	BOOL _waiting;
	UIImage* _bgImage;
	UIImageView* _bgImageView;
	NSArray* _childViews;

}

@property (nonatomic,retain) NSArray * childViews;                   //@synthesize childViews=_childViews - In the implementation block
@property (nonatomic,retain) UIView * defaultFocusView;              //@synthesize defaultFocusView=_defaultFocusView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)preferredFocusEnvironments;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setupGestureRecognizers;
-(void)setDefaultFocusView:(UIView *)arg1 ;
-(UIView *)defaultFocusView;
-(void)setBgImage:(id)arg1 ;
-(void)setChildViews:(NSArray *)arg1 ;
-(void)_scrollUp:(id)arg1 ;
-(void)_scrollDown:(id)arg1 ;
-(void)_scrollUp;
-(void)_scrollInDirection:(double)arg1 ;
-(void)_scrollDown;
-(NSArray *)childViews;
@end

