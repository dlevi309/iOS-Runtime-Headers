/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class REConcurrentDictionary;

@interface REBundleCache : NSObject {

	REConcurrentDictionary* _cachedBundles;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)bundleAtPath:(id)arg1 ;
@end
