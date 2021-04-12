/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, ICStoreRequestContext, NSDictionary;

@interface ICStorePlatformRequest : NSObject <NSCopying> {

	BOOL _returnsLocalEquivalencies;
	BOOL _shouldIgnoreCache;
	NSString* _clientIdentifier;
	NSString* _clientBundleIdentifier;
	NSString* _clientBundleVersion;
	NSArray* _itemIdentifiers;
	long long _batchSize;
	/*^block*/id _batchResultsHandler;
	NSString* _imageProfile;
	NSString* _keyProfile;
	long long _personalizationStyle;
	NSString* _platformIdentifier;
	NSString* _protocolVersion;
	double _retryDelay;
	double _timeoutInterval;
	long long _qualityOfService;
	ICStoreRequestContext* _requestContext;

}

@property (nonatomic,copy,readonly) NSDictionary * HTTPHeaders; 
@property (nonatomic,copy,readonly) NSArray * queryItems; 
@property (assign,nonatomic) long long qualityOfService;                        //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                         //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientBundleIdentifier;                   //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientBundleVersion;                      //@synthesize clientBundleVersion=_clientBundleVersion - In the implementation block
@property (nonatomic,copy) NSArray * itemIdentifiers;                           //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (assign,nonatomic) long long batchSize;                               //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) id batchResultsHandler;                              //@synthesize batchResultsHandler=_batchResultsHandler - In the implementation block
@property (nonatomic,copy) NSString * imageProfile;                             //@synthesize imageProfile=_imageProfile - In the implementation block
@property (nonatomic,copy) NSString * keyProfile;                               //@synthesize keyProfile=_keyProfile - In the implementation block
@property (assign,nonatomic) long long personalizationStyle;                    //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
@property (nonatomic,copy) NSString * platformIdentifier;                       //@synthesize platformIdentifier=_platformIdentifier - In the implementation block
@property (nonatomic,copy) NSString * protocolVersion;                          //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) double retryDelay;                                 //@synthesize retryDelay=_retryDelay - In the implementation block
@property (assign,nonatomic) BOOL returnsLocalEquivalencies;                    //@synthesize returnsLocalEquivalencies=_returnsLocalEquivalencies - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                            //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreCache;                            //@synthesize shouldIgnoreCache=_shouldIgnoreCache - In the implementation block
-(NSString *)platformIdentifier;
-(void)setQualityOfService:(long long)arg1 ;
-(BOOL)shouldIgnoreCache;
-(NSString *)clientBundleIdentifier;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)imageProfile;
-(void)setBatchSize:(long long)arg1 ;
-(NSArray *)queryItems;
-(long long)batchSize;
-(NSArray *)itemIdentifiers;
-(NSString *)keyProfile;
-(void)setKeyProfile:(NSString *)arg1 ;
-(id)performWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setShouldIgnoreCache:(BOOL)arg1 ;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(id)init;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(NSDictionary *)HTTPHeaders;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(void)setRetryDelay:(double)arg1 ;
-(NSString *)protocolVersion;
-(void)setPlatformIdentifier:(NSString *)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(double)retryDelay;
-(double)timeoutInterval;
-(void)setBatchResultsHandler:(id)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(NSString *)clientBundleVersion;
-(BOOL)returnsLocalEquivalencies;
-(long long)personalizationStyle;
-(id)batchResultsHandler;
-(id)copyWithItemIdentifiersInRange:(NSRange)arg1 ;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(NSString *)clientIdentifier;
-(long long)qualityOfService;
-(void)setClientBundleVersion:(NSString *)arg1 ;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)setImageProfile:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReturnsLocalEquivalencies:(BOOL)arg1 ;
@end

