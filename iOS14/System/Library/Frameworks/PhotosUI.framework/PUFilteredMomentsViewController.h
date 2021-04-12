/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotosGridViewController.h>
#import <libobjc.A.dylib/PUPhotosSectionHeaderViewDelegate.h>
#import <libobjc.A.dylib/PUFilteredMomentsDataSourceDelegate.h>

@class PUFilteredMomentsDataSource, NSString;

@interface PUFilteredMomentsViewController : PUPhotosGridViewController <PUPhotosSectionHeaderViewDelegate, PUFilteredMomentsDataSourceDelegate> {

	PUFilteredMomentsDataSource* _filteredMomentsDataSource;
	NSString* _emptyPlaceholderText;
	long long _gridPresentationContext;

}

@property (nonatomic,retain) PUFilteredMomentsDataSource * filteredMomentsDataSource;              //@synthesize filteredMomentsDataSource=_filteredMomentsDataSource - In the implementation block
@property (nonatomic,retain) NSString * emptyPlaceholderText;                                      //@synthesize emptyPlaceholderText=_emptyPlaceholderText - In the implementation block
@property (assign,nonatomic) long long gridPresentationContext;                                    //@synthesize gridPresentationContext=_gridPresentationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)headerView:(id)arg1 actionButtonPressed:(id)arg2 ;
-(void)filteredMomentsDataSourceHasPendingChanges:(id)arg1 ;
-(id)newGridLayout;
-(void)_reloadVisibleMomentHeaders;
-(void)setFilteredMomentsDataSource:(PUFilteredMomentsDataSource *)arg1 ;
-(id)newEmptyPlaceholderView;
-(BOOL)allowSlideshowButton;
-(PUFilteredMomentsDataSource *)filteredMomentsDataSource;
-(void)_getDataForVisualSection:(long long)arg1 hasActionButton:(BOOL*)arg2 actionButtonTitle:(id*)arg3 hasDisclosure:(BOOL*)arg4 locations:(id*)arg5 title:(id*)arg6 startDate:(id*)arg7 endDate:(id*)arg8 ;
-(void)_configureSectionHeaderView:(id)arg1 section:(unsigned long long)arg2 ;
-(void)setSelected:(BOOL)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(BOOL)arg4 ;
-(NSString *)emptyPlaceholderText;
-(void)setEmptyPlaceholderText:(NSString *)arg1 ;
-(long long)gridPresentationContext;
-(void)setGridPresentationContext:(long long)arg1 ;
-(double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2 ;
-(double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)oneUpPresentationOrigin;
-(void)didTapHeaderView:(id)arg1 ;
@end

