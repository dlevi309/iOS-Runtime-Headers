/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(NSArray *)queryItems;
-(long long)batchSize;
-(void)setBatchSize:(long long)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)retryDelay;
-(double)timeoutInterval;
-(NSArray *)itemIdentifiers;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(NSString *)protocolVersion;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(NSString *)clientBundleIdentifier;
-(NSString *)platformIdentifier;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(void)setRetryDelay:(double)arg1 ;
-(BOOL)shouldIgnoreCache;
-(void)setShouldIgnoreCache:(BOOL)arg1 ;
-(long long)personalizationStyle;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(void)setPlatformIdentifier:(NSString *)arg1 ;
-(void)setReturnsLocalEquivalencies:(BOOL)arg1 ;
-(void)setKeyProfile:(NSString *)arg1 ;
-(id)performWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setBatchResultsHandler:(id)arg1 ;
-(NSDictionary *)HTTPHeaders;
-(NSString *)imageProfile;
-(NSString *)keyProfile;
-(void)setImageProfile:(NSString *)arg1 ;
-(id)copyWithItemIdentifiersInRange:(NSRange)arg1 ;
-(BOOL)returnsLocalEquivalencies;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(NSString *)clientBundleVersion;
-(void)setClientBundleVersion:(NSString *)arg1 ;
-(id)batchResultsHandler;
@end

