/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class ACAccount, NSDictionary, NSString, AMSProcessInfo;

@interface AMSMarketingItemTask : AMSTask <AMSBagConsumer> {

	BOOL _hydrateRelatedContent;
	BOOL _includeMediaAssets;
	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSDictionary* _contextInfo;
	NSString* _clientIdentifier;
	AMSProcessInfo* _clientInfo;
	NSString* _clientVersion;
	NSString* _logKey;
	NSString* _placement;
	NSString* _serviceType;

}

@property (nonatomic,retain) ACAccount * account;                        //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                   //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy) NSDictionary * contextInfo;                   //@synthesize contextInfo=_contextInfo - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) NSString * clientVersion;                 //@synthesize clientVersion=_clientVersion - In the implementation block
@property (assign,nonatomic) BOOL hydrateRelatedContent;                 //@synthesize hydrateRelatedContent=_hydrateRelatedContent - In the implementation block
@property (nonatomic,retain) NSString * logKey;                          //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,readonly) NSString * placement;                     //@synthesize placement=_placement - In the implementation block
@property (nonatomic,readonly) NSString * serviceType;                   //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) BOOL includeMediaAssets;                    //@synthesize includeMediaAssets=_includeMediaAssets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(ACAccount *)account;
-(NSString *)placement;
-(void)setAccount:(ACAccount *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(NSString *)clientVersion;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id)performWithFetchOnly;
-(void)setContextInfo:(NSDictionary *)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(id)perform;
-(id<AMSBagProtocol>)bag;
-(void)setHydrateRelatedContent:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 clientIdentifier:(id)arg3 clientVersion:(id)arg4 placement:(id)arg5 serviceType:(id)arg6 ;
-(void)setIncludeMediaAssets:(BOOL)arg1 ;
-(id)_processMediaResultFromPromise:(id)arg1 ;
-(id)_fetchItems;
-(BOOL)hydrateRelatedContent;
-(id)_fetchItemsFromURL:(id)arg1 ;
-(NSString *)serviceType;
-(NSDictionary *)contextInfo;
-(NSString *)clientIdentifier;
-(id)initWithBag:(id)arg1 clientIdentifier:(id)arg2 clientVersion:(id)arg3 placement:(id)arg4 serviceType:(id)arg5 ;
-(BOOL)includeMediaAssets;
-(NSString *)logKey;
@end

