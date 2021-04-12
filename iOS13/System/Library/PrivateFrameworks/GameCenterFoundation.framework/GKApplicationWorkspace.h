/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject {

	LSApplicationWorkspace* _lsWorkspace;

}

@property (nonatomic,retain) LSApplicationWorkspace * lsWorkspace;              //@synthesize lsWorkspace=_lsWorkspace - In the implementation block
+(id)defaultWorkspace;
-(void)dealloc;
-(void)openURL:(id)arg1 ;
-(BOOL)applicationIsInstalled:(id)arg1 ;
-(id)initWithWorkspace:(id)arg1 ;
-(void)openGameCenterSettings;
-(void)openSettings;
-(void)openICloudSettings;
-(id)applicationProxyForBundleID:(id)arg1 ;
-(void)setLsWorkspace:(LSApplicationWorkspace *)arg1 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1 ;
-(LSApplicationWorkspace *)lsWorkspace;
@end

