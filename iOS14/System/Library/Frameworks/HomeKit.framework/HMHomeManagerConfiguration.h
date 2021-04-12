/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSOperationQueue, HMFLocationAuthorization, NSURL;

@interface HMHomeManagerConfiguration : NSObject <NSCopying, NSMutableCopying> {

	unsigned long long _cachePolicy;
	BOOL _shouldConnect;
	unsigned long long _options;
	BOOL _discretionary;
	BOOL _adaptive;
	NSOperationQueue* _delegateQueue;
	HMFLocationAuthorization* _locationAuthorization;
	NSURL* _cacheURL;

}

@property (assign,nonatomic) unsigned long long cachePolicy;                        //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign,nonatomic) BOOL shouldConnect;                                    //@synthesize shouldConnect=_shouldConnect - In the implementation block
@property (readonly) BOOL canUseCache; 
@property (readonly) NSURL * cacheURL;                                              //@synthesize cacheURL=_cacheURL - In the implementation block
@property (readonly) HMFLocationAuthorization * locationAuthorization;              //@synthesize locationAuthorization=_locationAuthorization - In the implementation block
@property (readonly) unsigned long long options;                                    //@synthesize options=_options - In the implementation block
@property (getter=isDiscretionary,readonly) BOOL discretionary;                     //@synthesize discretionary=_discretionary - In the implementation block
@property (getter=isAdaptive,readonly) BOOL adaptive;                               //@synthesize adaptive=_adaptive - In the implementation block
@property (readonly) NSOperationQueue * delegateQueue;                              //@synthesize delegateQueue=_delegateQueue - In the implementation block
+(id)defaultConfiguration;
+(id)defaultPrivateConfiguration;
-(id)init;
-(id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2 ;
-(unsigned long long)options;
-(BOOL)isAdaptive;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSURL *)cacheURL;
-(unsigned long long)cachePolicy;
-(NSOperationQueue *)delegateQueue;
-(HMFLocationAuthorization *)locationAuthorization;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(BOOL)shouldConnect;
-(void)setShouldConnect:(BOOL)arg1 ;
-(BOOL)isDiscretionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canUseCache;
@end

