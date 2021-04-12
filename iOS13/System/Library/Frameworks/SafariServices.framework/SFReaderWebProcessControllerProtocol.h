/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFReaderWebProcessControllerProtocol <NSObject>
@required
-(void)setConfiguration:(id)arg1;
-(void)setReaderIsActive:(BOOL)arg1;
-(void)prepareToTransitionToReader;
-(void)didCreateReaderPageContextHandle:(id)arg1;
-(void)loadNewReaderArticle;
-(void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(BOOL)arg3;
-(void)setInitalArticleScrollPositionAsDictionary:(id)arg1;
-(void)collectReadingListItemInfoWithBookmarkID:(id)arg1;
-(void)collectReaderContentForMail;
-(void)activateFont:(id)arg1;
-(void)prepareReaderContentForPrinting;
-(void)didFinishPresentationUpdateAfterTransitioningToReader;
-(void)checkReaderAvailability;
-(void)collectArticleContent;

@end

