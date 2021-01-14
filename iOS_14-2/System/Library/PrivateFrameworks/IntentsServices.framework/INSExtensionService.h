/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices
*/

#import <libobjc.A.dylib/INSAnalyticsObserver.h>
#import <libobjc.A.dylib/INSAnalyticsDataSource.h>
#import <libobjc.A.dylib/INSAppLaunchCommandDelegate.h>

@protocol OS_dispatch_queue, INSExtensionServiceDelegate;
@class NSObject, INCExtensionConnection, NSString, INExtensionContext, NSDictionary, NSArray;

@interface INSExtensionService : NSObject <INSAnalyticsObserver, INSAnalyticsDataSource, INSAppLaunchCommandDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _requestDelegateQueue;
	INCExtensionConnection* _currentConnection;
	NSString* _currentBundleIdForDisplay;
	INExtensionContext* _extensionContext;
	NSDictionary* _options;
	id<INSExtensionServiceDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSDictionary * options;                                //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<INSExtensionServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) INExtensionContext * extensionContext;                      //@synthesize extensionContext=_extensionContext - In the implementation block
@property (nonatomic,copy) NSArray * airPlayRouteIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * commandIdentifiers; 
@property (nonatomic,copy,readonly) NSString * groupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOptions:(id)arg1 ;
-(void)_extensionRequestDidFinishForIntent:(id)arg1 error:(id)arg2 ;
-(id)_extensionInputItems;
-(INExtensionContext *)extensionContext;
-(NSString *)groupIdentifier;
-(id)init;
-(void)_logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3 ;
-(NSArray *)commandIdentifiers;
-(id)_updatedEventContextWithExtensionLoadType:(id)arg1 wasPrewarmed:(BOOL)arg2 ;
-(id<INSExtensionServiceDelegate>)delegate;
-(BOOL)_errorImpliesCloudRelay:(id)arg1 ;
-(BOOL)_isVoiceShortcutsRemoteExecutionUnavailable:(id)arg1 ;
-(NSDictionary *)options;
-(/*^block*/id)completionHandlerForAppLaunchCommand:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<INSExtensionServiceDelegate>)arg1 ;
-(void)resetExternalResources;
-(id)analytics:(id)arg1 contextDictionaryForCommand:(id)arg2 ;
-(BOOL)_shouldPrepareAudioSessionForCommand:(id)arg1 intent:(id)arg2 ;
-(id)_siriLanguageCode;
-(void)setAirPlayRouteIdentifiers:(NSArray *)arg1 ;
-(id)analytics:(id)arg1 contextDictionaryForError:(id)arg2 ;
-(void)_requiresHandlingCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_connectionForIntent:(id)arg1 ;
-(NSArray *)airPlayRouteIdentifiers;
-(void)_extensionRequestWillStartForIntent:(id)arg1 ;
-(void)handleCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_logPrewarmDidEndWithCommand:(id)arg1 applicationIdentifier:(id)arg2 wasPrewarmed:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_prewarmExtensionWithIntent:(id)arg1 applicationIdentifier:(id)arg2 command:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)analytics:(id)arg1 needsToLogEventWithType:(long long)arg2 context:(id)arg3 contextNoCopy:(BOOL)arg4 ;
@end

