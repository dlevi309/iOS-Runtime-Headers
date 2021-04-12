/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosAlbumViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class NSArray, NSMutableArray, NSString;

@interface PUCurationKeyAssetComparisonDebugViewController : PUPhotosAlbumViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSArray* _highlights;
	NSMutableArray* _currentKeyAssets;
	NSMutableArray* _legacyKeyAssets;
	NSMutableArray* _modernKeyAssets;
	NSMutableArray* _keyAssetReasons;
	NSMutableArray* _indexMap;
	NSArray* _visibleAssets;
	BOOL _showsDifferentOnly;
	BOOL _showsMeaningsOnly;
	BOOL _canLiveUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)shouldShowSectionHeaders;
-(void)viewDidLoad;
-(void)updateData;
-(void)_fetchHighlights;
-(void)toggleShowsDifferentOnly:(id)arg1 ;
-(void)toggleShowsMeaningsOnly:(id)arg1 ;
-(void)didTapHeaderView:(id)arg1 ;
@end

