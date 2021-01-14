/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFReaderControllerDelegate <NSObject,WKUIDelegatePrivate>
@optional
-(id)readerURLForReaderController:(id)arg1;
-(void)createReaderWebViewForReaderController:(id)arg1;
-(void)readerController:(id)arg1 didDeactivateReaderWithMode:(unsigned long long)arg2;
-(void)readerController:(id)arg1 didDetermineReaderAvailability:(id)arg2 dueTo:(long long)arg3;
-(void)readerController:(id)arg1 didSetReaderConfiguration:(id)arg2;
-(void)readerController:(id)arg1 didCollectReadingListItemInfo:(id)arg2 bookmarkID:(id)arg3;
-(void)readerController:(id)arg1 didCollectReaderContentForMail:(id)arg2;
-(void)readerController:(id)arg1 didCollectArticleContent:(id)arg2;
-(void)readerController:(id)arg1 didPrepareReaderContentForPrinting:(id)arg2;
-(void)readerController:(id)arg1 contentDidBecomeReadyWithDetectedLanguage:(id)arg2;
-(void)readerController:(id)arg1 didExtractArticleText:(id)arg2 withMetadata:(id)arg3;
-(void)readerController:(id)arg1 didTwoFingerTapLinkInReaderWithContext:(id)arg2;
-(void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2;
-(void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;

@end

