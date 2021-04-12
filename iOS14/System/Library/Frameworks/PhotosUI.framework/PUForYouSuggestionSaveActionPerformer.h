/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUForYouSuggestionActionPerformer.h>

@interface PUForYouSuggestionSaveActionPerformer : PUForYouSuggestionActionPerformer {

	BOOL _isReverting;

}

@property (nonatomic,readonly) BOOL isReverting;              //@synthesize isReverting=_isReverting - In the implementation block
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isReverting;
-(id)initWithAsset:(id)arg1 isReverting:(BOOL)arg2 ;
-(void)_handleSuccess:(BOOL)arg1 ;
-(void)_performLoopingVideoSaveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performLivePhotoSaveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performImageSaveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateSuggestionState;
-(void)_displayToast;
-(void)_displayFailureAlert;
-(id)initWithAsset:(id)arg1 ;
-(void)_dismissPresentedViewController:(id)arg1 ;
@end

