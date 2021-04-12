/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSSet, NSString, NSArray;

@interface _WKProcessPoolConfiguration : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::ProcessPoolConfiguration> _processPoolConfiguration;

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
@property (assign,nonatomic) BOOL shouldCaptureAudioInUIProcess; 
@property (assign,nonatomic) BOOL alwaysRunsAtBackgroundPriority; 
@property (assign,nonatomic) BOOL shouldTakeUIBackgroundAssertion; 
@property (assign,nonatomic) int presentingApplicationPID; 
@property (assign,nonatomic) BOOL processSwapsOnNavigation; 
@property (assign,nonatomic) BOOL alwaysKeepAndReuseSwappedProcesses; 
@property (assign,nonatomic) BOOL processSwapsOnWindowOpenWithOpener; 
@property (assign,nonatomic) BOOL prewarmsProcessesAutomatically; 
@property (assign,nonatomic) BOOL usesWebProcessCache; 
@property (assign,nonatomic) BOOL pageCacheEnabled; 
@property (assign,nonatomic) BOOL suppressesConnectionTerminationOnSystemChange; 
@property (assign,getter=isJITEnabled,nonatomic) BOOL JITEnabled; 
@property (setter=setHSTSStorageDirectory:,nonatomic,copy) NSURL * hstsStorageDirectory; 
@property (assign,nonatomic) BOOL configureJSCForTesting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(Object*)_apiObject;
-(NSURL *)injectedBundleURL;
-(void)setInjectedBundleURL:(NSURL *)arg1 ;
-(NSSet *)customClassesForParameterCoder;
-(void)setCustomClassesForParameterCoder:(NSSet *)arg1 ;
-(unsigned long long)maximumProcessCount;
-(void)setMaximumProcessCount:(unsigned long long)arg1 ;
-(long long)diskCacheSizeOverride;
-(void)setDiskCacheSizeOverride:(long long)arg1 ;
-(BOOL)diskCacheSpeculativeValidationEnabled;
-(void)setDiskCacheSpeculativeValidationEnabled:(BOOL)arg1 ;
-(BOOL)ignoreSynchronousMessagingTimeoutsForTesting;
-(void)setIgnoreSynchronousMessagingTimeoutsForTesting:(BOOL)arg1 ;
-(BOOL)attrStyleEnabled;
-(void)setAttrStyleEnabled:(BOOL)arg1 ;
-(NSArray *)additionalReadAccessAllowedURLs;
-(void)setAdditionalReadAccessAllowedURLs:(NSArray *)arg1 ;
-(unsigned long long)wirelessContextIdentifier;
-(void)setWirelessContextIdentifier:(unsigned long long)arg1 ;
-(NSArray *)cachePartitionedURLSchemes;
-(void)setCachePartitionedURLSchemes:(NSArray *)arg1 ;
-(NSArray *)alwaysRevalidatedURLSchemes;
-(void)setAlwaysRevalidatedURLSchemes:(NSArray *)arg1 ;
-(BOOL)shouldCaptureAudioInUIProcess;
-(void)setShouldCaptureAudioInUIProcess:(BOOL)arg1 ;
-(void)setPresentingApplicationPID:(int)arg1 ;
-(int)presentingApplicationPID;
-(void)setProcessSwapsOnNavigation:(BOOL)arg1 ;
-(BOOL)processSwapsOnNavigation;
-(void)setPrewarmsProcessesAutomatically:(BOOL)arg1 ;
-(BOOL)prewarmsProcessesAutomatically;
-(void)setUsesWebProcessCache:(BOOL)arg1 ;
-(BOOL)usesWebProcessCache;
-(void)setAlwaysKeepAndReuseSwappedProcesses:(BOOL)arg1 ;
-(BOOL)alwaysKeepAndReuseSwappedProcesses;
-(void)setProcessSwapsOnWindowOpenWithOpener:(BOOL)arg1 ;
-(BOOL)processSwapsOnWindowOpenWithOpener;
-(BOOL)pageCacheEnabled;
-(void)setPageCacheEnabled:(BOOL)arg1 ;
-(BOOL)usesSingleWebProcess;
-(void)setUsesSingleWebProcess:(BOOL)arg1 ;
-(BOOL)suppressesConnectionTerminationOnSystemChange;
-(void)setSuppressesConnectionTerminationOnSystemChange:(BOOL)arg1 ;
-(BOOL)isJITEnabled;
-(void)setJITEnabled:(BOOL)arg1 ;
-(void)setHSTSStorageDirectory:(id)arg1 ;
-(NSURL *)hstsStorageDirectory;
-(BOOL)alwaysRunsAtBackgroundPriority;
-(void)setAlwaysRunsAtBackgroundPriority:(BOOL)arg1 ;
-(BOOL)shouldTakeUIBackgroundAssertion;
-(void)setShouldTakeUIBackgroundAssertion:(BOOL)arg1 ;
-(NSString *)customWebContentServiceBundleIdentifier;
-(void)setCustomWebContentServiceBundleIdentifier:(NSString *)arg1 ;
-(BOOL)configureJSCForTesting;
-(void)setConfigureJSCForTesting:(BOOL)arg1 ;
@end

