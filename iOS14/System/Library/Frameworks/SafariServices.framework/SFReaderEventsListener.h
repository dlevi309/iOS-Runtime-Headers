/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFReaderEventsListener <NSObject>
@required
-(void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2;
-(void)didCollectArticleContent:(id)arg1;
-(void)didDetermineReaderAvailabilityForDynamicCheck:(id)arg1;
-(void)contentDidBecomeReadyWithDetectedLanguage:(id)arg1;
-(void)didSetReaderConfiguration:(id)arg1;
-(void)readerTextWasExtracted:(id)arg1 withMetadata:(id)arg2 wasDeterminingAvailabilility:(BOOL)arg3;
-(void)didCollectReaderContentForMail:(id)arg1;
-(void)didPrepareReaderContentForPrinting:(id)arg1;
-(void)didDetermineReaderAvailability:(id)arg1;

@end

