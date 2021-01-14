/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFReaderWebProcessControllerProtocol <NSObject>
@required
-(void)didCreateReaderPageContextHandle:(id)arg1;
-(void)prepareReaderContentForPrinting;
-(void)prepareToTransitionToReader;
-(void)collectArticleContent;
-(void)loadNewReaderArticle;
-(void)collectReadingListItemInfoWithBookmarkID:(id)arg1;
-(void)didFinishPresentationUpdateAfterTransitioningToReader;
-(void)setInitalArticleScrollPositionAsDictionary:(id)arg1;
-(void)setReaderIsActive:(BOOL)arg1;
-(void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(BOOL)arg3;
-(void)checkReaderAvailability;
-(void)activateFont:(id)arg1;
-(void)setConfiguration:(id)arg1;
-(void)collectReaderContentForMail;

@end

