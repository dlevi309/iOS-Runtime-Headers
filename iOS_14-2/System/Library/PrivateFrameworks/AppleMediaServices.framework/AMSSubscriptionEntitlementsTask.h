/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@interface AMSSubscriptionEntitlementsTask : AMSTask {

	BOOL _extendedCarrierCheck;
	long long _cachePolicy;
	long long _mediaType;

}

@property (assign,nonatomic) long long cachePolicy;                  //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign,nonatomic) BOOL extendedCarrierCheck;              //@synthesize extendedCarrierCheck=_extendedCarrierCheck - In the implementation block
@property (assign,nonatomic) long long mediaType;                    //@synthesize mediaType=_mediaType - In the implementation block
+(id)updateCacheForMediaType:(long long)arg1 account:(id)arg2 data:(id)arg3 ;
+(unsigned long long)_segmentForMediaType:(long long)arg1 error:(id*)arg2 ;
-(void)setMediaType:(long long)arg1 ;
-(long long)mediaType;
-(id)initWithMediaType:(long long)arg1 ;
-(long long)cachePolicy;
-(void)setCachePolicy:(long long)arg1 ;
-(id)_fetchEntitlementsFromIC;
-(id)_fetchEntitlementsFromASD;
-(id)performExternalLookup;
-(BOOL)_shouldIgnoreCaches;
-(id)_resultFromASDEntitlements:(id)arg1 ;
-(id)_reloadASDSubscriptionForSegment:(unsigned long long)arg1 controller:(id)arg2 ;
-(BOOL)_shouldIgnoreRemoteData;
-(id)_queryCachedASDSubscriptionForSegment:(unsigned long long)arg1 controller:(id)arg2 reloadIfNeeded:(BOOL)arg3 ;
-(BOOL)extendedCarrierCheck;
-(id)_resultFromICResponse:(id)arg1 ;
-(void)setExtendedCarrierCheck:(BOOL)arg1 ;
@end

