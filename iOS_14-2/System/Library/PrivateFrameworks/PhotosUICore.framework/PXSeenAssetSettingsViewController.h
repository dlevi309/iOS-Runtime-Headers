/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, PHFetchResult, NSString;

@interface PXSeenAssetSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	PHFetchResult* _fetchResult;

}

@property (nonatomic,retain) UITableView * tableView;                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) PHFetchResult * fetchResult;              //@synthesize fetchResult=_fetchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(PHFetchResult *)fetchResult;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)_recommendedVariationTypeForAsset:(id)arg1 ;
-(void)viewDidLoad;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(id)_suggestedSeenFetchOptions;
-(void)_fetchSeenAssetsAndReload:(BOOL)arg1 ;
-(void)_presentConfirmationForAssetAtIndexPath:(id)arg1 ;
-(void)_markVariationsAsUnseenForAssetAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
@end

