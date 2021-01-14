/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class NSMutableDictionary, NSLock, NSString;

@interface VNRPNTrackerEspressoModelCacheManager : NSObject {

	NSMutableDictionary* _rpnEspressoResourcesKeyToEspressoResourcesCache;
	NSLock* _rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
	NSString* _espressoModelName;

}

@property (readonly) NSString * espressoModelName;              //@synthesize espressoModelName=_espressoModelName - In the implementation block
+(id)cacheKeyFromOptions:(id)arg1 error:(id*)arg2 ;
+(id)cacheOptionsKeys;
-(id)initWithRPNEspressoModelName:(id)arg1 ;
-(id)espressoResourcesFromOptions:(id)arg1 error:(id*)arg2 ;
-(NSString *)espressoModelName;
-(void)dealloc;
@end

