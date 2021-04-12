/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPredictiveViewController.h>

@class UIView, NSString, NSArray;

@interface UICandidateViewController : UIViewController <UIPredictiveViewController> {

	UIView* _candidateView;

}

@property (nonatomic,retain) UIView * candidateView;                       //@synthesize candidateView=_candidateView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * displayedCandidates; 
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(long long)overrideUserInterfaceStyle;
-(BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(BOOL)hidesExpandableButton;
-(NSArray *)displayedCandidates;
-(void)setCandidateView:(UIView *)arg1 ;
-(UIView *)candidateView;
@end

