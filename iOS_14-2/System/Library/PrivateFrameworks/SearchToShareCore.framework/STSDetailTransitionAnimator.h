/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIView, NSString;

@interface STSDetailTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presenting;
	UIView* _snapshotView;
	CGRect _sourceFrame;
	UIEdgeInsets _sourceInsets;
	CGRect _presentedFrame;

}

@property (nonatomic,retain) UIView * snapshotView;                  //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) CGRect sourceFrame;                     //@synthesize sourceFrame=_sourceFrame - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sourceInsets;              //@synthesize sourceInsets=_sourceInsets - In the implementation block
@property (assign,nonatomic) CGRect presentedFrame;                  //@synthesize presentedFrame=_presentedFrame - In the implementation block
@property (assign,nonatomic) BOOL presenting;                        //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(UIView *)snapshotView;
-(double)transitionDuration:(id)arg1 ;
-(void)setSnapshotView:(UIView *)arg1 ;
-(BOOL)presenting;
-(void)setPresenting:(BOOL)arg1 ;
-(CGRect)sourceFrame;
-(void)setSourceFrame:(CGRect)arg1 ;
-(UIEdgeInsets)sourceInsets;
-(CGRect)presentedFrame;
-(void)setSourceInsets:(UIEdgeInsets)arg1 ;
-(void)setPresentedFrame:(CGRect)arg1 ;
@end

