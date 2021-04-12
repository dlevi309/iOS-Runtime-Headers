/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/


@class NSDictionary, NSString;

@interface IMFullScreenEffectBundleManager : NSObject {

	NSDictionary* _fullScreenMomentBundles;
	NSString* _bundleDirectory;

}

@property (nonatomic,retain) NSString * bundleDirectory;                            //@synthesize bundleDirectory=_bundleDirectory - In the implementation block
@property (nonatomic,readonly) NSDictionary * fullScreenMomentBundles; 
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg1 ;
+(id)__singleton__im;
+(id)effectIdentifiersInPickerOrder;
-(id)init;
-(id)localizedDisplayNameForEffectWithIdentifier:(id)arg1 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)dealloc;
-(id)loadEffectBundle:(id)arg1 error:(id*)arg2 ;
-(NSString *)bundleDirectory;
-(BOOL)loadAllBundlesFromPath:(id)arg1 bundles:(id*)arg2 error:(id*)arg3 ;
-(id)effectBundleForIdentifier:(id)arg1 ;
-(NSDictionary *)fullScreenMomentBundles;
-(id)fullScreenMomentForIdentifier:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 fromBundleWithIdentifier:(id)arg2 ;
-(id)triggeredFullScreenEffectForType:(id)arg1 ;
-(BOOL)hasFullScreenMomentForIdentifier:(id)arg1 ;
-(void)setBundleDirectory:(NSString *)arg1 ;
@end

