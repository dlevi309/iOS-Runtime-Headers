/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface CRBundleManager : NSObject {

	NSMutableSet* _bundles;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedInstance;
+(Class)bundleClass;
+(id)bundleDirectoryName;
+(id)bundleDirectoryPath;
-(id)init;
-(void)getBundlesWithCompletion:(/*^block*/id)arg1 ;
-(void)_getBundlesOnCurrentQueueWithCompletion:(/*^block*/id)arg1 ;
@end

