/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXMemoriesSpecManager, PXMemoriesFeedUIViewController, UIScrollView, NSString;

@interface PXMemoriesFeedTVViewController : UIViewController <PXChangeObserver> {

	PXMemoriesSpecManager* _specManager;
	PXMemoriesFeedUIViewController* _memoriesFeedController;

}

@property (nonatomic,readonly) PXMemoriesSpecManager * specManager;                                //@synthesize specManager=_specManager - In the implementation block
@property (nonatomic,readonly) UIScrollView * ppt_scrollView; 
@property (nonatomic,retain) PXMemoriesFeedUIViewController * memoriesFeedController;              //@synthesize memoriesFeedController=_memoriesFeedController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXMemoriesSpecManager *)specManager;
-(void)_specDidChange:(id)arg1 ;
-(PXMemoriesFeedUIViewController *)memoriesFeedController;
-(void)setMemoriesFeedController:(PXMemoriesFeedUIViewController *)arg1 ;
-(void)viewDidLoad;
-(UIScrollView *)ppt_scrollView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

