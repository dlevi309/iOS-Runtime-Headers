/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPredictiveViewController.h>

@class NSArray, UIView, NSString;

@interface UICompatibilityPredictiveViewController : UIViewController <UIPredictiveViewController> {

	UIView* _customView;

}

@property (nonatomic,retain) UIView * customView;                          //@synthesize customView=_customView - In the implementation block
@property (nonatomic,readonly) NSArray * displayedCandidates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)preferredHeightForTraitCollection:(id)arg1 ;
-(BOOL)hidesExpandableButton;
-(UIView *)customView;
-(BOOL)_canShowWhileLocked;
-(void)setCustomView:(UIView *)arg1 ;
-(BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(NSArray *)displayedCandidates;
@end

