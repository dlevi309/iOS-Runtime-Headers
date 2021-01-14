/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PUCommentsTableDataControllerDelegate.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUAccessoryContentViewController.h>

@protocol PUAccessoryContentViewControllerDelegate;
@class PUAssetViewModel, UITableView, PUCommentsTableDataController, NSString;

@interface PUCommentsViewController : UIViewController <PUCommentsTableDataControllerDelegate, PUAssetViewModelChangeObserver, PXChangeObserver, PUAccessoryContentViewController> {

	BOOL __needsUpdateTableViewScrollPosition;
	id<PUAccessoryContentViewControllerDelegate> _accessoryContentViewControllerDelegate;
	PUAssetViewModel* _assetViewModel;
	UITableView* __tableView;
	PUCommentsTableDataController* __tableDataController;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) UITableView * _tableView;                                                                              //@synthesize _tableView=__tableView - In the implementation block
@property (nonatomic,readonly) PUCommentsTableDataController * _tableDataController;                                                  //@synthesize _tableDataController=__tableDataController - In the implementation block
@property (assign,setter=_setNeedsUpdateTableViewScrollPosition:,nonatomic) BOOL _needsUpdateTableViewScrollPosition;                 //@synthesize _needsUpdateTableViewScrollPosition=__needsUpdateTableViewScrollPosition - In the implementation block
@property (nonatomic,readonly) PUAssetViewModel * assetViewModel;                                                                     //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PUAccessoryContentViewControllerDelegate> accessoryContentViewControllerDelegate;              //@synthesize accessoryContentViewControllerDelegate=_accessoryContentViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets;                                                                            //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) CGSize minimumContentSize; 
+(BOOL)canShowCommentsForAsset:(id)arg1 ;
-(PUAssetViewModel *)assetViewModel;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(UIEdgeInsets)contentInsets;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)contentBoundsInCoordinateSpace:(id)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 changeReason:(long long)arg2 ;
-(CGSize)minimumContentSize;
-(UITableView *)_tableView;
-(void)setAccessoryContentViewControllerDelegate:(id<PUAccessoryContentViewControllerDelegate>)arg1 ;
-(id<PUAccessoryContentViewControllerDelegate>)accessoryContentViewControllerDelegate;
-(BOOL)contentAreaContainsPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)commentsTableDataController:(id)arg1 tableViewDidScroll:(id)arg2 ;
-(void)commentsTableDataController:(id)arg1 presentViewController:(id)arg2 ;
-(void)commentsTableDataController:(id)arg1 didChangeEditing:(BOOL)arg2 ;
-(id)initWithAssetViewModel:(id)arg1 ;
-(void)_updateTableDataController;
-(PUCommentsTableDataController *)_tableDataController;
-(BOOL)_needsUpdateTableViewScrollPosition;
-(void)_setNeedsUpdateTableViewScrollPosition:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

