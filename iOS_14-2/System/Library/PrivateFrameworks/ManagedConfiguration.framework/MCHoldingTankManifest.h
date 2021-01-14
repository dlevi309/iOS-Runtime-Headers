/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MCHoldingTankManifest : NSObject {

	NSMutableDictionary* _universalManifest;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)sharedManifest;
-(id)init;
-(id)_manifestForDevice:(unsigned long long)arg1 createIfNil:(BOOL)arg2 ;
-(id)_profileDataFileNameForProfileIdentifier:(id)arg1 ;
-(id)_pathToHoldingTankManifestForDevice:(unsigned long long)arg1 ;
-(void)_createDirectory:(id)arg1 withIntermediateDirectories:(BOOL)arg2 ;
-(id)_pathToHoldingTankDirectoryForDevice:(unsigned long long)arg1 ;
-(BOOL)_adjustManifestForDevice:(unsigned long long)arg1 withIdentifier:(id)arg2 addingIdentifer:(BOOL)arg3 outError:(id*)arg4 ;
-(id)uninstalledProfileWithIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2 ;
-(id)uninstalledProfileDataWithIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2 ;
-(void)removeProfileDataWithIdentifier:(id)arg1 fromHoldingTankForDevice:(unsigned long long)arg2 ;
-(id)uninstalledProfileIdentifiersForDevice:(unsigned long long)arg1 ;
-(BOOL)addProfileData:(id)arg1 withIdentifier:(id)arg2 toHoldingTankForDevice:(unsigned long long)arg3 outError:(id*)arg4 ;
-(id)pathToHoldingTankProfileDataForIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2 createDirectory:(BOOL)arg3 ;
-(void)dealloc;
@end
