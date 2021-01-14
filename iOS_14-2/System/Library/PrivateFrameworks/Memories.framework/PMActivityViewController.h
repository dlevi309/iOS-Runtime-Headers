/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <ShareSheet/UIActivityViewController.h>
#import <libobjc.A.dylib/PMAirplayActivityDelegate.h>
#import <UIKit/UIActivityViewControllerObjectManipulationDelegate.h>
#import <libobjc.A.dylib/PMActivityItemProviderDelegate.h>
#import <UIKit/UIActivityViewControllerAirDropDelegate.h>

@protocol PMActivityViewControllerDelegate;
@class UIViewController, PMAirplayActivity, UIBarButtonItem, NSString;

@interface PMActivityViewController : UIActivityViewController <PMAirplayActivityDelegate, UIActivityViewControllerObjectManipulationDelegate, PMActivityItemProviderDelegate, UIActivityViewControllerAirDropDelegate> {

	UIViewController* _presenter;
	id<PMActivityViewControllerDelegate> _delegate;
	PMAirplayActivity* _airplayActivity;
	unsigned long long _backgroundTask;
	UIBarButtonItem* _doneButton;

}

@property (nonatomic,retain) PMAirplayActivity * airplayActivity;                               //@synthesize airplayActivity=_airplayActivity - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTask;                                 //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                      //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic,__weak) id<PMActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIViewController * presenter;                               //@synthesize presenter=_presenter - In the implementation block
-(UIBarButtonItem *)doneButton;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setPresenter:(UIViewController *)arg1 ;
-(id<PMActivityViewControllerDelegate>)delegate;
-(UIViewController *)presenter;
-(void)setDelegate:(id<PMActivityViewControllerDelegate>)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)setCompletionWithItemsHandler:(/*^block*/id)arg1 ;
-(void)cancel;
-(id)_customizationGroupsForActivityViewController:(id)arg1 ;
-(void)activityViewControllerWillStartAirdropTransfer:(id)arg1 ;
-(void)activityViewControllerDidFinishAirdropTransfer:(id)arg1 ;
-(void)setBackgroundTask:(unsigned long long)arg1 ;
-(unsigned long long)backgroundTask;
-(void)exportFailed;
-(void)updateVisibleShareActions;
-(void)exportWillBegin;
-(void)setAirplayActivity:(PMAirplayActivity *)arg1 ;
-(PMAirplayActivity *)airplayActivity;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 barButtonItem:(id)arg3 parentViewController:(id)arg4 ;
@end

