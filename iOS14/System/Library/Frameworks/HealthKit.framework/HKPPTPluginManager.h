/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSMutableDictionary;

@interface HKPPTPluginManager : NSObject {

	NSMutableDictionary* _testClasses;
	NSMutableDictionary* _builtinTests;

}
+(id)sharedPluginManager;
-(id)init;
-(id)builtinTests;
-(void)_loadPPTBundles;
-(void)registerDriverClass:(Class)arg1 ;
-(Class)classForTestType:(id)arg1 ;
@end

