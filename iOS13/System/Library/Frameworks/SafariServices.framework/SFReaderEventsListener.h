/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFReaderEventsListener <NSObject>
@required
-(void)didDetermineReaderAvailability:(BOOL)arg1 dueToSameDocumentNavigation:(BOOL)arg2;
-(void)didDetermineReaderAvailabilityForDynamicCheck:(BOOL)arg1;
-(void)contentDidBecomeReadyWithDetectedLanguage:(id)arg1;
-(void)didSetReaderConfiguration:(id)arg1;
-(void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2;
-(void)didCollectReaderContentForMail:(id)arg1;
-(void)didPrepareReaderContentForPrinting:(id)arg1;
-(void)readerTextWasExtracted:(id)arg1 withMetadata:(id)arg2 wasDeterminingAvailabilility:(BOOL)arg3;
-(void)didCollectArticleContent:(id)arg1;

@end

