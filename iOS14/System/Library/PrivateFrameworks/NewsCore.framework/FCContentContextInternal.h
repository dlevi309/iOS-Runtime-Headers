/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCContentContextInternal.h>
@class FCArticleRecordSource, FCTagRecordSource, FCTagListRecordSource, FCChannelMembershipController, FCResourceRecordSource, FCArticleListRecordSource, FCPurchaseLookupRecordSource, FCForYouConfigRecordSource, FCWidgetSectionConfigRecordSource, FCIssueRecordSource, FCIssueListRecordSource, FCAudioConfigRecordSource, NSArray, FCFeedDatabase, FCCKContentDatabase, FCAVAssetDownloadManager;


@protocol FCContentContextInternal <NSObject,FCCacheFlushing>
@property (nonatomic,readonly) FCArticleRecordSource * articleRecordSource; 
@property (nonatomic,readonly) FCTagRecordSource * tagRecordSource; 
@property (nonatomic,readonly) FCTagListRecordSource * tagListRecordSource; 
@property (nonatomic,readonly) FCChannelMembershipController * channelMembershipController; 
@property (nonatomic,readonly) FCResourceRecordSource * resourceRecordSource; 
@property (nonatomic,readonly) FCArticleListRecordSource * articleListRecordSource; 
@property (nonatomic,readonly) FCPurchaseLookupRecordSource * purchaseLookupRecordSource; 
@property (nonatomic,readonly) FCForYouConfigRecordSource * forYouConfigRecordSource; 
@property (nonatomic,readonly) FCWidgetSectionConfigRecordSource * widgetSectionConfigRecordSource; 
@property (nonatomic,readonly) FCIssueRecordSource * issueRecordSource; 
@property (nonatomic,readonly) FCIssueListRecordSource * issueListRecordSource; 
@property (nonatomic,readonly) FCAudioConfigRecordSource * audioConfigRecordSource; 
@property (nonatomic,readonly) NSArray * recordSources; 
@property (readonly) FCFeedDatabase * feedDatabase; 
@property (nonatomic,readonly) FCCKContentDatabase * contentDatabase; 
@property (nonatomic,readonly) id<FCAssetKeyManagerType> assetKeyManager; 
@property (nonatomic,readonly) id<FCAVAssetFactoryType> avAssetFactory; 
@property (nonatomic,readonly) FCAVAssetDownloadManager * avAssetDownloadManager; 
@required
-(id<FCAVAssetFactoryType>)avAssetFactory;
-(FCFeedDatabase *)feedDatabase;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(FCArticleRecordSource *)articleRecordSource;
-(NSArray *)recordSources;
-(FCForYouConfigRecordSource *)forYouConfigRecordSource;
-(FCCKContentDatabase *)contentDatabase;
-(FCTagRecordSource *)tagRecordSource;
-(FCChannelMembershipController *)channelMembershipController;
-(FCAVAssetDownloadManager *)avAssetDownloadManager;
-(id<FCAssetKeyManagerType>)assetKeyManager;
-(FCIssueListRecordSource *)issueListRecordSource;
-(FCArticleListRecordSource *)articleListRecordSource;
-(FCWidgetSectionConfigRecordSource *)widgetSectionConfigRecordSource;
-(FCIssueRecordSource *)issueRecordSource;
-(FCResourceRecordSource *)resourceRecordSource;
-(FCAudioConfigRecordSource *)audioConfigRecordSource;
-(FCTagListRecordSource *)tagListRecordSource;

@end


@protocol FCAssetKeyManagerType, FCAVAssetFactoryType;
@class FCArticleRecordSource, FCTagRecordSource, FCTagListRecordSource, FCChannelMembershipController, FCResourceRecordSource, FCArticleListRecordSource, FCPurchaseLookupRecordSource, FCForYouConfigRecordSource, FCWidgetSectionConfigRecordSource, FCIssueRecordSource, FCIssueListRecordSource, FCAudioConfigRecordSource, NSArray, FCFeedDatabase, FCCKContentDatabase, FCAVAssetDownloadManager, NSString;

@interface FCContentContextInternal : NSObject <FCContentContextInternal> {

	FCArticleRecordSource* _articleRecordSource;
	FCTagRecordSource* _tagRecordSource;
	FCTagListRecordSource* _tagListRecordSource;
	FCChannelMembershipController* _channelMembershipController;
	FCResourceRecordSource* _resourceRecordSource;
	FCArticleListRecordSource* _articleListRecordSource;
	FCPurchaseLookupRecordSource* _purchaseLookupRecordSource;
	FCForYouConfigRecordSource* _forYouConfigRecordSource;
	FCWidgetSectionConfigRecordSource* _widgetSectionConfigRecordSource;
	FCIssueRecordSource* _issueRecordSource;
	FCIssueListRecordSource* _issueListRecordSource;
	FCAudioConfigRecordSource* _audioConfigRecordSource;
	FCFeedDatabase* _feedDatabase;
	FCCKContentDatabase* _contentDatabase;
	id<FCAssetKeyManagerType> _assetKeyManager;
	id<FCAVAssetFactoryType> _avAssetFactory;
	FCAVAssetDownloadManager* _avAssetDownloadManager;

}

