/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/_SFBookmarkInfoViewControllerDelegate.h>

@protocol _SFSingleBookmarkNavigationControllerDelegate;
@class _SFBookmarkInfoViewController, WebBookmarkCollection, NSString;

@interface _SFSingleBookmarkNavigationController : UINavigationController <_SFBookmarkInfoViewControllerDelegate> {

	_SFBookmarkInfoViewController* _infoViewController;
	WebBookmarkCollection* _collection;
	BOOL _delegateNotifiedOfResult;
	BOOL _bookmarkCollectionLocked;
	id<_SFSingleBookmarkNavigationControllerDelegate> _bookmarkNavDelegate;

}

@property (assign,nonatomic,__weak) id<_SFSingleBookmarkNavigationControllerDelegate> bookmarkNavDelegate;              //@synthesize bookmarkNavDelegate=_bookmarkNavDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCollection:(id)arg1 ;
-(id)_lastSelectedFolder;
-(id)_initWithBookmark:(id)arg1 childBookmarks:(id)arg2 inCollection:(id)arg3 addingBookmark:(BOOL)arg4 toFavorites:(BOOL)arg5 ;
-(void)_releaseBookmarkLockIfNeeded;
-(void)bookmarkInfoViewController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(id<_SFSingleBookmarkNavigationControllerDelegate>)bookmarkNavDelegate;
-(BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1 ;
-(BOOL)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg1 ;
-(id)initWithBookmark:(id)arg1 inCollection:(id)arg2 ;
-(id)initWithFolderOfBookmarks:(id)arg1 inCollection:(id)arg2 ;
-(id)initForAddingToFavoritesInCollection:(id)arg1 ;
-(id)addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentBookmark:(id)arg3 ;
-(BOOL)prepareForPresentationForAddingBookmark:(BOOL)arg1 ;
-(void)setBookmarkNavDelegate:(id<_SFSingleBookmarkNavigationControllerDelegate>)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dealloc;
@end

