/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/


@class NSMutableSet, NSSet;

@interface _CRKBundleManager : NSObject {

	NSMutableSet* _bundles;

}

@property (nonatomic,readonly) NSSet * bundles; 
+(id)sharedInstance;
+(Class)bundleClass;
+(id)bundleDirectoryPath;
-(id)init;
-(NSSet *)bundles;
-(void)loadBundles;
-(void)registerBundle:(id)arg1 ;
@end

