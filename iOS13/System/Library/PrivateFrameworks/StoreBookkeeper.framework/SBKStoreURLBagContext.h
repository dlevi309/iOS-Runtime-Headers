/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/

#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, SSURLBag;

@interface SBKStoreURLBagContext : NSObject <NSMutableCopying, NSCopying> {

	BOOL _domainDisabled;
	double _pollingIntervalInSeconds;
	NSString* _domain;
	NSURL* _syncRequestURL;
	NSURL* _pushKeyValueRequestURL;
	NSURL* _pullKeyValueRequestURL;
	NSURL* _pushAllKeyValueRequestURL;
	NSURL* _pullAllKeyValueRequestURL;
	SSURLBag* _bag;

}

@property (retain) SSURLBag * bag;                                 //@synthesize bag=_bag - In the implementation block
@property (copy) NSString * domain;                                //@synthesize domain=_domain - In the implementation block
@property (retain) NSURL * syncRequestURL;                         //@synthesize syncRequestURL=_syncRequestURL - In the implementation block
@property (retain) NSURL * pushKeyValueRequestURL;                 //@synthesize pushKeyValueRequestURL=_pushKeyValueRequestURL - In the implementation block
@property (retain) NSURL * pullKeyValueRequestURL;                 //@synthesize pullKeyValueRequestURL=_pullKeyValueRequestURL - In the implementation block
@property (retain) NSURL * pushAllKeyValueRequestURL;              //@synthesize pushAllKeyValueRequestURL=_pushAllKeyValueRequestURL - In the implementation block
@property (retain) NSURL * pullAllKeyValueRequestURL;              //@synthesize pullAllKeyValueRequestURL=_pullAllKeyValueRequestURL - In the implementation block
@property (assign) BOOL domainDisabled;                            //@synthesize domainDisabled=_domainDisabled - In the implementation block
@property (assign) double pollingIntervalInSeconds;                //@synthesize pollingIntervalInSeconds=_pollingIntervalInSeconds - In the implementation block
+(id)UPPDomainIdentifier;
+(id)ExtrasDomainIdentifier;
+(void)loadBagContextFromURLBag:(id)arg1 domain:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)_findFirstValueInBag:(id)arg1 keyEnumerator:(id)arg2 valueTransformer:(/*^block*/id)arg3 defaultValue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
+(void)enumerateRequestURLBagKeysWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(SSURLBag *)bag;
-(void)setBag:(SSURLBag *)arg1 ;
-(NSURL *)pushKeyValueRequestURL;
-(NSURL *)syncRequestURL;
-(BOOL)domainDisabled;
-(double)pollingIntervalInSeconds;
-(id)initWithBag:(id)arg1 domain:(id)arg2 ;
-(id)_initWithDomain:(id)arg1 syncRequestURL:(id)arg2 domainDisabled:(BOOL)arg3 ;
-(void)setPollingIntervalInSeconds:(double)arg1 ;
-(void)setSyncRequestURL:(NSURL *)arg1 ;
-(void)setPushKeyValueRequestURL:(NSURL *)arg1 ;
-(NSURL *)pullKeyValueRequestURL;
-(void)setPullKeyValueRequestURL:(NSURL *)arg1 ;
-(NSURL *)pushAllKeyValueRequestURL;
-(void)setPushAllKeyValueRequestURL:(NSURL *)arg1 ;
-(NSURL *)pullAllKeyValueRequestURL;
-(void)setPullAllKeyValueRequestURL:(NSURL *)arg1 ;
-(void)setDomainDisabled:(BOOL)arg1 ;
@end

