/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFResource.h>
#import <libobjc.A.dylib/ICAppInstallStatusObserver.h>

@protocol OS_dispatch_queue;
@class WFiTunesSessionManager, NSObject, NSString, ICApp;

@interface WFAppInstalledResource : WFResource <ICAppInstallStatusObserver> {

	BOOL _skipLookup;
	WFiTunesSessionManager* _currentAppNameLookupSessionManager;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSString* _appName;
	NSString* _appIdentifier;

}

@property (nonatomic,retain) WFiTunesSessionManager * currentAppNameLookupSessionManager;              //@synthesize currentAppNameLookupSessionManager=_currentAppNameLookupSessionManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateQueue;                                //@synthesize stateQueue=_stateQueue - In the implementation block
@property (assign,nonatomic) BOOL skipLookup;                                                          //@synthesize skipLookup=_skipLookup - In the implementation block
@property (nonatomic,copy) NSString * appName;                                                         //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) NSString * appIdentifier;                                               //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) ICApp * app; 
+(BOOL)mustBeAvailableForDisplay;
+(BOOL)refreshesAvailabilityOnApplicationResume;
-(NSString *)appIdentifier;
-(void)setAppName:(NSString *)arg1 ;
-(id)eventDictionary;
-(ICApp *)app;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(NSString *)appName;
-(void)dealloc;
-(id)initWithDefinition:(id)arg1 ;
-(void)refreshAvailability;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2 ;
-(id)appNotInstalledError;
-(WFiTunesSessionManager *)currentAppNameLookupSessionManager;
-(void)setCurrentAppNameLookupSessionManager:(WFiTunesSessionManager *)arg1 ;
-(BOOL)skipLookup;
-(void)setSkipLookup:(BOOL)arg1 ;
@end

