/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSSet, NSString, NSArray;

@interface _WKProcessPoolConfiguration : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::ProcessPoolConfiguration> _processPoolConfiguration;
	BOOL _shouldCaptureAudioInUIProcess;

}

@property (nonatomic,copy) NSURL * injectedBundleURL; 
@property (nonatomic,copy) NSSet * customClassesForParameterCoder; 
@property (assign,nonatomic) unsigned long long maximumProcessCount; 
@property (assign,nonatomic) BOOL usesSingleWebProcess; 
@property (nonatomic,copy) NSString * customWebContentServiceBundleIdentifier; 
@property (assign,nonatomic) BOOL ignoreSynchronousMessagingTimeoutsForTesting; 
@property (assign,nonatomic) BOOL attrStyleEnabled; 
@property (nonatomic,copy) NSArray * additionalReadAccessAllowedURLs; 
@property (assign,nonatomic) unsigned long long wirelessContextIdentifier; 
@property (assign,nonatomic) long long diskCacheSizeOverride; 
@property (nonatomic,copy) NSArray * cachePartitionedURLSchemes; 
@property (nonatomic,copy) NSArray * alwaysRevalidatedURLSchemes; 
@property (assign,nonatomic) BOOL diskCacheSpeculativeValidationEnabled; 
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier; 
@property (nonatomic,copy) NSString * sourceApplicationSecondaryIdentifier; 
@property (assign,nonatomic) BOOL shouldCaptureAudioInUIProcess;                                      //@synthesize shouldCaptureAudioInUIProcess=_shouldCaptureAudioInUIProcess - In the implementation block
@property (assign,nonatomic) BOOL alwaysRunsAtBackgroundPriority; 
@property (assign,nonatomic) BOOL shouldTakeUIBackgroundAssertion; 
@property (assign,nonatomic) int presentingApplicationPID; 
@property (assign,nonatomic) BOOL processSwapsOnNavigation; 
@property (assign,nonatomic) BOOL alwaysKeepAndReuseSwappedProcesses; 
@property (assign,nonatomic) BOOL processSwapsOnWindowOpenWithOpener; 
@property (assign,nonatomic) BOOL prewarmsProcessesAutomatically; 
@property (assign,nonatomic) BOOL usesWebProcessCache; 
@property (assign,nonatomic) BOOL pageCacheEnabled; 
@property (assign,getter=isJITEnabled,nonatomic) BOOL JITEnabled; 
@property (setter=setHSTSStorageDirectory:,nonatomic,copy) NSURL * hstsStorageDirectory; 
@property (assign,nonatomic) BOOL configureJSCForTesting; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sf_customClassesForParameterCoder;
-(void)setPresentingApplicationPID:(int)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(BOOL)ignoreSynchronousMessagingTimeoutsForTesting;
-(unsigned long long)wirelessContextIdentifier;
-(NSString *)sourceApplicationBundleIdentifier;
-(BOOL)prewarmsProcessesAutomatically;
-(void)setAdditionalReadAccessAllowedURLs:(NSArray *)arg1 ;
-(void)setIgnoreSynchronousMessagingTimeoutsForTesting:(BOOL)arg1 ;
-(BOOL)usesWebProcessCache;
-(NSArray *)alwaysRevalidatedURLSchemes;
-(int)presentingApplicationPID;
-(id)init;
-(void)setAlwaysRunsAtBackgroundPriority:(BOOL)arg1 ;
-(void)setHSTSStorageDirectory:(id)arg1 ;
-(void)setJITEnabled:(BOOL)arg1 ;
-(void)setProcessSwapsOnNavigation:(BOOL)arg1 ;
-(void)setAlwaysRevalidatedURLSchemes:(NSArray *)arg1 ;
-(NSURL *)injectedBundleURL;
-(NSString *)customWebContentServiceBundleIdentifier;
-(NSArray *)cachePartitionedURLSchemes;
-(void)setProcessSwapsOnWindowOpenWithOpener:(BOOL)arg1 ;
-(NSString *)description;
-(void)setDiskCacheSizeOverride:(long long)arg1 ;
-(void)setCachePartitionedURLSchemes:(NSArray *)arg1 ;
-(void)setAlwaysKeepAndReuseSwappedProcesses:(BOOL)arg1 ;
-(BOOL)isJITEnabled;
-(unsigned long long)maximumProcessCount;
-(BOOL)processSwapsOnNavigation;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(void)setCustomClassesForParameterCoder:(NSSet *)arg1 ;
-(BOOL)usesSingleWebProcess;
-(void)setConfigureJSCForTesting:(BOOL)arg1 ;
-(void)setPageCacheEnabled:(BOOL)arg1 ;
-(void)setInjectedBundleURL:(NSURL *)arg1 ;
-(void)setAttrStyleEnabled:(BOOL)arg1 ;
-(NSArray *)additionalReadAccessAllowedURLs;
-(Object*)_apiObject;
-(BOOL)alwaysRunsAtBackgroundPriority;
-(BOOL)processSwapsOnWindowOpenWithOpener;
-(NSURL *)hstsStorageDirectory;
-(void)setDiskCacheSpeculativeValidationEnabled:(BOOL)arg1 ;
-(void)setShouldTakeUIBackgroundAssertion:(BOOL)arg1 ;
-(BOOL)pageCacheEnabled;
-(BOOL)attrStyleEnabled;
-(void)setWirelessContextIdentifier:(unsigned long long)arg1 ;
-(void)setMaximumProcessCount:(unsigned long long)arg1 ;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(BOOL)configureJSCForTesting;
-(void)setPrewarmsProcessesAutomatically:(BOOL)arg1 ;
-(BOOL)diskCacheSpeculativeValidationEnabled;
-(BOOL)shouldTakeUIBackgroundAssertion;
-(void)setCustomWebContentServiceBundleIdentifier:(NSString *)arg1 ;
-(BOOL)alwaysKeepAndReuseSwappedProcesses;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)customClassesForParameterCoder;
-(BOOL)shouldCaptureAudioInUIProcess;
-(void)setUsesWebProcessCache:(BOOL)arg1 ;
-(void)setShouldCaptureAudioInUIProcess:(BOOL)arg1 ;
-(long long)diskCacheSizeOverride;
-(void)dealloc;
-(void)setUsesSingleWebProcess:(BOOL)arg1 ;
@end

