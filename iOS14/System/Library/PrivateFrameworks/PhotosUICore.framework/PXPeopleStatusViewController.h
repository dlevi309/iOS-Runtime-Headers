/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>

@protocol PXPeopleStatusViewDelegate;
@class PXPeopleStatusView;

@interface PXPeopleStatusViewController : UIViewController {

	id<PXPeopleStatusViewDelegate> _delegate;
	PXPeopleStatusView* _statusView;

}

@property (nonatomic,retain) PXPeopleStatusView * statusView;                             //@synthesize statusView=_statusView - In the implementation block
@property (assign,nonatomic,__weak) id<PXPeopleStatusViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setStatusView:(PXPeopleStatusView *)arg1 ;
-(PXPeopleStatusView *)statusView;
-(id<PXPeopleStatusViewDelegate>)delegate;
-(void)_continuePressed:(id)arg1 ;
-(void)setDelegate:(id<PXPeopleStatusViewDelegate>)arg1 ;
-(void)viewDidLoad;
@end

