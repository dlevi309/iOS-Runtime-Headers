/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCContentContextInternal.h>
@class FCArticleRecordSource, FCTagRecordSource, FCTagListRecordSource, FCChannelMembershipController, FCResourceRecordSource, FCArticleListRecordSource, FCPurchaseLookupRecordSource, FCForYouConfigRecordSource, FCWidgetSectionConfigRecordSource, FCIssueRecordSource, FCIssueListRecordSource, NSArray, FCFeedDatabase, FCCKContentDatabase;


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
@property (nonatomic,readonly) NSArray * recordSources; 
@property (readonly) FCFeedDatabase * feedDatabase; 
@property (nonatomic,readonly) FCCKContentDatabase * contentDatabase; 
@property (nonatomic,readonly) id<FCAssetKeyManagerType> assetKeyManager; 
@required
-(FCTagRecordSource *)tagRecordSource;
-(FCCKContentDatabase *)contentDatabase;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(FCChannelMembershipController *)channelMembershipController;
-(FCArticleRecordSource *)articleRecordSource;
-(id<FCAssetKeyManagerType>)assetKeyManager;
-(FCFeedDatabase *)feedDatabase;
-(FCArticleListRecordSource *)articleListRecordSource;
-(NSArray *)recordSources;
-(FCResourceRecordSource *)resourceRecordSource;
-(FCIssueRecordSource *)issueRecordSource;
-(FCIssueListRecordSource *)issueListRecordSource;
-(FCForYouConfigRecordSource *)forYouConfigRecordSource;
-(FCTagListRecordSource *)tagListRecordSource;
-(FCWidgetSectionConfigRecordSource *)widgetSectionConfigRecordSource;

@end


@protocol FCAssetKeyManagerType;
@class FCArticleRecordSource, FCTagRecordSource, FCTagListRecordSource, FCChannelMembershipController, FCResourceRecordSource, FCArticleListRecordSource, FCPurchaseLookupRecordSource, FCForYouConfigRecordSource, FCWidgetSectionConfigRecordSource, FCIssueRecordSource, FCIssueListRecordSource, NSArray, FCFeedDatabase, FCCKContentDatabase, NSString;

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
	FCFeedDatabase* _feedDatabase;
	FCCKContentDatabase* _contentDatabase;
	id<FCAssetKeyManagerType> _assetKeyManager;

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
@property (retain) FCFeedDatabase * feedDatabase;                                                              //@synthesize feedDatabase=_feedDatabase - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * contentDatabase;                                            //@synthesize contentDatabase=_contentDatabase - In the implementation block
@property (nonatomic,retain) id<FCAssetKeyManagerType> assetKeyManager;                                        //@synthesize assetKeyManager=_assetKeyManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * recordSources; 
-(id)init;
-(FCTagRecordSource *)tagRecordSource;
-(FCCKContentDatabase *)contentDatabase;
-(void)setContentDatabase:(FCCKContentDatabase *)arg1 ;
-(void)setTagRecordSource:(FCTagRecordSource *)arg1 ;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(FCChannelMembershipController *)channelMembershipController;
-(FCArticleRecordSource *)articleRecordSource;
-(void)setFeedDatabase:(FCFeedDatabase *)arg1 ;
-(id<FCAssetKeyManagerType>)assetKeyManager;
-(FCFeedDatabase *)feedDatabase;
-(FCArticleListRecordSource *)articleListRecordSource;
-(NSArray *)recordSources;
-(FCResourceRecordSource *)resourceRecordSource;
-(FCIssueRecordSource *)issueRecordSource;
-(FCIssueListRecordSource *)issueListRecordSource;
-(void)setPurchaseLookupRecordSource:(FCPurchaseLookupRecordSource *)arg1 ;
-(void)setArticleRecordSource:(FCArticleRecordSource *)arg1 ;
-(void)setTagListRecordSource:(FCTagListRecordSource *)arg1 ;
-(void)setResourceRecordSource:(FCResourceRecordSource *)arg1 ;
-(void)setArticleListRecordSource:(FCArticleListRecordSource *)arg1 ;
-(void)setChannelMembershipController:(FCChannelMembershipController *)arg1 ;
-(void)setForYouConfigRecordSource:(FCForYouConfigRecordSource *)arg1 ;
-(void)setWidgetSectionConfigRecordSource:(FCWidgetSectionConfigRecordSource *)arg1 ;
-(void)setIssueRecordSource:(FCIssueRecordSource *)arg1 ;
-(void)setIssueListRecordSource:(FCIssueListRecordSource *)arg1 ;
-(void)setAssetKeyManager:(id<FCAssetKeyManagerType>)arg1 ;
-(FCForYouConfigRecordSource *)forYouConfigRecordSource;
-(FCTagListRecordSource *)tagListRecordSource;
-(FCWidgetSectionConfigRecordSource *)widgetSectionConfigRecordSource;
@end

