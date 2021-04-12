/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)invalidateCache;
-(id)bundleCacheForBundleId:(id)arg1 ;
-(void)setBundleCache:(id)arg1 forBundleId:(id)arg2 ;
-(id)cachedSummaryForIntent:(id)arg1 languageCode:(id)arg2 creatingIfNeeded:(BOOL)arg3 ;
-(BOOL)getTitle:(id*)arg1 forIntent:(id)arg2 languageCode:(id)arg3 ;
-(BOOL)getSubtitle:(id*)arg1 forIntent:(id)arg2 languageCode:(id)arg3 ;
-(void)setTitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3 ;
-(void)setSubtitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3 ;
-(void)startAutomaticInvalidation;
-(void)stopAutomaticInvalidation;
-(void)startObservingApplicationWorkspaceChanges;
-(void)stopObservingApplicationWorkspaceChanges;
-(void)startObservingSystemLanguageChanges;
-(void)stopObservingSystemLanguageChanges;
-(void)invalidateCacheForBundleId:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)resourceAccessQueue;
-(NSMutableDictionary *)allBundlesCache;
-(int)systemLanguageChangeNotificationToken;
@end

