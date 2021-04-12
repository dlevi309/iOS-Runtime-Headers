/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/NTKFaceObserver.h>
#import <libobjc.A.dylib/NTKFaceCollectionObserver.h>
#import <libobjc.A.dylib/NTKCFaceDetailDescriptionSectionDelegate.h>
#import <libobjc.A.dylib/NTKCFaceDetailEditOptionSectionDelegate.h>
#import <libobjc.A.dylib/NTKCFaceDetailPhotosSectionDelegate.h>
#import <libobjc.A.dylib/NTKCFaceDetailComplicationSectionDelegate.h>
#import <libobjc.A.dylib/NTKCFaceDetailOtherSectionDelegate.h>
#import <libobjc.A.dylib/NTKCFaceDetailActionSectionDelegate.h>
#import <libobjc.A.dylib/NTKCFaceDetailDataSourcesSectionDelegate.h>
#import <libobjc.A.dylib/NTKCTableViewProviding.h>

@protocol NTKCFaceDetailViewControllerDelegate;
@class UITableView, NTKFace, NTKFaceCollection, NTKCompanionFaceViewController, NSArray, _NTKCDetailHeaderView, UILabel, _NTKCDetailActionButton, UIActivityIndicatorView, UIView, NSMutableArray, NTKCFaceDetailDescriptionSectionController, NTKCFaceDetailPhotosSectionController, NTKCFaceDetailKaleidoscopeContentSectionController, NTKCFaceDetailKaleidoscopeStyleSectionController, NTKCFaceDetailOtherSectionController, UITableViewCell, NTKCFaceContainerView, NSString;

@interface NTKCFaceDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, NTKFaceObserver, NTKFaceCollectionObserver, NTKCFaceDetailDescriptionSectionDelegate, NTKCFaceDetailEditOptionSectionDelegate, NTKCFaceDetailPhotosSectionDelegate, NTKCFaceDetailComplicationSectionDelegate, NTKCFaceDetailOtherSectionDelegate, NTKCFaceDetailActionSectionDelegate, NTKCFaceDetailDataSourcesSectionDelegate, NTKCTableViewProviding> {

	BOOL _shared;
	BOOL _inGallery;
	BOOL _faceHasBeenEdited;
	NTKFace* _face;
	id<NTKCFaceDetailViewControllerDelegate> _delegate;
	NTKFaceCollection* _library;
	NTKCompanionFaceViewController* _faceVC;
	NSArray* _externalAssets;
	double _intrinsicHeaderHeight;
	_NTKCDetailHeaderView* _headerView;
	UILabel* _faceName;
	_NTKCDetailActionButton* _addButton;
	UIActivityIndicatorView* _addSpinner;
	UIView* _headerSeparator;
	UITableView* _tableView;
	NSMutableArray* _currentSections;
	NTKCFaceDetailDescriptionSectionController* _descriptionSection;
	NSMutableArray* _editOptionSections;
	NTKCFaceDetailPhotosSectionController* _photosSection;
	NTKCFaceDetailKaleidoscopeContentSectionController* _kaleidoscopeContentSection;
	NTKCFaceDetailKaleidoscopeStyleSectionController* _kaleidoscopeStyleSection;
	NTKCFaceDetailOtherSectionController* _otherSection;
	/*^block*/id _selectionFinishedHandler;
	UITableViewCell* _editOptionToMakeFullyVisible;
	NTKCFaceContainerView* _faceContainer;
	CGSize _headerFaceSize;

}

