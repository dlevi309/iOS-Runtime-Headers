/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPredictiveViewController.h>

@class UIView, NSArray, NSString;

@interface UICandidateViewController : UIViewController <UIPredictiveViewController> {

	UIView* _candidateView;

}

@property (nonatomic,retain) UIView * candidateView;                       //@synthesize candidateView=_candidateView - In the implementation block
@property (nonatomic,readonly) NSArray * displayedCandidates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredCandidateBarHeightForTraitCollection:(id)arg1 ;
-(long long)overrideUserInterfaceStyle;
-(double)preferredHeightForTraitCollection:(id)arg1 ;
-(BOOL)hidesExpandableButton;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(UIView *)candidateView;
-(void)setCandidateView:(UIView *)arg1 ;
-(void)loadView;
-(BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(NSArray *)displayedCandidates;
@end

