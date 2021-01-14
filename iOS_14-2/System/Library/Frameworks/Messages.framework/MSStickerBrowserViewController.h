/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <Messages/Messages-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MSRootViewControllerProtocol.h>
#import <libobjc.A.dylib/MSStickerBrowserViewDataSource.h>

@class MSStickerBrowserView, NSString;

@interface MSStickerBrowserViewController : UIViewController <MSRootViewControllerProtocol, MSStickerBrowserViewDataSource> {

	BOOL _viewHasAppeared;
	MSStickerBrowserView* _stickerBrowserView;
	long long _stickerSize;
	CGRect _initialFrameBeforeAppearance;

}

@property (nonatomic,retain) MSStickerBrowserView * stickerBrowserView;              //@synthesize stickerBrowserView=_stickerBrowserView - In the implementation block
@property (assign,nonatomic) BOOL viewHasAppeared;                                   //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
@property (nonatomic,readonly) long long stickerSize;                                //@synthesize stickerSize=_stickerSize - In the implementation block
@property (assign,nonatomic) CGRect initialFrameBeforeAppearance;                    //@synthesize initialFrameBeforeAppearance=_initialFrameBeforeAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)numberOfStickersInStickerBrowserView:(id)arg1 ;
-(id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setViewHasAppeared:(BOOL)arg1 ;
-(BOOL)viewHasAppeared;
-(void)setInitialFrameBeforeAppearance:(CGRect)arg1 ;
-(CGRect)initialFrameBeforeAppearance;
-(void)updateSnapshotWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)willTransitionToPresentationStyle:(unsigned long long)arg1 ;
-(void)didTransitionToPresentationStyle:(unsigned long long)arg1 ;
-(long long)stickerSize;
-(id)initWithStickerSize:(long long)arg1 ;
-(void)setStickerBrowserView:(MSStickerBrowserView *)arg1 ;
-(MSStickerBrowserView *)stickerBrowserView;
-(void)enableUserInteraction;
-(void)disableUserInteraction;
@end

