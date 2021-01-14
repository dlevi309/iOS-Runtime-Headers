/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <ShareSheet/UIMailActivity.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/PLVideoRemakerDelegate.h>
#import <libobjc.A.dylib/PXMomentShareSuggestionHandlingActivity.h>

@protocol PXActivityItemSourceController;
@class UIViewController, PHAsset, MFMailComposeViewController, PLUIEditVideoViewController, PLProgressView, PLVideoRemaker, NSString;

@interface PUMailActivity : UIMailActivity <MFMailComposeViewControllerDelegate, PLVideoRemakerDelegate, PXMomentShareSuggestionHandlingActivity> {

	UIViewController* _referenceViewController;
	PHAsset* _videoAssetBeingTrimmed;
	MFMailComposeViewController* _mailComposeController;
	PLUIEditVideoViewController* _editVideoViewController;
	PLProgressView* _remakerProgressView;
	PLVideoRemaker* _videoRemaker;
	/*^block*/id _remakerCompletionHandler;
	id _strongSelf;
	BOOL _isSharingSingleVideo;
	BOOL _didCheckMailDropAvailable;
	BOOL _isMailDropAvailable;
	BOOL __remakerWasCancelled;
	id<PXActivityItemSourceController> _itemSourceController;
	NSString* _transcodedVideoFilePath;

}

@property (assign,setter=_setRemakerWasCancelled:,nonatomic) BOOL _remakerWasCancelled;                   //@synthesize _remakerWasCancelled=__remakerWasCancelled - In the implementation block
@property (nonatomic,copy) NSString * transcodedVideoFilePath;                                            //@synthesize transcodedVideoFilePath=_transcodedVideoFilePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXActivityItemSourceController> itemSourceController;              //@synthesize itemSourceController=_itemSourceController - In the implementation block
+(BOOL)isMailDropEnabled;
+(void)openEmailAccountPrefs;
+(id)_momentShareLinkSubjectForMomentShare:(id)arg1 ;
+(id)_momentShareLinkActivityItemsForURL:(id)arg1 momentShare:(id)arg2 ;
+(id)_momentShareLinkPrompt;
+(BOOL)canPerformActivityWithTotalCount:(unsigned long long)arg1 assetMediaTypeCount:(PXAssetMediaTypeCount)arg2 ;
+(id)_momentShareLinkTitleForMomentShare:(id)arg1 ;
+(id)_expirationStringForMomentShare:(id)arg1 ;
+(BOOL)allowedToModifyEmailAccounts;
+(BOOL)canPerformActivityAsIndividualItemsInSourceController:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(BOOL)_isMailDropEnabled;
-(void)cancelRemaking;
-(void)_pu_cleanup;
-(void)_cleanupRemaker;
-(void)videoRemakerDidBeginRemaking:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(void)_showTrimViewControllerForVideo:(id)arg1 maximumTrimDuration:(double)arg2 trimButtonTitle:(id)arg3 ;
-(void)_transcodeAndSendVideo:(id)arg1 ;
-(BOOL)_showTrimViewControllerIfNeededForVideoAsset:(id)arg1 ;
-(void)_remakeAndSendVideoAsset:(id)arg1 withTrimStartTime:(double)arg2 endTime:(double)arg3 ;
-(void)remakeVideoAsset:(id)arg1 withTrimStartTime:(double)arg2 endTime:(double)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_removeTempVideoRemakerFile;
-(void)_composeMailForVideo:(id)arg1 trimmedFilePath:(id)arg2 ;
-(BOOL)_momentShareLinkDidFail;
-(BOOL)_canPerformWithLink;
-(BOOL)_canPerformForIndividualAssetsWithActivityItems:(id)arg1 ;
-(void)_prepareWithMomentShareLink:(id)arg1 ;
-(BOOL)_remakerWasCancelled;
-(void)_setRemakerWasCancelled:(BOOL)arg1 ;
-(NSString *)transcodedVideoFilePath;
-(void)setTranscodedVideoFilePath:(NSString *)arg1 ;
-(id)mailComposeViewController;
-(void)activityDidFinish:(BOOL)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)editVideoViewControllerDidCancel:(id)arg1 ;
-(id<PXActivityItemSourceController>)itemSourceController;
-(void)setItemSourceController:(id<PXActivityItemSourceController>)arg1 ;
-(void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)dealloc;
-(id)activityViewController;
@end

