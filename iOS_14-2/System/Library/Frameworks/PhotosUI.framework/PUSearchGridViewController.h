/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosGridViewController.h>
#import <libobjc.A.dylib/PUPhotosSectionHeaderViewDelegate.h>
#import <libobjc.A.dylib/PUSearchGridDataSourceDelegate.h>
#import <libobjc.A.dylib/PUSectionedGridLayoutDelegate.h>

@class PUSearchGridDataSource, NSString;

@interface PUSearchGridViewController : PUPhotosGridViewController <PUPhotosSectionHeaderViewDelegate, PUSearchGridDataSourceDelegate, PUSectionedGridLayoutDelegate> {

	PUSearchGridDataSource* _searchGridDataSource;
	NSString* _emptyPlaceholderText;

}

@property (nonatomic,retain) PUSearchGridDataSource * searchGridDataSource;              //@synthesize searchGridDataSource=_searchGridDataSource - In the implementation block
@property (nonatomic,copy) NSString * emptyPlaceholderText;                              //@synthesize emptyPlaceholderText=_emptyPlaceholderText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIEdgeInsets)fullMomentsLevelSectionHeaderHighlightInset;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)newGridLayout;
-(id)newEmptyPlaceholderView;
-(BOOL)allowSlideshowButton;
-(NSString *)emptyPlaceholderText;
-(void)setEmptyPlaceholderText:(NSString *)arg1 ;
-(double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2 ;
-(double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 ;
-(void)searchGridDataSourceHasPendingChanges:(id)arg1 ;
-(BOOL)_containsScene;
-(void)_getDataForVisualSection:(long long)arg1 locations:(id*)arg2 title:(id*)arg3 startDate:(id*)arg4 endDate:(id*)arg5 ;
-(void)_updateNavigationTitleView;
-(void)setSearchGridDataSource:(PUSearchGridDataSource *)arg1 ;
-(BOOL)pu_handleSecondTabTap;
-(PUSearchGridDataSource *)searchGridDataSource;
-(long long)oneUpPresentationOrigin;
-(long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg1 ;
-(void)didTapHeaderView:(id)arg1 ;
-(id)_subtitle;
@end

