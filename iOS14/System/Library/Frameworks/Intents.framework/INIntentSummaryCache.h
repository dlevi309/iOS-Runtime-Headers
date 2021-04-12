/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface INIntentSummaryCache : NSObject <LSApplicationWorkspaceObserverProtocol> {

	int _systemLanguageChangeNotificationToken;
	NSObject*<OS_dispatch_queue> _resourceAccessQueue;
	NSMutableDictionary* _allBundlesCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> resourceAccessQueue;              //@synthesize resourceAccessQueue=_resourceAccessQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * allBundlesCache;                         //@synthesize allBundlesCache=_allBundlesCache - In the implementation block
@property (nonatomic,readonly) int systemLanguageChangeNotificationToken;                     //@synthesize systemLanguageChangeNotificationToken=_systemLanguageChangeNotificationToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
-(void)invalidateCache;
-(void)stopObservingApplicationWorkspaceChanges;
-(id)init;
-(void)stopAutomaticInvalidation;
-(NSObject*<OS_dispatch_queue>)resourceAccessQueue;
-(void)stopObservingSystemLanguageChanges;
-(BOOL)getSubtitle:(id*)arg1 forIntent:(id)arg2 languageCode:(id)arg3 ;
-(void)startObservingApplicationWorkspaceChanges;
-(void)startAutomaticInvalidation;
-(int)systemLanguageChangeNotificationToken;
-(id)bundleCacheForBundleId:(id)arg1 ;
-(void)invalidateCacheForBundleId:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)setTitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3 ;
-(void)setSubtitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3 ;
-(id)cachedSummaryForIntent:(id)arg1 languageCode:(id)arg2 creatingIfNeeded:(BOOL)arg3 ;
-(void)setBundleCache:(id)arg1 forBundleId:(id)arg2 ;
-(void)startObservingSystemLanguageChanges;
-(BOOL)getTitle:(id*)arg1 forIntent:(id)arg2 languageCode:(id)arg3 ;
-(NSMutableDictionary *)allBundlesCache;
-(void)dealloc;
@end

