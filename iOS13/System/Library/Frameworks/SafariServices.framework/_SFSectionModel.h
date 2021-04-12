/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString, NSArray, _SFBannerModel;

@interface _SFSectionModel : NSObject {

	/*^block*/id _configurationProvider;
	id _identifier;
	NSString* _title;
	NSArray* _actions;
	_SFBannerModel* _banner;
	NSArray* _itemIdentifiers;
	long long _numberOfRowsVisibleWhenCollapsed;
	/*^block*/id _contextMenuProvider;
	/*^block*/id _contextMenuCommitHandler;
	long long _itemType;
	_SFBannerModel* _contentBanner;

}

@property (nonatomic,readonly) long long itemType;                                    //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) _SFBannerModel * contentBanner;                        //@synthesize contentBanner=_contentBanner - In the implementation block
@property (nonatomic,readonly) id siteIconConfigurationProvider; 
@property (nonatomic,readonly) id siteCardConfigurationProvider; 
@property (nonatomic,readonly) id identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                                //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) _SFBannerModel * banner;                               //@synthesize banner=_banner - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemIdentifiers;                        //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (assign,nonatomic) long long numberOfRowsVisibleWhenCollapsed;              //@synthesize numberOfRowsVisibleWhenCollapsed=_numberOfRowsVisibleWhenCollapsed - In the implementation block
@property (nonatomic,copy) id contextMenuProvider;                                    //@synthesize contextMenuProvider=_contextMenuProvider - In the implementation block
@property (nonatomic,copy) id contextMenuCommitHandler;                               //@synthesize contextMenuCommitHandler=_contextMenuCommitHandler - In the implementation block
+(id)bannerSectionWithIdentifier:(id)arg1 banner:(id)arg2 ;
+(id)siteIconSectionWithIdentifier:(id)arg1 title:(id)arg2 actions:(id)arg3 banner:(id)arg4 identifiers:(id)arg5 configurationProvider:(/*^block*/id)arg6 ;
+(id)siteCardSectionWithIdentifier:(id)arg1 title:(id)arg2 actions:(id)arg3 banner:(id)arg4 identifiers:(id)arg5 configurationProvider:(/*^block*/id)arg6 ;
-(id)identifier;
-(NSString *)title;
-(NSArray *)actions;
-(NSArray *)itemIdentifiers;
-(long long)itemType;
-(id)contextMenuProvider;
-(id)contextMenuCommitHandler;
-(_SFBannerModel *)contentBanner;
-(id)siteIconConfigurationProvider;
-(id)siteCardConfigurationProvider;
-(long long)numberOfRowsVisibleWhenCollapsed;
-(_SFBannerModel *)banner;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 actions:(id)arg3 banner:(id)arg4 itemType:(long long)arg5 itemIdentifiers:(id)arg6 configurationProvider:(/*^block*/id)arg7 ;
-(void)setNumberOfRowsVisibleWhenCollapsed:(long long)arg1 ;
-(void)setContextMenuProvider:(id)arg1 ;
-(void)setContextMenuCommitHandler:(id)arg1 ;
@end

