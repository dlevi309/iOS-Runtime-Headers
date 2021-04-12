/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightReceiver.framework/SpotlightReceiver
*/

#import <CoreSpotlight/CSXPCConnection.h>

@protocol SpotlightReceiver;
@class NSObject, NSArray;

@interface CSRecieverConnection : CSXPCConnection {

	int _supportedJobs;
	NSObject*<SpotlightReceiver> _receiver;
	NSArray* _bundleIDs;
	NSArray* _contentTypes;
	NSArray* _INIntentClassNames;

}

@property (nonatomic,readonly) int supportedJobs;                                  //@synthesize supportedJobs=_supportedJobs - In the implementation block
@property (nonatomic,readonly) NSObject*<SpotlightReceiver> receiver;              //@synthesize receiver=_receiver - In the implementation block
@property (nonatomic,copy) NSArray * bundleIDs;                                    //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,copy) NSArray * contentTypes;                                 //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,copy) NSArray * INIntentClassNames;                           //@synthesize INIntentClassNames=_INIntentClassNames - In the implementation block
-(NSArray *)bundleIDs;
-(int)deleteAllUserActivities:(id)arg1 ;
-(int)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(int)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(int)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(int)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 ;
-(int)donateRelevantShortcuts:(id)arg1 bundleID:(id)arg2 ;
-(int)donateRelevantActions:(id)arg1 bundleID:(id)arg2 ;
-(NSObject*<SpotlightReceiver>)receiver;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(BOOL)addClientConnectionIfAllowedForConnection:(id)arg1 ;
-(BOOL)handleCommand:(const char*)arg1 info:(id)arg2 connection:(id)arg3 ;
-(BOOL)lostClientConnection:(id)arg1 error:(id)arg2 ;
-(NSArray *)contentTypes;
-(void)setContentTypes:(NSArray *)arg1 ;
-(int)handleSetup:(id)arg1 ;
-(int)indexFromBundle:(id)arg1 protectionClass:(id)arg2 items:(id)arg3 itemsContent:(id)arg4 ;
-(int)deleteFromBundle:(id)arg1 sinceDate:(id)arg2 domains:(id)arg3 deletes:(id)arg4 ;
-(int)purgeFromBundle:(id)arg1 identifiers:(id)arg2 ;
-(int)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(int)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(id)initWithReceiver:(id)arg1 forServiceName:(id)arg2 ;
-(int)supportedJobs;
-(NSArray *)INIntentClassNames;
-(void)setINIntentClassNames:(NSArray *)arg1 ;
@end

