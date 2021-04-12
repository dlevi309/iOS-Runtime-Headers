/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)bundles;
-(id)init;
-(void)loadBundles;
-(void)registerBundle:(id)arg1 ;
@end

