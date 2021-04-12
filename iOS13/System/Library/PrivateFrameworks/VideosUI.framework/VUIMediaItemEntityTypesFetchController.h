/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaLibraryFetchController.h>

@protocol VUIMediaItemEntityTypesFetchControllerDelegate;
@class VUIMediaItemEntityTypesFetchResponse;

@interface VUIMediaItemEntityTypesFetchController : VUIMediaLibraryFetchController {

	id<VUIMediaItemEntityTypesFetchControllerDelegate> _delegate;
	VUIMediaItemEntityTypesFetchResponse* _response;

}

@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponse * response;                                 //@synthesize response=_response - In the implementation block
@property (assign,nonatomic,__weak) id<VUIMediaItemEntityTypesFetchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VUIMediaItemEntityTypesFetchControllerDelegate>)delegate;
-(void)setDelegate:(id<VUIMediaItemEntityTypesFetchControllerDelegate>)arg1 ;
-(VUIMediaItemEntityTypesFetchResponse *)response;
-(void)setResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
-(void)cancelFetch;
-(void)_notifyDelegateWithBlock:(/*^block*/id)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(BOOL)_updateResponseWithResult:(id)arg1 replaceContentsOnNilChanges:(BOOL)arg2 ;
-(id)_fetchOperationForFetchReason:(long long)arg1 ;
-(void)_didCompleteFetchOperation:(id)arg1 ;
-(void)_handleInitialFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2 ;
-(void)_handleContentsChangeFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2 ;
-(void)_notifyFetchDidCompleteWithResult:(id)arg1 ;
-(void)_notifyFetchDidFailWithError:(id)arg1 ;
@end

