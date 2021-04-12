/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PLCloudCommentsChangeObserver.h>
#import <libobjc.A.dylib/PUPhotoCommentEntryViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol PUCommentsTableDataControllerDelegate;
@class NSCache, PUPhotoCommentEntryView, UITableView, PHAsset, PLManagedAsset, PLCloudSharedComment, NSString;

@interface PUCommentsTableDataController : NSObject <PLCloudCommentsChangeObserver, PUPhotoCommentEntryViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	NSCache* _commentsHeightCache;
	PUPhotoCommentEntryView* _entryView;
	BOOL _hasPendingChanges;
	BOOL _editing;
	BOOL _shouldUseCompactCommentSeparators;
	UITableView* _tableView;
	PHAsset* _asset;
	id<PUCommentsTableDataControllerDelegate> _delegate;
	PLManagedAsset* _managedAsset;
	PLCloudSharedComment* _justInsertedComment;

}

@property (nonatomic,retain) PLManagedAsset * managedAsset;                                          //@synthesize managedAsset=_managedAsset - In the implementation block
@property (nonatomic,retain) PLCloudSharedComment * justInsertedComment;                             //@synthesize justInsertedComment=_justInsertedComment - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) PHAsset * asset;                                                        //@synthesize asset=_asset - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                          //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL shouldUseCompactCommentSeparators;                                 //@synthesize shouldUseCompactCommentSeparators=_shouldUseCompactCommentSeparators - In the implementation block
@property (assign,nonatomic,__weak) id<PUCommentsTableDataControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double minimumHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setAsset:(PHAsset *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)init;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id<PUCommentsTableDataControllerDelegate>)delegate;
-(UITableView *)tableView;
-(PHAsset *)asset;
-(double)minimumHeight;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)isEditing;
-(id)_commentText;
-(void)setDelegate:(id<PUCommentsTableDataControllerDelegate>)arg1 ;
-(id)initWithTableView:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(PLManagedAsset *)managedAsset;
-(BOOL)photoCommentEntryViewShouldEndEditing:(id)arg1 ;
-(void)photoCommentEntryViewDidBeginEditing:(id)arg1 ;
-(void)photoCommentEntryViewHeightDidChange:(id)arg1 ;
-(void)photoCommentEntryViewWillBeginEditing:(id)arg1 ;
-(void)photoCommentEntryViewDidEndEditing:(id)arg1 ;
-(void)setManagedAsset:(PLManagedAsset *)arg1 ;
-(void)setShouldUseCompactCommentSeparators:(BOOL)arg1 ;
-(void)_updateFirstResponder;
-(BOOL)_isAssetOwnerSectionVisible;
-(long long)_smileCommentSection;
-(long long)_assetOwnerCommentSection;
-(long long)_postCommentSection;
-(long long)_textCommentSection;
-(id)_currentEntryView;
-(void)_scrollToComment:(id)arg1 animated:(BOOL)arg2 ;
-(double)_heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3 ;
-(void)_postCommentWithText:(id)arg1 ;
-(void)_fontCacheDidChange:(id)arg1 ;
-(BOOL)_canPostCommentWithText:(id)arg1 localizedFailureDescription:(id*)arg2 ;
-(void)_validateAndPostComment:(id)arg1 ;
-(BOOL)shouldUseCompactCommentSeparators;
-(PLCloudSharedComment *)justInsertedComment;
-(void)setJustInsertedComment:(PLCloudSharedComment *)arg1 ;
-(void)cloudCommentsDidChange:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end

