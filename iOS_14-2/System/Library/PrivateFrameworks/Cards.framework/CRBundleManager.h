/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface CRBundleManager : NSObject {

	NSMutableSet* _bundles;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)bundleDirectoryName;
+(id)sharedInstance;
+(Class)bundleClass;
+(id)bundleDirectoryPath;
-(id)init;
-(void)getBundlesWithCompletion:(/*^block*/id)arg1 ;
-(void)_getBundlesOnCurrentQueueWithCompletion:(/*^block*/id)arg1 ;
@end

