/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableDictionary, NSLock, NSNumber, NSString, NSDictionary;

@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying> {

	long long _allowedRetryCount;
	BOOL _allowsBootstrapCellularData;
	BOOL _allowsExpiredBags;
	long long _bagType;
	NSData* _clientAuditTokenData;
	NSMutableDictionary* _httpHeaders;
	BOOL _ignoresCaches;
	NSLock* _lock;
	NSNumber* _userIdentifier;
	BOOL _usesCachedBagsOnly;

}

@property (assign,nonatomic) BOOL allowsBootstrapCellularData;                 //@synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData - In the implementation block
@property (assign,nonatomic) BOOL allowsExpiredBags;                           //@synthesize allowsExpiredBags=_allowsExpiredBags - In the implementation block
@property (nonatomic,retain) NSData * clientAuditTokenData;                    //@synthesize clientAuditTokenData=_clientAuditTokenData - In the implementation block
@property (nonatomic,readonly) NSString * clientBundleIdentifier; 
@property (assign,nonatomic) BOOL usesCachedBagsOnly;                          //@synthesize usesCachedBagsOnly=_usesCachedBagsOnly - In the implementation block
@property (assign,nonatomic) long long allowedRetryCount;                      //@synthesize allowedRetryCount=_allowedRetryCount - In the implementation block
@property (assign,nonatomic) long long bagType;                                //@synthesize bagType=_bagType - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (assign,nonatomic) BOOL ignoresCaches;                               //@synthesize ignoresCaches=_ignoresCaches - In the implementation block
@property (nonatomic,retain) NSNumber * userIdentifier;                        //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * allHTTPHeaders; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithBagType:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)userIdentifier;
-(id)_init;
-(NSString *)cacheKey;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(NSString *)clientBundleIdentifier;
-(void)setAllowsExpiredBags:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setUsesCachedBagsOnly:(BOOL)arg1 ;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(BOOL)allowsBootstrapCellularData;
-(void)setAllowedRetryCount:(long long)arg1 ;
-(void)setBagType:(long long)arg1 ;
-(void)setIgnoresCaches:(BOOL)arg1 ;
-(NSData *)clientAuditTokenData;
-(long long)allowedRetryCount;
-(void)setClientAuditTokenData:(NSData *)arg1 ;
-(long long)bagType;
-(NSDictionary *)allHTTPHeaders;
-(void)setAllHTTPHeaders:(NSDictionary *)arg1 ;
-(BOOL)allowsExpiredBags;
-(BOOL)ignoresCaches;
-(BOOL)usesCachedBagsOnly;
@end

