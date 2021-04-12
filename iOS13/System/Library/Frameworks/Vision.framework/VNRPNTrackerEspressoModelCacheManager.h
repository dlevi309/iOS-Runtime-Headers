/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithRPNEspressoModelName:(id)arg1 ;
-(id)espressoResourcesFromOptions:(id)arg1 error:(id*)arg2 ;
-(NSString *)espressoModelName;
@end

