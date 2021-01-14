/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSBagProtocol;
@class NSArray, NSDictionary, NSString, AMSMediaTaskTypeConfig;

@interface AMSMediaTaskURLBuilder : NSObject {

	BOOL _charts;
	NSArray* _additionalPlatforms;
	NSDictionary* _additionalQueryParams;
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

@property (nonatomic,retain) NSArray * additionalPlatforms;                     //@synthesize additionalPlatforms=_additionalPlatforms - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalQueryParams;              //@synthesize additionalQueryParams=_additionalQueryParams - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                          //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSArray * bundleIdentifiers;                       //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL charts;                                       //@synthesize charts=_charts - In the implementation block
@property (nonatomic,readonly) NSString * clientVersion;                        //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,readonly) AMSMediaTaskTypeConfig * config;                 //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NSDictionary * filters;                            //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSArray * includedResultKeys;                      //@synthesize includedResultKeys=_includedResultKeys - In the implementation block
@property (nonatomic,retain) NSArray * itemIdentifiers;                         //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * logKey;                                 //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSString * searchTerm;                             //@synthesize searchTerm=_searchTerm - In the implementation block
-(AMSMediaTaskTypeConfig *)config;
-(void)setSearchTerm:(NSString *)arg1 ;
-(void)setFilters:(NSDictionary *)arg1 ;
-(NSArray *)itemIdentifiers;
-(id)build;
-(BOOL)charts;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(NSString *)clientVersion;
-(NSDictionary *)filters;
-(NSString *)searchTerm;
-(id)_hostPromise;
-(id)initWithConfig:(id)arg1 clientVersion:(id)arg2 bag:(id)arg3 ;
-(NSArray *)additionalPlatforms;
-(void)setAdditionalPlatforms:(NSArray *)arg1 ;
-(NSDictionary *)additionalQueryParams;
-(void)setAdditionalQueryParams:(NSDictionary *)arg1 ;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(NSArray *)includedResultKeys;
-(void)setIncludedResultKeys:(NSArray *)arg1 ;
-(id)_verifyConfiguration;
-(id)_pathPromise;
-(void)_addBundleIdentifiers:(id)arg1 ;
-(void)_addItemIdentifiers:(id)arg1 ;
-(void)_addSearchTerm:(id)arg1 ;
-(id)_devicePlatform;
-(void)setLogKey:(NSString *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setCharts:(BOOL)arg1 ;
-(NSArray *)bundleIdentifiers;
-(id)_queryItems;
-(void)_addCharts:(id)arg1 ;
-(NSString *)logKey;
@end

