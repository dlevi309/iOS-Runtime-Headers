/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class NSString;

@interface AMSRatingsProviderTask : AMSTask <AMSBagConsumer> {

	unsigned long long _mediaType;
	NSString* _storeFront;
	id<AMSBagProtocol> _bag;
	NSString* _clientIdentifier;

}

@property (nonatomic,readonly) unsigned long long mediaType;              //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) NSString * storeFront;                     //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                    //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(unsigned long long)mediaType;
-(NSString *)storeFront;
-(id<AMSBagProtocol>)bag;
-(id)cacheTitle;
-(BOOL)_hasCachedData;
-(id)_urlForMediaType:(unsigned long long)arg1 ;
-(void)_clearCacheIfNeeded;
-(id)_cachedRatingsData;
-(id)initWithMediaType:(unsigned long long)arg1 storeFront:(id)arg2 clientIdentifier:(id)arg3 bag:(id)arg4 ;
-(id)_cachePath;
-(id)_cacheDirectory;
-(id)performTask;
-(NSString *)clientIdentifier;
@end

