/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_SFSingleBookmarkNavigationController *)bookmarkNavigationController;
-(void)addBookmarkNavController:(id)arg1 didFinishWithResult:(BOOL)arg2 bookmark:(id)arg3 ;
-(BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1 ;
-(id)_systemImageName;
-(id)_embeddedActivityViewController;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityViewController;
@end

