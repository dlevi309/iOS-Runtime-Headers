/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/

#import <CoreSpotlight/CSXPCConnection.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableSet, NSSet, NSArray, NSObject;

@interface SpotlightReceiverConnection : CSXPCConnection {

	NSMutableSet* _positiveSet;
	NSMutableSet* _negativeSet;
	AB _disabled;
	BOOL _wantsHTML;
	BOOL _wantsText;
	BOOL _setupStarted;
	BOOL _setupComplete;
	BOOL _skipFileProviderItems;
	int _supportedJobs;
	AI _requestCount;
	NSSet* _bundleIDs;
	NSArray* _contentTypes;
	NSSet* _INIntentClassNames;
	NSObject*<OS_dispatch_queue> _senderQueue;
	double _minDate;
	NSObject*<OS_dispatch_semaphore> _setupSemaphore;

}

@property (nonatomic,readonly) NSSet * bundleIDs;                                     //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,readonly) NSArray * contentTypes;                                //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,readonly) NSSet * INIntentClassNames;                            //@synthesize INIntentClassNames=_INIntentClassNames - In the implementation block
@property (nonatomic,readonly) int supportedJobs;                                     //@synthesize supportedJobs=_supportedJobs - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> senderQueue;              //@synthesize senderQueue=_senderQueue - In the implementation block
@property (nonatomic,readonly) AI requestCount;                                       //@synthesize requestCount=_requestCount - In the implementation block
@property (assign,nonatomic) BOOL wantsHTML;                                          //@synthesize wantsHTML=_wantsHTML - In the implementation block
@property (assign,nonatomic) BOOL wantsText;                                          //@synthesize wantsText=_wantsText - In the implementation block
@property (assign,nonatomic) BOOL setupStarted;                                       //@synthesize setupStarted=_setupStarted - In the implementation block
@property (assign,nonatomic) BOOL setupComplete;                                      //@synthesize setupComplete=_setupComplete - In the implementation block
@property (assign,nonatomic) BOOL skipFileProviderItems;                              //@synthesize skipFileProviderItems=_skipFileProviderItems - In the implementation block
@property (assign,nonatomic) double minDate;                                          //@synthesize minDate=_minDate - In the implementation block
@property (nonatomic,readonly) BOOL unresponsive; 
@property (retain) NSObject*<OS_dispatch_semaphore> setupSemaphore;                   //@synthesize setupSemaphore=_setupSemaphore - In the implementation block
+(void)setup;
-(NSSet *)bundleIDs;
-(void)deleteAllUserActivities:(id)arg1 ;
-(BOOL)_wantsBundleID:(id)arg1 ;
-(void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 items:(id)arg3 itemsContent:(id)arg4 ;
-(BOOL)wantsText;
-(void)deleteFromBundle:(id)arg1 ;
-(NSArray *)contentTypes;
-(void)setSetupComplete:(BOOL)arg1 ;
-(NSSet *)INIntentClassNames;
-(void)runOnSenderQueue:(/*^block*/id)arg1 ;
-(void)handleError:(id)arg1 ;
-(void)setWantsText:(BOOL)arg1 ;
-(void)startSetup;
-(void)receiverRequestComplete;
-(void)setMinDate:(double)arg1 ;
-(id)initWithServiceName:(id)arg1 clientID:(long long)arg2 wantsText:(BOOL)arg3 wantsHTML:(BOOL)arg4 ;
-(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2 retainedData:(id)arg3 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 ;
-(void)deleteFromBundle:(id)arg1 sinceDate:(id)arg2 ;
-(void)donateRelevantActions:(id)arg1 bundleID:(id)arg2 ;
-(void)enableReceiver;
-(BOOL)unresponsive;
-(void)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(void)disableReceiver;
-(AI)requestCount;
-(BOOL)skipFileProviderItems;
-(void)setSkipFileProviderItems:(BOOL)arg1 ;
-(void)purgeFromBundle:(id)arg1 identifiers:(id)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)setupSemaphore;
-(BOOL)canRun;
-(void)setWantsHTML:(BOOL)arg1 ;
-(BOOL)setupStarted;
-(void)receiverRequestStart;
-(void)setSetupStarted:(BOOL)arg1 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(BOOL)wantsHTML;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(void)dictionary:(id)arg1 setDecoderData:(id)arg2 forKey:(const char*)arg3 ;
-(void)deleteFromBundle:(id)arg1 contentType:(id)arg2 identifiers:(id)arg3 ;
-(double)minDate;
-(BOOL)setupComplete;
-(void)deleteFromBundle:(id)arg1 domainIdentifiers:(id)arg2 ;
-(void)invalidationHandler;
-(BOOL)disabled;
-(void)addInteraction:(id)arg1 intentClassName:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 ;
-(BOOL)_wantsContentType:(id)arg1 ;
-(void)deleteFromBundle:(id)arg1 encodedIdentifiers:(id)arg2 ;
-(void)setSetupSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setupComplete:(BOOL)arg1 ;
-(int)supportedJobs;
-(NSObject*<OS_dispatch_queue>)senderQueue;
@end

