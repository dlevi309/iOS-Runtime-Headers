/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _CDInteractionAdvising, OS_dispatch_queue;
@class NSObject, _CDCachedPeopleSuggestion, _CDInteractionStoreNotificationReceiver, _CDPeopleSuggesterContext, _CDPeopleSuggesterSettings;

@interface _CDPeopleSuggester : NSObject {

	id<_CDInteractionAdvising> _advisor;
	NSObject*<OS_dispatch_queue> _queue;
	_CDCachedPeopleSuggestion* _cache;
	_CDInteractionStoreNotificationReceiver* _receiver;
	int _settingsNotifyToken;
	BOOL _enableCaching;
	_CDPeopleSuggesterContext* _context;
	_CDPeopleSuggesterSettings* _settings;
	double _cacheTimeoutSeconds;

}

@property (assign) BOOL enableCaching;                                 //@synthesize enableCaching=_enableCaching - In the implementation block
@property (assign) double cacheTimeoutSeconds;                         //@synthesize cacheTimeoutSeconds=_cacheTimeoutSeconds - In the implementation block
@property (retain) _CDPeopleSuggesterContext * context;                //@synthesize context=_context - In the implementation block
@property (retain) _CDPeopleSuggesterSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(id)peopleSuggesterWithDirectDBAccess;
+(id)peopleSuggester;
+(id)createAdvisorSettingsFromContext:(id)arg1 settings:(id)arg2 ;
+(id)restrictedPrefixForPrefix:(id)arg1 ;
+(id)peopleSuggesterUsingDaemon;
+(id)loggingTagForAutocompleteFeedback;
-(void)invalidateCache;
-(id)init;
-(void)setEnableCaching:(BOOL)arg1 ;
-(_CDPeopleSuggesterContext *)context;
-(void)setSettings:(_CDPeopleSuggesterSettings *)arg1 ;
-(_CDPeopleSuggesterSettings *)settings;
-(BOOL)enableCaching;
-(id)initWithAdvisor:(id)arg1 ;
-(void)updateSettings;
-(id)suggestPeopleWithError:(id*)arg1 ;
-(double)cacheTimeoutSeconds;
-(void)suggestPeopleWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCacheTimeoutSeconds:(double)arg1 ;
-(void)setContext:(_CDPeopleSuggesterContext *)arg1 ;
@end

