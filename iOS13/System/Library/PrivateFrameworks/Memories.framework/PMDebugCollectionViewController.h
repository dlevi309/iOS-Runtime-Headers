/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PMDebugCollectionViewControllerProtocol.h>

@class MiroMemory, MiroAutoEditController, Project, VEKProduction, VEKResult, NSArray, NSMutableDictionary, PHFetchResult, UIBarButtonItem, UIProgressView, UIAlertController, UIView, NSString;

@interface PMDebugCollectionViewController : UICollectionViewController <PMDebugCollectionViewControllerProtocol> {

	BOOL _isSaveMode;
	BOOL _textOnly;
	BOOL _hackReuseCell;
	BOOL _cancelled;
	BOOL _syncPreview;
	VEKProduction* _production;
	VEKResult* _result;
	unsigned long long _currentSortType;
	NSArray* _sortTitles;
	MiroAutoEditController* _autoEditController;
	NSMutableDictionary* _projectMoodNamedTransitions;
	PHFetchResult* _curatedAssets;
	UIBarButtonItem* _sortBarButton;
	UIProgressView* _progressView;
	UIAlertController* _alertController;
	UIView* _textContainerView;
	MiroMemory* _memory;
	Project* _project;

}

@property (assign,nonatomic) unsigned long long currentSortType;                             //@synthesize currentSortType=_currentSortType - In the implementation block
@property (nonatomic,retain) NSArray * sortTitles;                                           //@synthesize sortTitles=_sortTitles - In the implementation block
@property (nonatomic,retain) MiroAutoEditController * autoEditController;                    //@synthesize autoEditController=_autoEditController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * projectMoodNamedTransitions;              //@synthesize projectMoodNamedTransitions=_projectMoodNamedTransitions - In the implementation block
@property (assign,nonatomic) BOOL isSaveMode;                                                //@synthesize isSaveMode=_isSaveMode - In the implementation block
@property (assign,nonatomic) BOOL textOnly;                                                  //@synthesize textOnly=_textOnly - In the implementation block
@property (assign,nonatomic) BOOL hackReuseCell;                                             //@synthesize hackReuseCell=_hackReuseCell - In the implementation block
@property (nonatomic,retain) PHFetchResult * curatedAssets;                                  //@synthesize curatedAssets=_curatedAssets - In the implementation block
@property (assign) BOOL cancelled;                                                           //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * sortBarButton;                         //@synthesize sortBarButton=_sortBarButton - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                  //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                            //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) UIView * textContainerView;                                     //@synthesize textContainerView=_textContainerView - In the implementation block
@property (assign) BOOL syncPreview;                                                         //@synthesize syncPreview=_syncPreview - In the implementation block
@property (nonatomic,retain) MiroMemory * memory;                                            //@synthesize memory=_memory - In the implementation block
@property (nonatomic,retain) Project * project;                                              //@synthesize project=_project - In the implementation block
@property (nonatomic,retain) VEKProduction * production;                                     //@synthesize production=_production - In the implementation block
@property (nonatomic,retain) VEKResult * result;                                             //@synthesize result=_result - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VEKResult *)result;
-(MiroMemory *)memory;
-(BOOL)cancelled;
-(void)setResult:(VEKResult *)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(void)setCancelled:(BOOL)arg1 ;
-(void)done:(id)arg1 ;
-(void)setMemory:(MiroMemory *)arg1 ;
-(PHFetchResult *)curatedAssets;
-(void)setCuratedAssets:(PHFetchResult *)arg1 ;
-(void)setTextContainerView:(UIView *)arg1 ;
-(UIView *)textContainerView;
-(UIProgressView *)progressView;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(void)setSortTitles:(NSArray *)arg1 ;
-(NSArray *)sortTitles;
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(BOOL)textOnly;
-(Project *)project;
-(void)setCurrentSortType:(unsigned long long)arg1 ;
-(void)setSyncPreview:(BOOL)arg1 ;
-(UIBarButtonItem *)sortBarButton;
-(void)setProject:(Project *)arg1 ;
-(void)createDebugGraphics;
-(void)pickInfoAndAsset:(id*)arg1 asset:(id*)arg2 fromIndexPath:(id*)arg3 ;
-(BOOL)syncPreview;
-(void)closeMemoryTransition:(id)arg1 ;
-(void)presentAirDropControllerWithDebugString:(id)arg1 ;
-(id)requestedSongString;
-(id)logFeaturedPeopleInMemory;
-(id)replaceEmojiWithPrintName:(id)arg1 ;
-(void)showTextViewWith:(id)arg1 ;
-(NSMutableDictionary *)projectMoodNamedTransitions;
-(void)setProjectMoodNamedTransitions:(NSMutableDictionary *)arg1 ;
-(id)prettyTransitionNameFromID:(id)arg1 fromBlueprint:(id)arg2 ;
-(void)resetMemoryToCleanState:(id)arg1 ;
-(void)saveDebugPanelForMemory:(id)arg1 ;
-(void)showMemoryTransitions;
-(void)showScoreLog;
-(void)showTextVersion;
-(void)showProject;
-(id)makeEnhancedStringFromPlainOne:(id)arg1 ;
-(void)drawImageInContext:(id)arg1 andFrame:(CGRect)arg2 ;
-(void)drawSeperatingBorderInRect:(CGRect)arg1 withColor:(id)arg2 ;
-(id)makeEnhancedStringFromPlainOne:(id)arg1 size:(int)arg2 ;
-(unsigned long long)_getCurrentCountOfItems;
-(void)writeTextToImageContextWithSize:(CGSize)arg1 ;
-(void)writeTextToImageContextWithSize:(CGSize)arg1 andCell:(id)arg2 andLocation:(CGPoint)arg3 ;
-(id)createDebugPageWithInfoWithStartingIndex:(unsigned long long)arg1 andEndingIndex:(unsigned long long)arg2 ;
-(void)presentAirdropControllerWithDebugImageArray:(id)arg1 ;
-(MiroAutoEditController *)autoEditController;
-(void)bringUpActions:(id)arg1 ;
-(void)bringUpSortOptions:(id)arg1 ;
-(void)presentModelImageViewWithImage:(id)arg1 ;
-(unsigned long long)numberRowsWithCurrentCount;
-(void)presentAirdropControllerWithDebugImage:(id)arg1 ;
-(unsigned long long)currentSortType;
-(void)setAutoEditController:(MiroAutoEditController *)arg1 ;
-(BOOL)isSaveMode;
-(void)setIsSaveMode:(BOOL)arg1 ;
-(void)setTextOnly:(BOOL)arg1 ;
-(BOOL)hackReuseCell;
-(void)setHackReuseCell:(BOOL)arg1 ;
-(void)setSortBarButton:(UIBarButtonItem *)arg1 ;
@end

