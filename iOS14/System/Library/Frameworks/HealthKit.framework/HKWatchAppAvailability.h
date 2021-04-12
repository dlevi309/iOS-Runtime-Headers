/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSString, ASDAppQuery, NSArray;

@interface HKWatchAppAvailability : NSObject {

	NSString* _bundleID;
	ASDAppQuery* _query;
	NSArray* __test_apps;

}

@property (nonatomic,copy) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) ASDAppQuery * query;               //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSArray * _test_apps;              //@synthesize _test_apps=__test_apps - In the implementation block
-(ASDAppQuery *)query;
-(id)findApplicationIn:(id)arg1 ;
-(void)appInstallStateOnWatch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)set_test_apps:(NSArray *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(NSString *)bundleID;
-(void)setQuery:(ASDAppQuery *)arg1 ;
-(NSArray *)_test_apps;
@end

