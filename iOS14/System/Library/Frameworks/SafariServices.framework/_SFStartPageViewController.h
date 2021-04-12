/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SFStartPageCollectionDataSource.h>
#import <libobjc.A.dylib/SFStartPageCollectionDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/_SFStartPagePreviewProviding.h>

@protocol _SFStartPageDataSource;
@class UINavigationController, SFStartPageCollectionViewController, NSHashTable, NSString;

@interface _SFStartPageViewController : UIViewController <SFStartPageCollectionDataSource, SFStartPageCollectionDelegate, UINavigationControllerDelegate, _SFStartPagePreviewProviding> {

	UINavigationController* _navigationController;
	SFStartPageCollectionViewController* _rootCollectionViewController;
	NSHashTable* _dataSourceObservers;
	id<_SFStartPageDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<_SFStartPageDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (getter=isShowingRootView,nonatomic,readonly) BOOL showingRootView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)startPageCollectionViewController:(id)arg1 didSelectSiteIconWithIdentifier:(id)arg2 ;
-(void)startPageCollectionViewController:(id)arg1 didSelectSiteCardWithIdentifier:(id)arg2 ;
-(id)previewViewControllerForFolderWithIdentifier:(id)arg1 ;
-(void)presentViewController:(id)arg1 fromItemWithIdentifier:(id)arg2 ;
-(BOOL)isShowingRootView;
-(void)showDetailForFolderWithIdentifier:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id<_SFStartPageDataSource>)dataSource;
-(void)setDataSource:(id<_SFStartPageDataSource>)arg1 ;
-(void)reloadDataAnimatingDifferences:(BOOL)arg1 ;
-(id)sectionsForStartPageCollectionViewController:(id)arg1 ;
-(void)startPageCollectionViewController:(id)arg1 toggleSectionExpanded:(id)arg2 ;
-(BOOL)startPageCollectionViewController:(id)arg1 isSectionExpanded:(id)arg2 ;
-(void)viewDidLoad;
-(id)titleForStartPageCollectionViewController:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

