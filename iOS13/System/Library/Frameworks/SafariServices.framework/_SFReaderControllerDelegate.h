/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFReaderControllerDelegate <NSObject,WKUIDelegatePrivate>
@optional
-(void)createReaderWebViewForReaderController:(id)arg1;
-(void)readerController:(id)arg1 didDeactivateReaderWithMode:(unsigned long long)arg2;
-(id)readerURLForReaderController:(id)arg1;
-(void)readerController:(id)arg1 didDetermineReaderAvailability:(BOOL)arg2 dueTo:(long long)arg3;
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

