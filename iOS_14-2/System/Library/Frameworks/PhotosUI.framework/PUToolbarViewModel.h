/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewModel.h>

@class NSArray, UIView, UIViewController, PUToolbarViewModelChange;

@interface PUToolbarViewModel : PUViewModel {

	BOOL _needsToUpdateToolbarSize;
	NSArray* _toolbarItems;
	UIView* _accessoryView;
	double _accessoryViewTopOutset;
	double _accessoryViewMaximumHeight;
	double _maximumHeight;
	UIViewController* __viewController;

}

@property (nonatomic,readonly) PUToolbarViewModelChange * currentChange; 
@property (assign,setter=_setViewController:,nonatomic,__weak) UIViewController * _viewController;              //@synthesize _viewController=__viewController - In the implementation block
@property (assign,nonatomic) BOOL needsToUpdateToolbarSize;                                                     //@synthesize needsToUpdateToolbarSize=_needsToUpdateToolbarSize - In the implementation block
@property (nonatomic,copy) NSArray * toolbarItems;                                                              //@synthesize toolbarItems=_toolbarItems - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                                            //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) double accessoryViewTopOutset;                                                     //@synthesize accessoryViewTopOutset=_accessoryViewTopOutset - In the implementation block
@property (assign,nonatomic) double accessoryViewMaximumHeight;                                                 //@synthesize accessoryViewMaximumHeight=_accessoryViewMaximumHeight - In the implementation block
@property (assign,nonatomic) double maximumHeight;                                                              //@synthesize maximumHeight=_maximumHeight - In the implementation block
-(PUToolbarViewModelChange *)currentChange;
-(double)accessoryViewMaximumHeight;
-(NSArray *)toolbarItems;
-(double)maximumHeight;
-(UIView *)accessoryView;
-(void)setNeedsToUpdateToolbarSize:(BOOL)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)_setViewController:(id)arg1 ;
-(UIViewController *)_viewController;
-(BOOL)needsToUpdateToolbarSize;
-(void)setAccessoryViewMaximumHeight:(double)arg1 ;
-(void)setMaximumHeight:(double)arg1 ;
-(void)setAccessoryViewTopOutset:(double)arg1 ;
-(void)didPublishChanges;
-(void)setToolbarItems:(NSArray *)arg1 ;
-(double)accessoryViewTopOutset;
-(id)newViewModelChange;
@end

