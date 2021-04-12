/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/

#import <StorageSettings/StorageSettings-Structs.h>
#import <libobjc.A.dylib/STMSizeCacheDelegate.h>

@protocol STMAppSizerDelegate;
@class NSArray, NSDictionary, STMAppStaticSizer, STMAppDynamicSizer, STMAppPurgeableSizer, NSString;

@interface STMAppSizer : NSObject <STMSizeCacheDelegate> {

	os_unfair_lock_s _proxyLock;
	NSArray* _proxies;
	NSDictionary* _proxiesByDataPath;
	NSDictionary* _proxiesByBundlePath;
	NSDictionary* _appContainersByPath;
	NSDictionary* _dataContainersByPath;
	id<STMAppSizerDelegate> _delegate;
	STMAppStaticSizer* _staticSizer;
	STMAppDynamicSizer* _dynamicSizer;
	STMAppPurgeableSizer* _purgeableSizer;

}

@property (retain) STMAppStaticSizer * staticSizer;                    //@synthesize staticSizer=_staticSizer - In the implementation block
@property (retain) STMAppDynamicSizer * dynamicSizer;                  //@synthesize dynamicSizer=_dynamicSizer - In the implementation block
@property (retain) STMAppPurgeableSizer * purgeableSizer;              //@synthesize purgeableSizer=_purgeableSizer - In the implementation block
@property (nonatomic,retain) NSArray * appProxies; 
@property (__weak) id<STMAppSizerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSizer;
-(id)init;
-(id<STMAppSizerDelegate>)delegate;
-(void)setDelegate:(id<STMAppSizerDelegate>)arg1 ;
-(void)dealloc;
-(void)addProxy:(id)arg1 ;
-(id)calcAppStaticSize:(id)arg1 ;
-(id)calcAppDynamicSize:(id)arg1 ;
-(id)calcAppPurgeableSize:(id)arg1 ;
-(id)staticSizeForPath:(id)arg1 ;
-(id)dynamicSizeForPath:(id)arg1 ;
-(id)purgeableSizeForPath:(id)arg1 ;
-(void)sizeCacheItemsUpdated:(id)arg1 ;
-(void)sizeCacheSizesUpdated:(id)arg1 ;
-(long long)totalSizeOfItems;
-(void)startSizer;
-(void)stopSizer;
-(void)notifySizesUpdated;
-(void)setAppProxies:(NSArray *)arg1 ;
-(NSArray *)appProxies;
-(id)staticSizeForApp:(id)arg1 ;
-(id)dynamicSizeForApp:(id)arg1 ;
-(id)purgeableSizeForApp:(id)arg1 ;
-(STMAppStaticSizer *)staticSizer;
-(void)setStaticSizer:(STMAppStaticSizer *)arg1 ;
-(STMAppDynamicSizer *)dynamicSizer;
-(void)setDynamicSizer:(STMAppDynamicSizer *)arg1 ;
-(STMAppPurgeableSizer *)purgeableSizer;
-(void)setPurgeableSizer:(STMAppPurgeableSizer *)arg1 ;
@end

