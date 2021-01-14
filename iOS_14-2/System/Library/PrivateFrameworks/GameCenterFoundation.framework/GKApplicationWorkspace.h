/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject {

	LSApplicationWorkspace* _lsWorkspace;

}

@property (nonatomic,retain) LSApplicationWorkspace * lsWorkspace;              //@synthesize lsWorkspace=_lsWorkspace - In the implementation block
+(id)defaultWorkspace;
-(id)initWithWorkspace:(id)arg1 ;
-(LSApplicationWorkspace *)lsWorkspace;
-(void)setLsWorkspace:(LSApplicationWorkspace *)arg1 ;
-(BOOL)applicationIsInstalled:(id)arg1 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1 ;
-(id)applicationProxyForBundleID:(id)arg1 ;
-(void)openICloudSettings;
-(void)openURL:(id)arg1 ;
-(void)openSettings;
-(void)openGameCenterSettings;
-(id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1 ;
-(void)dealloc;
@end

