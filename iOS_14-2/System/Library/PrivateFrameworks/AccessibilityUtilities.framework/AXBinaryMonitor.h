/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface AXBinaryMonitor : NSObject {

	NSMutableDictionary* _bundleHandlerMap;
	NSMutableDictionary* _frameworkHandlerMap;
	NSMutableDictionary* _dylibHandlerMap;
	NSMutableDictionary* _appHandlerMap;
	NSMutableDictionary* _appExtensionHandlerMap;
	NSObject*<OS_dispatch_queue> _binaryMonitorQueue;

}

@property (nonatomic,retain) NSMutableDictionary * bundleHandlerMap;                       //@synthesize bundleHandlerMap=_bundleHandlerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * frameworkHandlerMap;                    //@synthesize frameworkHandlerMap=_frameworkHandlerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dylibHandlerMap;                        //@synthesize dylibHandlerMap=_dylibHandlerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appHandlerMap;                          //@synthesize appHandlerMap=_appHandlerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appExtensionHandlerMap;                 //@synthesize appExtensionHandlerMap=_appExtensionHandlerMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> binaryMonitorQueue;              //@synthesize binaryMonitorQueue=_binaryMonitorQueue - In the implementation block
+(void)initialize;
+(id)sharedInstance;
-(NSMutableDictionary *)frameworkHandlerMap;
-(id)init;
-(void)_handleLoadedImagePath:(id)arg1 ;
-(id)_bundleNameForImage:(id)arg1 ;
-(void)setFrameworkHandlerMap:(NSMutableDictionary *)arg1 ;
-(id)_appExtensionNameForImage:(id)arg1 ;
-(void)addHandler:(/*^block*/id)arg1 forApp:(id)arg2 ;
-(void)addHandler:(/*^block*/id)arg1 forBundleName:(id)arg2 ;
-(NSMutableDictionary *)appHandlerMap;
-(void)evaluateExistingBinaries;
-(void)addHandler:(/*^block*/id)arg1 forAppExtension:(id)arg2 ;
-(void)setBinaryMonitorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addHandler:(/*^block*/id)arg1 forFramework:(id)arg2 ;
-(id)_dylibNameForImage:(id)arg1 ;
-(NSMutableDictionary *)dylibHandlerMap;
-(BOOL)_loadImageIsFramework:(id)arg1 ;
-(id)_appNameForImage:(id)arg1 ;
-(NSMutableDictionary *)bundleHandlerMap;
-(NSMutableDictionary *)appExtensionHandlerMap;
-(NSObject*<OS_dispatch_queue>)binaryMonitorQueue;
-(id)_bundleNameAndType:(id)arg1 ;
-(BOOL)_loadImageIsDylib:(id)arg1 ;
-(id)_frameworkNameForImage:(id)arg1 ;
-(void)setAppHandlerMap:(NSMutableDictionary *)arg1 ;
-(BOOL)_loadImageIsBundle:(id)arg1 ;
-(void)_applyHandlerBlocks:(id)arg1 handlerMap:(id)arg2 ;
-(void)setAppExtensionHandlerMap:(NSMutableDictionary *)arg1 ;
-(BOOL)_loadImageIsAppExtension:(id)arg1 ;
-(void)setDylibHandlerMap:(NSMutableDictionary *)arg1 ;
-(void)_addHandler:(/*^block*/id)arg1 withName:(id)arg2 toMap:(id*)arg3 ;
-(void)setBundleHandlerMap:(NSMutableDictionary *)arg1 ;
-(BOOL)_loadImageIsApp:(id)arg1 ;
-(void)addHandler:(/*^block*/id)arg1 forDylib:(id)arg2 ;
-(void)addHandler:(/*^block*/id)arg1 forBundleID:(id)arg2 ;
@end

