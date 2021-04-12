/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXPeopleStripCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/PXPeopleDataSourceDelegate.h>
#import <libobjc.A.dylib/PXWidget.h>

@protocol PXWidgetDelegate, PXWidgetUnlockDelegate;
@class PXPhotosDetailsContext, PXWidgetSpec, PXPeopleStripCollectionViewController, PXSharingSuggestionDataSource, NSString, PXTilingController, PXSectionedSelectionManager;

@interface PXSharingSuggestionWidget : NSObject <PXPeopleStripCollectionViewControllerDelegate, PXPeopleDataSourceDelegate, PXWidget> {

	BOOL _userInteractionEnabled;
	id<PXWidgetDelegate> _widgetDelegate;
	PXPhotosDetailsContext* _context;
	PXWidgetSpec* _spec;
	long long _contentViewAnchoringType;
	id<PXWidgetUnlockDelegate> _widgetUnlockDelegate;
	PXPeopleStripCollectionViewController* _collectionViewController;
	PXSharingSuggestionDataSource* _dataSource;
	unsigned long long _options;
	unsigned long long _sharingStream;
	double _cellMinInteritemSpacing;
	double _cellMinLineSpacing;
	double _targetPrefetchWidth;
	CGSize _contentSize;
	CGSize _cellSize;

}

@property (nonatomic,retain) PXPeopleStripCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,retain) PXSharingSuggestionDataSource * dataSource;                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long options;                                                    //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long sharingStream;                                              //@synthesize sharingStream=_sharingStream - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                            //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) CGSize cellSize;                                                               //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) double cellMinInteritemSpacing;                                                //@synthesize cellMinInteritemSpacing=_cellMinInteritemSpacing - In the implementation block
@property (assign,nonatomic) double cellMinLineSpacing;                                                     //@synthesize cellMinLineSpacing=_cellMinLineSpacing - In the implementation block
@property (assign,nonatomic) double targetPrefetchWidth;                                                    //@synthesize targetPrefetchWidth=_targetPrefetchWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate;                                    //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;                        //@synthesize widgetUnlockDelegate=_widgetUnlockDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetEditingDelegate> widgetEditingDelegate; 
@property (nonatomic,retain) PXPhotosDetailsContext * context;                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PXWidgetSpec * spec;                                                           //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) BOOL hasContentForCurrentInput; 
@property (nonatomic,readonly) double extraSpaceNeededAtContentBottom; 
@property (nonatomic,readonly) BOOL hasLoadedContentData; 
@property (nonatomic,readonly) NSObject*<PXAnonymousView> contentView; 
@property (nonatomic,readonly) long long contentViewAnchoringType;                                          //@synthesize contentViewAnchoringType=_contentViewAnchoringType - In the implementation block
@property (nonatomic,readonly) PXTilingController * contentTilingController; 
@property (nonatomic,readonly) long long contentLayoutStyle; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * localizedCaption; 
@property (nonatomic,readonly) NSString * localizedDisclosureTitle; 
@property (nonatomic,readonly) BOOL allowUserInteractionWithSubtitle; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled;                   //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL supportsSelection; 
@property (assign,getter=isSelecting,nonatomic) BOOL selecting; 
@property (nonatomic,readonly) BOOL supportsFaceMode; 
@property (assign,getter=isFaceModeEnabled,nonatomic) BOOL faceModeEnabled; 
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager; 
@property (nonatomic,readonly) BOOL wantsFocus; 
@property (nonatomic,readonly) BOOL isInEditMode; 
@property (assign,nonatomic) CGSize maxVisibleSizeInEditMode; 
-(void)setContentSize:(CGSize)arg1 ;
-(NSString *)localizedTitle;
-(void)setSpec:(PXWidgetSpec *)arg1 ;
-(id)traitCollection;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(void)setSharingStream:(unsigned long long)arg1 ;
-(CGSize)contentSize;
-(unsigned long long)options;
-(CGSize)cellSize;
-(PXSharingSuggestionDataSource *)dataSource;
-(PXPhotosDetailsContext *)context;
-(void)setOptions:(unsigned long long)arg1 ;
-(PXWidgetSpec *)spec;
-(unsigned long long)sharingStream;
-(void)setDataSource:(PXSharingSuggestionDataSource *)arg1 ;
-(void)setCollectionViewController:(PXPeopleStripCollectionViewController *)arg1 ;
-(void)peopleDataSourceMembersChanged:(id)arg1 ;
-(CGSize)sizeForItem;
-(PXPeopleStripCollectionViewController *)collectionViewController;
-(void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2 ;
-(void)memberTappedAtIndexPath:(id)arg1 forPeopleStripController:(id)arg2 ;
-(id)initWithSharingStream:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)peopleDataSource:(id)arg1 didAddMembersAtIndexPaths:(id)arg2 ;
-(void)peopleDataSource:(id)arg1 didRemoveMembersAtIndexPaths:(id)arg2 ;
-(void)peopleDataSource:(id)arg1 didUpdateMembersAtIndexPaths:(id)arg2 ;
-(void)_prepareDataSource;
-(UIEdgeInsets)_realContentInset;
-(void)_loadContainerView;
-(BOOL)_calculateLayoutInfosForWidth:(double)arg1 cellSize:(CGSize*)arg2 interitemSpacing:(double*)arg3 ;
-(CGSize)_sizeForItemWithWidth:(double)arg1 withInterItemSpacing:(double)arg2 ;
-(void)setCellSize:(CGSize)arg1 ;
-(UIEdgeInsets)sectionInset;
-(unsigned long long)_numberOfVisibleFacesForWidth:(double)arg1 ;
-(void)_resetControllerLayoutInfosForWidth:(double)arg1 ;
-(double)cellMinInteritemSpacing;
-(void)setCellMinInteritemSpacing:(double)arg1 ;
-(double)cellMinLineSpacing;
-(void)setCellMinLineSpacing:(double)arg1 ;
-(double)targetPrefetchWidth;
-(void)setTargetPrefetchWidth:(double)arg1 ;
-(void)contentSizeCategoryChanged:(id)arg1 ;
-(NSObject*<PXAnonymousView>)contentView;
-(double)minimumLineSpacing;
-(double)minimumInteritemSpacing;
-(double)preferredContentHeightForWidth:(double)arg1 ;
-(void)loadContentData;
-(void)unloadContentData;
-(id<PXWidgetDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id<PXWidgetDelegate>)arg1 ;
-(id<PXWidgetUnlockDelegate>)widgetUnlockDelegate;
-(void)setWidgetUnlockDelegate:(id<PXWidgetUnlockDelegate>)arg1 ;
-(BOOL)hasContentForCurrentInput;
-(long long)contentViewAnchoringType;
-(void)setContext:(PXPhotosDetailsContext *)arg1 ;
@end