@property (nonatomic,retain) FCArticleRecordSource * articleRecordSource;                                      //@synthesize articleRecordSource=_articleRecordSource - In the implementation block
@property (nonatomic,retain) FCTagRecordSource * tagRecordSource;                                              //@synthesize tagRecordSource=_tagRecordSource - In the implementation block
@property (nonatomic,retain) FCTagListRecordSource * tagListRecordSource;                                      //@synthesize tagListRecordSource=_tagListRecordSource - In the implementation block
@property (nonatomic,retain) FCChannelMembershipController * channelMembershipController;                      //@synthesize channelMembershipController=_channelMembershipController - In the implementation block
@property (nonatomic,retain) FCResourceRecordSource * resourceRecordSource;                                    //@synthesize resourceRecordSource=_resourceRecordSource - In the implementation block
@property (nonatomic,retain) FCArticleListRecordSource * articleListRecordSource;                              //@synthesize articleListRecordSource=_articleListRecordSource - In the implementation block
@property (nonatomic,retain) FCPurchaseLookupRecordSource * purchaseLookupRecordSource;                        //@synthesize purchaseLookupRecordSource=_purchaseLookupRecordSource - In the implementation block
@property (nonatomic,retain) FCForYouConfigRecordSource * forYouConfigRecordSource;                            //@synthesize forYouConfigRecordSource=_forYouConfigRecordSource - In the implementation block
@property (nonatomic,retain) FCWidgetSectionConfigRecordSource * widgetSectionConfigRecordSource;              //@synthesize widgetSectionConfigRecordSource=_widgetSectionConfigRecordSource - In the implementation block
@property (nonatomic,retain) FCIssueRecordSource * issueRecordSource;                                          //@synthesize issueRecordSource=_issueRecordSource - In the implementation block
@property (nonatomic,retain) FCIssueListRecordSource * issueListRecordSource;                                  //@synthesize issueListRecordSource=_issueListRecordSource - In the implementation block
@property (nonatomic,retain) FCAudioConfigRecordSource * audioConfigRecordSource;                              //@synthesize audioConfigRecordSource=_audioConfigRecordSource - In the implementation block
@property (retain) FCFeedDatabase * feedDatabase;                                                              //@synthesize feedDatabase=_feedDatabase - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * contentDatabase;                                            //@synthesize contentDatabase=_contentDatabase - In the implementation block
@property (nonatomic,retain) id<FCAssetKeyManagerType> assetKeyManager;                                        //@synthesize assetKeyManager=_assetKeyManager - In the implementation block
@property (nonatomic,retain) id<FCAVAssetFactoryType> avAssetFactory;                                          //@synthesize avAssetFactory=_avAssetFactory - In the implementation block
@property (nonatomic,retain) FCAVAssetDownloadManager * avAssetDownloadManager;                                //@synthesize avAssetDownloadManager=_avAssetDownloadManager - In the implementation block
@property (nonatomic,readonly) NSArray * recordSources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedDatabase:(FCFeedDatabase *)arg1 ;
-(id<FCAVAssetFactoryType>)avAssetFactory;
-(FCFeedDatabase *)feedDatabase;
-(void)setAvAssetDownloadManager:(FCAVAssetDownloadManager *)arg1 ;
-(id)init;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(FCArticleRecordSource *)articleRecordSource;
-(void)setWidgetSectionConfigRecordSource:(FCWidgetSectionConfigRecordSource *)arg1 ;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(void)setArticleListRecordSource:(FCArticleListRecordSource *)arg1 ;
-(void)setIssueRecordSource:(FCIssueRecordSource *)arg1 ;
-(void)setArticleRecordSource:(FCArticleRecordSource *)arg1 ;
-(NSArray *)recordSources;
-(void)setForYouConfigRecordSource:(FCForYouConfigRecordSource *)arg1 ;
-(void)setAvAssetFactory:(id<FCAVAssetFactoryType>)arg1 ;
-(FCForYouConfigRecordSource *)forYouConfigRecordSource;
-(void)setTagListRecordSource:(FCTagListRecordSource *)arg1 ;
-(void)setAudioConfigRecordSource:(FCAudioConfigRecordSource *)arg1 ;
-(FCCKContentDatabase *)contentDatabase;
-(FCTagRecordSource *)tagRecordSource;
-(FCChannelMembershipController *)channelMembershipController;
-(FCAVAssetDownloadManager *)avAssetDownloadManager;
-(void)setChannelMembershipController:(FCChannelMembershipController *)arg1 ;
-(void)setIssueListRecordSource:(FCIssueListRecordSource *)arg1 ;
-(id<FCAssetKeyManagerType>)assetKeyManager;
-(FCIssueListRecordSource *)issueListRecordSource;
-(FCArticleListRecordSource *)articleListRecordSource;
-(FCWidgetSectionConfigRecordSource *)widgetSectionConfigRecordSource;
-(FCIssueRecordSource *)issueRecordSource;
-(void)setResourceRecordSource:(FCResourceRecordSource *)arg1 ;
-(void)setAssetKeyManager:(id<FCAssetKeyManagerType>)arg1 ;
-(void)setTagRecordSource:(FCTagRecordSource *)arg1 ;
-(void)setPurchaseLookupRecordSource:(FCPurchaseLookupRecordSource *)arg1 ;
-(FCResourceRecordSource *)resourceRecordSource;
-(FCAudioConfigRecordSource *)audioConfigRecordSource;
-(FCTagListRecordSource *)tagListRecordSource;
-(void)setContentDatabase:(FCCKContentDatabase *)arg1 ;
@end

