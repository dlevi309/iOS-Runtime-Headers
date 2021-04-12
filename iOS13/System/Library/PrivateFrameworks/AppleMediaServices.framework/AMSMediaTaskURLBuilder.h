/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSBagProtocol;
@class NSArray, NSString, AMSMediaTaskTypeConfig, NSDictionary;

@interface AMSMediaTaskURLBuilder : NSObject {

	BOOL _charts;
	NSArray* _additionalPlatforms;
	id<AMSBagProtocol> _bag;
	NSArray* _bundleIdentifiers;
	NSString* _clientVersion;
	AMSMediaTaskTypeConfig* _config;
	NSDictionary* _filters;
	NSArray* _includedResultKeys;
	NSArray* _itemIdentifiers;
	NSString* _logKey;
	NSString* _searchTerm;

}

@property (nonatomic,retain) NSArray * additionalPlatforms;                  //@synthesize additionalPlatforms=_additionalPlatforms - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                       //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSArray * bundleIdentifiers;                    //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL charts;                                    //@synthesize charts=_charts - In the implementation block
@property (nonatomic,readonly) NSString * clientVersion;                     //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,readonly) AMSMediaTaskTypeConfig * config;              //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NSDictionary * filters;                         //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSArray * includedResultKeys;                   //@synthesize includedResultKeys=_includedResultKeys - In the implementation block
@property (nonatomic,retain) NSArray * itemIdentifiers;                      //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * logKey;                              //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSString * searchTerm;                          //@synthesize searchTerm=_searchTerm - In the implementation block
-(AMSMediaTaskTypeConfig *)config;
-(NSDictionary *)filters;
-(id)build;
-(void)setFilters:(NSDictionary *)arg1 ;
-(NSArray *)itemIdentifiers;
-(NSArray *)bundleIdentifiers;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(void)setIncludedResultKeys:(NSArray *)arg1 ;
-(void)setAdditionalPlatforms:(NSArray *)arg1 ;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSString *)clientVersion;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(id)initWithConfig:(id)arg1 clientVersion:(id)arg2 bag:(id)arg3 ;
-(NSArray *)additionalPlatforms;
-(BOOL)charts;
-(void)setCharts:(BOOL)arg1 ;
-(NSArray *)includedResultKeys;
-(id)_verifyConfiguration;
-(id)_hostPromise;
-(id)_pathPromise;
-(id)_queryItems;
-(void)_addBundleIdentifiers:(id)arg1 ;
-(void)_addCharts:(id)arg1 ;
-(void)_addItemIdentifiers:(id)arg1 ;
-(void)_addSearchTerm:(id)arg1 ;
-(id)_devicePlatform;
@end

