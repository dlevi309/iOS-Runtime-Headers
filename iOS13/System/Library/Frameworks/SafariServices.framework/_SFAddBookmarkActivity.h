/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFActivity.h>
#import <libobjc.A.dylib/_SFSingleBookmarkNavigationControllerDelegate.h>

@class _SFSingleBookmarkNavigationController;

@interface _SFAddBookmarkActivity : _SFActivity <_SFSingleBookmarkNavigationControllerDelegate> {

	_SFSingleBookmarkNavigationController* _bookmarkNavigationController;

}

@property (nonatomic,readonly) _SFSingleBookmarkNavigationController * bookmarkNavigationController; 
-(id)activityType;
-(id)_systemImageName;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(id)_embeddedActivityViewController;
-(void)addBookmarkNavController:(id)arg1 didFinishWithResult:(BOOL)arg2 bookmark:(id)arg3 ;
-(BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1 ;
-(_SFSingleBookmarkNavigationController *)bookmarkNavigationController;
@end