@property (nonatomic,retain) NTKFaceCollection * library;                                                                  //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) NTKFace * face;                                                                               //@synthesize face=_face - In the implementation block
@property (nonatomic,retain) NTKCompanionFaceViewController * faceVC;                                                      //@synthesize faceVC=_faceVC - In the implementation block
@property (assign,nonatomic) CGSize headerFaceSize;                                                                        //@synthesize headerFaceSize=_headerFaceSize - In the implementation block
@property (assign,nonatomic) BOOL inGallery;                                                                               //@synthesize inGallery=_inGallery - In the implementation block
@property (nonatomic,copy) NSArray * externalAssets;                                                                       //@synthesize externalAssets=_externalAssets - In the implementation block
@property (assign,nonatomic) double intrinsicHeaderHeight;                                                                 //@synthesize intrinsicHeaderHeight=_intrinsicHeaderHeight - In the implementation block
@property (nonatomic,retain) _NTKCDetailHeaderView * headerView;                                                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UILabel * faceName;                                                                           //@synthesize faceName=_faceName - In the implementation block
@property (nonatomic,retain) _NTKCDetailActionButton * addButton;                                                          //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * addSpinner;                                                         //@synthesize addSpinner=_addSpinner - In the implementation block
@property (nonatomic,retain) UIView * headerSeparator;                                                                     //@synthesize headerSeparator=_headerSeparator - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentSections;                                                             //@synthesize currentSections=_currentSections - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailDescriptionSectionController * descriptionSection;                              //@synthesize descriptionSection=_descriptionSection - In the implementation block
@property (nonatomic,retain) NSMutableArray * editOptionSections;                                                          //@synthesize editOptionSections=_editOptionSections - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailPhotosSectionController * photosSection;                                        //@synthesize photosSection=_photosSection - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailKaleidoscopeContentSectionController * kaleidoscopeContentSection;              //@synthesize kaleidoscopeContentSection=_kaleidoscopeContentSection - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailKaleidoscopeStyleSectionController * kaleidoscopeStyleSection;                  //@synthesize kaleidoscopeStyleSection=_kaleidoscopeStyleSection - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailOtherSectionController * otherSection;                                          //@synthesize otherSection=_otherSection - In the implementation block
@property (nonatomic,copy) id selectionFinishedHandler;                                                                    //@synthesize selectionFinishedHandler=_selectionFinishedHandler - In the implementation block
@property (nonatomic,retain) UITableViewCell * editOptionToMakeFullyVisible;                                               //@synthesize editOptionToMakeFullyVisible=_editOptionToMakeFullyVisible - In the implementation block
@property (nonatomic,readonly) BOOL faceHasBeenEdited;                                                                     //@synthesize faceHasBeenEdited=_faceHasBeenEdited - In the implementation block
@property (nonatomic,retain) NTKCFaceContainerView * faceContainer;                                                        //@synthesize faceContainer=_faceContainer - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailViewControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shared;                                                                                  //@synthesize shared=_shared - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITableView * ntk_tableView; 
-(void)dealloc;
-(id<NTKCFaceDetailViewControllerDelegate>)delegate;
-(void)setDelegate:(id<NTKCFaceDetailViewControllerDelegate>)arg1 ;
-(void)setFace:(NTKFace *)arg1 ;
-(NTKFace *)face;
-(UITableView *)tableView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(_NTKCDetailHeaderView *)headerView;
-(void)setHeaderView:(_NTKCDetailHeaderView *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewSafeAreaInsetsDidChange;
-(BOOL)_isEditable;
-(NTKFaceCollection *)library;
-(BOOL)shared;
-(void)setShared:(BOOL)arg1 ;
-(void)setLibrary:(NTKFaceCollection *)arg1 ;
-(_NTKCDetailActionButton *)addButton;
-(void)_addTapped;
-(void)_updateAddButton;
-(void)setAddButton:(_NTKCDetailActionButton *)arg1 ;
-(UILabel *)faceName;
-(void)setFaceName:(UILabel *)arg1 ;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceConfigurationDidChange:(id)arg1 ;
-(void)faceResourceDirectoryDidChange:(id)arg1 ;
-(void)face:(id)arg1 didChangeOptionsForEditMode:(long long)arg2 ;
-(void)dataSourcesSectionDidFinishLoading:(id)arg1 ;
-(void)actionSectionDidSelect:(id)arg1 ;
-(void)actionSectionDidDelete:(id)arg1 ;
-(id)initWithFace:(id)arg1 inGallery:(BOOL)arg2 externalAssets:(id)arg3 ;
-(void)setInGallery:(BOOL)arg1 ;
-(void)setFaceVC:(NTKCompanionFaceViewController *)arg1 ;
-(void)setExternalAssets:(NSArray *)arg1 ;
-(void)_loadLibrary;
-(void)setHeaderFaceSize:(CGSize)arg1 ;
-(void)setFaceContainer:(NTKCFaceContainerView *)arg1 ;
-(void)setAddSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setHeaderSeparator:(UIView *)arg1 ;
-(void)setCurrentSections:(NSMutableArray *)arg1 ;
-(void)setDescriptionSection:(NTKCFaceDetailDescriptionSectionController *)arg1 ;
-(void)setEditOptionSections:(NSMutableArray *)arg1 ;
-(id)_sectionForEditOptionCollection:(id)arg1 ;
-(void)_ensureOtherSection;
-(void)_faceDidChange;
-(void)setEditOptionToMakeFullyVisible:(UITableViewCell *)arg1 ;
-(void)setPhotosSection:(NTKCFaceDetailPhotosSectionController *)arg1 ;
-(void)setKaleidoscopeContentSection:(NTKCFaceDetailKaleidoscopeContentSectionController *)arg1 ;
-(void)setKaleidoscopeStyleSection:(NTKCFaceDetailKaleidoscopeStyleSectionController *)arg1 ;
-(void)setOtherSection:(NTKCFaceDetailOtherSectionController *)arg1 ;
-(void)_setFaceHasBeenEdited;
-(id)_facesUnsupportedByDevice:(id)arg1 ;
-(BOOL)_hasRemovedSystemApp;
-(void)_addFace;
-(void)_addFaceEndedForFace:(id)arg1 ;
-(BOOL)_cellIsHiddenBehindHeader:(id)arg1 ;
-(void)_faceChangedOptionsForEditMode:(long long)arg1 ;
-(void)_faceDidChangeResourceDirectory;
-(BOOL)_isEditOptionFullyVisible:(id)arg1 ;
-(void)_setEditOption:(id)arg1 forMode:(long long)arg2 ;
-(id)_pruneRemovedOrRestrictedComplications:(id)arg1 ;
-(id)_pruneComplicationsNotAvailableOnGizmo:(id)arg1 ;
-(void)_setComplication:(id)arg1 forSlot:(id)arg2 ;
-(void)descriptionSection:(id)arg1 didExpand:(BOOL)arg2 ;
-(void)editOptionSection:(id)arg1 didSelectOptionAtIndex:(long long)arg2 ;
-(void)editOptionSection:(id)arg1 didSelectActionForOptionAtIndex:(long long)arg2 ;
-(void)photoSectionDidUpdate:(id)arg1 ;
-(id)complicationSection:(id)arg1 allowedComplicationsForSlot:(id)arg2 ;
-(void)complicationSection:(id)arg1 didChangeToComplication:(id)arg2 forSlot:(id)arg3 ;
-(void)otherSection:(id)arg1 didToggleMonogram:(id)arg2 forSlot:(id)arg3 ;
-(void)otherSectionDidSelectMonogramEdit:(id)arg1 ;
-(void)otherSection:(id)arg1 didChangeShowSeconds:(id)arg2 forMode:(long long)arg3 ;
-(void)dataSourcesSection:(id)arg1 didChangeDataSources:(id)arg2 forMode:(long long)arg3 ;
-(UITableView *)ntk_tableView;
-(id)initWithFace:(id)arg1 ;
-(id)initWithFace:(id)arg1 externalAssets:(id)arg2 ;
-(id)initWithFace:(id)arg1 inGallery:(BOOL)arg2 ;
-(void)_reloadUpNextDataSourceSections;
-(NTKCompanionFaceViewController *)faceVC;
-(CGSize)headerFaceSize;
-(BOOL)inGallery;
-(NSArray *)externalAssets;
-(double)intrinsicHeaderHeight;
-(void)setIntrinsicHeaderHeight:(double)arg1 ;
-(UIActivityIndicatorView *)addSpinner;
-(UIView *)headerSeparator;
-(NSMutableArray *)currentSections;
-(NTKCFaceDetailDescriptionSectionController *)descriptionSection;
-(NSMutableArray *)editOptionSections;
-(NTKCFaceDetailPhotosSectionController *)photosSection;
-(NTKCFaceDetailKaleidoscopeContentSectionController *)kaleidoscopeContentSection;
-(NTKCFaceDetailKaleidoscopeStyleSectionController *)kaleidoscopeStyleSection;
-(NTKCFaceDetailOtherSectionController *)otherSection;
-(id)selectionFinishedHandler;
-(void)setSelectionFinishedHandler:(id)arg1 ;
-(UITableViewCell *)editOptionToMakeFullyVisible;
-(BOOL)faceHasBeenEdited;
-(NTKCFaceContainerView *)faceContainer;
@end

