/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMDNaturalLightingEnabledRetryContext : HMFObject <NSCopying> {

	BOOL _naturalLightingEnabled;
	unsigned long long _retryCount;
	/*^block*/id _completion;

}

@property (assign) unsigned long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
@property (readonly) BOOL naturalLightingEnabled;              //@synthesize naturalLightingEnabled=_naturalLightingEnabled - In the implementation block
@property (readonly) id completion;                            //@synthesize completion=_completion - In the implementation block
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(id)completion;
-(id)attributeDescriptions;
-(BOOL)naturalLightingEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithNaturalLightingEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 retryCount:(unsigned long long)arg3 ;
@end

