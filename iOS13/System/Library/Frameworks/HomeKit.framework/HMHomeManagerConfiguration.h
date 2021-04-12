/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) NSOperationQueue * delegateQueue;                              //@synthesize delegateQueue=_delegateQueue - In the implementation block
+(id)defaultConfiguration;
+(id)defaultPrivateConfiguration;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2 ;
-(NSOperationQueue *)delegateQueue;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(BOOL)isDiscretionary;
-(unsigned long long)cachePolicy;
-(NSURL *)cacheURL;
-(HMFLocationAuthorization *)locationAuthorization;
-(BOOL)shouldConnect;
-(void)setShouldConnect:(BOOL)arg1 ;
-(BOOL)canUseCache;
@end

